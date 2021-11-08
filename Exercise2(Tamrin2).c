#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = Calculator(3, 4);
    printf("C %d \n", number);

    return 0;
}

int Calculator(int numberOne, int NumberTwo)
{
    int C = numberOne * NumberTwo;
    return C;
}
