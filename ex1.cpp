#include <cstdio>

int absolute_value(int x)
{
    if (x < 0)
    {
        x = -x;
    }
    else if (x >= 0)
    {
        x = x ;
    }
    return x;
}

int sum(int c)
{
    int a = 10;
    int b = 3;
    c = a + b;
}


int main()
{
    int my_num = -10;

    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
    printf("the sum of a and b is %d",sum);
}
