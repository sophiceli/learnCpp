#include <cstdio>

int main()
{
    unsigned short a = 0b10101010;
    //%hu calls binary
    printf("%hu\n", a);
    int b = 0123;
    //%d calls int
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFF;
    // calls long long hex %llu
    printf("%llu\n", d);
}