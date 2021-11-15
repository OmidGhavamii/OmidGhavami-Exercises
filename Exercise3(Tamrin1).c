#include <stdio.h>

int main()
{
    int x;
    printf("Enter x:\n");
    scanf("%d",&x);
    int y;
    printf("Enter y:\n");
    scanf("%d",&y);
    int c;
    c = x + y*y/x+y;
    printf("Formol(x+y*y/x+y): ""%d + %d * %d / %d + %d = %d\n", x, y, y , x , y,c);


    return 0;
}
