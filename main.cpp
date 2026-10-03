#include <stdio.h>

int main() {
    int* crash = nullptr;
    *crash = 114514;
}