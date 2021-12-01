#include <stdio.h>
void Select_Sort(double array[],int n);
int main()
{
    double array[100];
    int n=0,i;

    do{
        printf("Tedad Adad Mored Niaz ra Vared Konid:\n");
        scanf("%d", &n);
        if (n < 1) {
            printf("Error!!\a\n");
            while (getchar() == '\n');
        }}while (n < 1);
    printf("Tedad %d Adad\n", n);
    for(i = 0; i < n; i++) {

        printf("Adad %d: ", i);
        scanf("%lf", &array[i]);
    }
    Select_Sort(array,n);
    return 0;

}
void Select_Sort(double array[], int n)
{
    int i, j, position, swap;
    for(i = 0; i < (n - 1); i++)
    {
        position=i;
        for(j = i + 1; j < n; j++)
        {
            if(array[position]>array[j])
                position=j;
        }
        if(position != i)
        {
            swap=array[i];
            array[i]=array[position];
            array[position]=swap;
        }
    }
    printf("\Moratab shode:\n");
    for(i = 0; i < n; i++){
        printf("  %lf", array[i]);
        printf("\n_______________\n");
    }
}
