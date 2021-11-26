#include <stdio.h>

int main() {
    int Space;
    int Natije;

    printf("Meghdar Faza ra Vared konid(GB):\n\n");
    scanf("%d", &Space);
    Space = Space * 1000;
    int File;
    int Free;
    int getout=1;
    int finish=0;
    Free = 0;
    while (getout >= finish) {

        printf("File Morede Nazar ra entekhab konid(1 Text , 2 Voice , 3 Video)\n\n");
        scanf("%d", &File);

        switch (File) {

            case (1):
                printf("Text (Baraye Pardazesh 4 ra Vared konid)\n\n");
                Free = Free + 1;

                break;
            case (2):
                printf("Voice (Baraye Pardazesh 4 ra Vared konid)\n\n");
                Free = Free + 3;
                break;

            case (3):
                printf("Video (Baraye Pardazesh 4 ra Vared konid)\n\n");
                Free = Free + 1;
                break;

            case (4):
                printf("Calculation Free Space\n\n");
                getout=0;
                finish=1;
                break;

            default: printf("Error!!");
        }


    }
    Natije = Space - Free;
    printf("Free Space:%d MB Drive:%d MB Used Space: %d MB",Natije ,Space , Free );
    return 0;
}
