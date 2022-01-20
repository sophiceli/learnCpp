#include <cstdio>

int main()
{
    int gettysburg{};
    int* gettysburg_adress = &gettysburg;
    printf("Value at gettysburg adress: %d\n", *gettysburg_adress);
    printf("gettysburg: %p\n", gettysburg_adress);
    *gettysburg_adress = 17325;
    printf("Value at gettysburg_adress: %d\n", *gettysburg_adress);
    printf("&gettysburg adress: %p\n", gettysburg_adress);
}