#include <cstdio>

enum class operation
{
    add,
    subtract,
    multiply,
    divide
};

struct calculator
{
   calculator(operation op_in)
   {
    op  = op_in;
   }
int calculate(int a, int b)
{
    switch(op)
    {
        case operation::add:
            return a + b;
        case operation::subtract:
            return a - b;
        case operation::multiply:
            return a * b;
        case operation::divide:
            return a / b;
    }
    return 0;
}
operation op;
};

int main()
{
    calculator add(operation::add);
    printf("1 + 2 = %d\n", add.calculate(1,2));
    
    calculator divide(operation::divide);
    printf("8 / 2 = %d\n", divide.calculate(8,2));
}
 