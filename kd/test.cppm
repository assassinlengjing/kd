// math_module.cppm
export module test;
#define START_EXPORT export {
#define END_EXPORT }

START_EXPORT

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

END_EXPORT
