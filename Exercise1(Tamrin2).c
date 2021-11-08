#include <stdio.h>

int main()
{
    int a, b, c, d, e, t , f;
     a=8;
     b=4;
     f=2;

     printf("Used Numbers are: 8 4 2\n");
     printf("\n");
    c = a + b;
    printf("Sum is: ""%d + %d = %d\n", a, b, c);

    d = a * b * f;
    printf("Multiplication is: ""%d * %d * %d= %d\n", a, b, f, d);


    d = a / b;
    printf("Division is: ""%d / %d = %d\n", a, b, d);

    d = a - b - f;
    printf("Subtraction is : ""%d - %d - %d = %d\n", a, b, f , d);

    t=23;
    d = a * b;
    e = d +t;
    printf("Multiplication is: ""%d * %d = %d + %d = %d\n", a, b, d , t , e);

    return 0;
    //Tamrin 2
}

