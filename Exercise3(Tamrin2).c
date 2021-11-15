#include <stdio.h>

int main()
{
    int one;
    printf("Enter a:\n");
    scanf("%d",&one);
    int two;
    printf("Enter b:\n");
    scanf("%d",&two);
    int three;
    printf("Enter c:\n");
    scanf("%d",&three);
    int four;
    printf("Enter f:\n");
    scanf("%d",&four);

    int a;
    a = (two - one)*(two - one);
    int b;
    b = (four - three)*(four - three);
    double c;
    c = sqrt(a + b);
    printf("%d\n",c);
    printf("A Point:""%d",a);
    printf("B Point:""%d",b);
    if( a>0 ) {
        printf("\nA is Point Positive\n" );
    } else if( a<0 ) {
        printf("\nA is Point Negative\n" );
    } else if( b>0 ) {
        printf("\nB is Point Positive\n" );
    } else if( b<0 ) {
        printf("\nB is Point Negative\n" );
    }

    return 0;
}


