#include <stdio.h>

int main() {
    double arzeshmahsolat;
    int mojodi;
    int tedadmahsolat=(0);


    printf("Mojodi khod ra vared konid\n\n");
    scanf("%d", &mojodi);
    int mahsool;
    int getout=1;
    int finish=0;
    while (getout >= finish) {

        printf("Mahsool khod ra entekhab konid\n\n\nshir(100 toman)(1 ra vared konid)\n\npanir(150 toman)(2 ra vared konid)\n\nnoon(120 toman)(3 ra vared konid)\n\ngosht(500 toman)(4 ra vared konid)\n\nbaraye payan kharid 9 ra feshar dahid\n\n");
        scanf("%d", &mahsool);

        switch (mahsool) {

            case (1):
                printf("shir be sabad ezafe shod\n\n");
                mojodi = mojodi - 100;
                arzeshmahsolat = arzeshmahsolat + 100;
                tedadmahsolat++;
                break;
            case (2):
                printf("panir be sabad ezafe shod\n\n");
                arzeshmahsolat = arzeshmahsolat + 150;
                mojodi = mojodi - 150;
                tedadmahsolat++;
                break;

            case (3):
                printf("noon be sabad ezafe shod\n\n");
                arzeshmahsolat = arzeshmahsolat + 120;
                mojodi = mojodi - 120;
                tedadmahsolat++;
                break;


            case (4):

                printf("gosht be sabad ezafe shod\n\n");
                arzeshmahsolat = arzeshmahsolat + 500;
                mojodi = mojodi - 500;
                tedadmahsolat++;
                break;


            case (9):
                printf("amaliyat kahrid dar hal pardazesh ast\n\n");
                getout=0;
                finish=1;
                break;

            default: printf("mahsool vojod nadarad");
        }


    }
    printf("Mojodi shoma %d toman mibashad arzesh mahsoolat kharide shode %lf ast tedad mahsoolat shoma %d mibashad",mojodi,arzeshmahsolat,tedadmahsolat);
    return 0;
}
