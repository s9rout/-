#include<stdio.h>
int main()
{
    int year,month;
    printf("Input year,month:");
    scanf("%d",&year);
    scanf("%d",&month);
    switch(month)
    {
        case 1:"31 days\n";break;
        case 2:if(year%400==0||(year%4==0&&year%100!=0))
        {
            printf("29 days\n");
        }
        else
        {
            printf("28 days\n");
        }
        ;break;
        case 3:printf("31 days\n");break;
        case 4:printf("30 days\n");break;
        case 5:printf("31 days\n");break;
        case 6:printf("30 days\n");break;
        case 7:printf("31 days\n");break;
        case 8:printf("31 days\n");break;
        case 9:printf("30 days\n");break;
        case 10:printf("31 days\n");break;
        case 11:printf("30 days\n");break;
        case 12:printf("31 days\n");break;
        default:printf("Input error!\n");
    }

    return;
}
