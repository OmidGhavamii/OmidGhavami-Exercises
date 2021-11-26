#include <conio.h>
#include <windows.h>
#include  <stdio.h>

int main() {
    int a, b, c, d, e, t , f;
    a=10;
    b=8;
    f=6;
    t=4;
    e=2;

    printf("**\n");
    Beep(500,1000);
    d = a * b * f;
    printf("%d * %d * %d= %d\n", a, b, f, d);
    Beep(500,1000);

    printf("***\n");
    Beep(500,1000);
    Beep(500,1000);
    Beep(500,1000);
    d = a / b;
    printf("%d / %d = %d\n", a, b, d);
    Beep(500,1000);
    Beep(500,1000);
    Beep(500,1000);
    printf("###\n");

    printf("#\t\t\t#\t\t\t#\t\t\t#\t\t\t#\n");
    c = a + b + t + f + e;
    printf("%d + %d + %d + %d + %d = %d\n", a, b, t , f ,e, c);
    printf("*\t\t\t\t*\t\t\t\t*\t\t\t*\t\t\t*\n");
    return 0;
    //Tamrin 3
}
