#include <stdio.h>

int main() {
    int A;
    int a;
    int b;
    b = 1.99;
    printf("Time Usage of Internet (Maximum 10hrs = 7.99$):\n\n");
    scanf("%d", &a);
    if (a < 11)
    {
        printf("Successful!\n");
        A = a * b;
    }else
    {
        printf("Error!!");
        return 0;

    }
    int Internet;
    int getout=1;
    int finish=0;
    while (getout >= finish) {

        printf("Select Your Task :"
               "\n(1) +1 hrs on Internet Usage (1.99$)\n"
               "\n(2) charges.txt\n"
               "\n(3) Internet Usage Price\n"
               "\n(5)QUIT \nValue:");
        scanf("%d", &Internet);

        switch (Internet) {

            case (1):
                printf("(1) +1 hrs on Internet Usage (1.99$)\n");
                A = a + 1 ;
                printf("\nYour Internet Usage Time : %d\n",A);

                break;
            case (2):
                printf("(2) charges.txt\ncharges for 10/2009\nInternet Usage Price : %d ",A);
                printf("\nFinial Result : %d\n",A);
                break;
            case (3):
                printf("(3) Internet Usage Price\n\n");
                A = a * b;
                printf("\n*** Your Internet Usage Price : %d$ ***\n",A);
                break;
            case (5):
                printf("Quit\n\n");
                getout=0;
                finish=1;
                break;

            default: printf("Error!!");
        }


    }
    return 0;
}
