#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
    char Gamer=0;
    int computer,gamer;
    int result;
    while (1)
    {
        printf("This little game is - scissors, stone, cloth,\nYour choice is:\n");
        printf("A:Scissors\nB:Stone\nC:Cloth\n");
        scanf_s("%c", &Gamer);
        switch (Gamer)
        {
        case 65 | 97: //A a
            gamer = 4;
            break;
        case 66 | 98: //B b
            gamer = 7;
            break;
        case 67 | 99: //C c
            gamer = 10;
            break;

        default:
            printf("Your choice is%c\nError,exit...\n", Gamer);
            system("pause");
            return 0;
            break;
        }

        srand((unsigned)time(0));//每一次的seed都不同
        computer = rand() % 3+1;
        result = gamer + computer;
        printf("AI's choice is:");
        switch (computer)
        {
        case 3:printf("Scissors\n"); break;
        case 1:printf("Stone\n"); break;
        case 2:printf("Cloth\n"); break;
        }
        printf("Your choice is:");
        switch (gamer)
        {
        case 4:printf("Scissors\n"); break;
        case 7:printf("Stone\n"); break;
        case 10:printf("Cloth\n"); break;
        }
        if (result == 6 || result == 10 || result == 11)
            printf("YOU WIN!");
        else if (result == 5 || result == 9 || result == 13)
            printf("AI WINS!");
        else
            printf("DRAW");
        system("pause>nul&&cls"); //清屏
    }
    return 0;
}
