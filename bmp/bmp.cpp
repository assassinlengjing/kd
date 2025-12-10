#include <windows.h>
#include <iostream>
#include <vector>

// 读取 BMP 文件到像素数组（24/32 位）
std::vector<COLORREF> LoadBMP(const wchar_t* filename, int& width, int& height) {
    HBITMAP hBitmap = (HBITMAP)LoadImageW(NULL, filename, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    if (!hBitmap) {
        std::cout << "模板加载失败!" << std::endl;
        return {};
    }

    BITMAP bmp;
    GetObject(hBitmap, sizeof(BITMAP), &bmp);
    width = bmp.bmWidth;
    height = bmp.bmHeight;

    std::vector<COLORREF> pixels(width * height);
    HDC hdc = GetDC(NULL);
    HDC hdcMem = CreateCompatibleDC(hdc);
    SelectObject(hdcMem, hBitmap);
    GetBitmapBits(hBitmap, width * height * 4, pixels.data());

    DeleteDC(hdcMem);
    ReleaseDC(NULL, hdc);
    DeleteObject(hBitmap);

    return pixels;
}

// 截图窗口，返回像素数组
std::vector<COLORREF> CaptureWindow(HWND hwnd, int& width, int& height) {
    RECT rc;
    GetClientRect(hwnd, &rc);
    width = rc.right - rc.left;
    height = rc.bottom - rc.top;

    HDC hdcWindow = GetDC(hwnd);
    HDC hdcMemDC = CreateCompatibleDC(hdcWindow);

    HBITMAP hbmScreen = CreateCompatibleBitmap(hdcWindow, width, height);
    SelectObject(hdcMemDC, hbmScreen);

    BitBlt(hdcMemDC, 0, 0, width, height, hdcWindow, 0, 0, SRCCOPY);

    BITMAP bmpScreen;
    GetObject(hbmScreen, sizeof(BITMAP), &bmpScreen);

    std::vector<COLORREF> pixels(width * height);
    GetBitmapBits(hbmScreen, width * height * 4, pixels.data());

    DeleteObject(hbmScreen);
    DeleteDC(hdcMemDC);
    ReleaseDC(hwnd, hdcWindow);

    return pixels;
}

// 带颜色容差的模板匹配
bool MatchTemplate(
    const std::vector<COLORREF>& screen, int sw, int sh,
    const std::vector<COLORREF>& templ, int tw, int th,
    double threshold = 0.9,
    int tolerance = 10)   // 颜色容差
{
    for (int y = 0; y <= sh - th; y++) {
        for (int x = 0; x <= sw - tw; x++) {
            int matchCount = 0;
            int total = tw * th;

            for (int ty = 0; ty < th; ty++) {
                for (int tx = 0; tx < tw; tx++) {
                    COLORREF c1 = screen[(y + ty) * sw + (x + tx)];
                    COLORREF c2 = templ[ty * tw + tx];

                    int r1 = GetRValue(c1), g1 = GetGValue(c1), b1 = GetBValue(c1);
                    int r2 = GetRValue(c2), g2 = GetGValue(c2), b2 = GetBValue(c2);

                    if (abs(r1 - r2) <= tolerance &&
                        abs(g1 - g2) <= tolerance &&
                        abs(b1 - b2) <= tolerance)
                        matchCount++;
                }
            }

            double score = (double)matchCount / total;
            if (score >= threshold) {
                std::cout << "找到匹配位置: (" << x << "," << y << ") 相似度=" << score << std::endl;
                return true;
            }
        }
    }
    return false;
}


// 模拟按键
extern "C" __declspec(dllexport) void PressKey(WORD vk) {
    INPUT input = { 0 };
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = vk;
    SendInput(1, &input, sizeof(INPUT));
}

extern "C" __declspec(dllexport) void ReleaseKey(WORD vk) {
    INPUT input = { 0 };
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = vk;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(INPUT));
}

int main() {


    HWND hwnd = FindWindow(NULL, L"Legend of Burning Fighters"); // 换成你的游戏窗口标题
    if (!hwnd) {
        std::cout << "未找到窗口!" << std::endl;
        return -1;
    }

    int sw, sh, tw, th;
    auto screen = CaptureWindow(hwnd, sw, sh);
    auto templ = LoadBMP(L"menu_button.bmp", tw, th);

    if (templ.empty()) return -1;

    if (MatchTemplate(screen, sw, sh, templ, tw, th)) {
        std::cout << "在菜单界面，执行操作..." << std::endl;
        PressKey(0x57);  // W 键
        Sleep(500);
        ReleaseKey(0x57);
    }
    else {
        std::cout << "不在菜单界面." << std::endl;
    }

    return 0;
}
