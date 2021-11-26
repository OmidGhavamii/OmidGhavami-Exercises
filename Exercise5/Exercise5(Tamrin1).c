#include <stdio.h>

int main(){

    int Size, i, a[10];
    int Zoj = 0, Fard = 0;

    printf("\n Tedad Adad Baraye Anjam Amaliat : ");
    scanf("%d", &Size);

    printf("\n Adad ra vared konid: \n");
    for(i = 0; i < Size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < Size; i ++)
    {
        if(a[i] % 2 == 0)
        {
            Zoj++;
        }
        else
        {
            Fard++;
        }
    }

    printf("\n Tedad Adad Zoj = %d ", Zoj);
    printf("\n Tedad Adad Fard = %d ", Fard);
    return 0;
}
