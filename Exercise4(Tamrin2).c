#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }

    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}

int main() {



    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("\tbe sang kaghaz gheychi khosh amadid\n");
    for (int i = 0; i < 3; i++) {

        printf("1ra baraye sang, 2 ra baraye kaghaz va 3 ra baraye gheychi bezanid\n\n");
        printf("\tnobat bazikon: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("| shoma entekhab kardid: %c   |\n", playerChar);

        printf("1ra baraye sang, 2 ra baraye kaghaz va 3 ra baraye gheychi bezanid\n\n");
        printf("\tnobat Computer\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("| Computer entekhab kard: %c |\n", compChar);
        if (greater(compChar, playerChar) == 1) {
            compScore++;
            printf("\t\tcomputer in dast ra bord\n\n");
        } else if (greater(compChar, playerChar) == -1) {
            compScore++;
            playerScore++;
            printf("\t\tmosavi 2 bazikon 1 emtiyaz gereftand\n\n");
        } else {
            playerScore++;
            printf("\t\tshoma in dast ra bordid\n\n");
        }


        printf("| shoma: %d      |\n", playerScore);
        printf("| Computer: %d |\n", compScore);

    }


    printf("  shoma  Computer \n");
    printf("   %d      %d     \n", playerScore, compScore);

    if (playerScore > compScore) {

        printf("\t shoma barande shodid \n");

    } else if (playerScore < compScore) {

        printf("\t Computer barande shod \n");

    } else {

        printf("\t mosavi shod \n");

    }



    return 0; }
