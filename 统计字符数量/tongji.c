#include<stdio.h>
int main()
{
    char text[1000];
    char*p=text;
    printf("Please enter a string:");
    gets(text);
    puts(text);
    int i;
    int big=0,small=0,number=0,other=0,space=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='a'&&*(p+i)<='z')
        {
            small++;
        }
        else if(*(p+i)>='A'&&*(p+i)<='Z')
        {
            big++;
        }
        else if(*(p+i)>='0'&&*(p+i)<='9')
        {
            number++;
        }
        else if(*(p+i)=' ')
        {
            space++;
        }
        else
        {
            other++;
        }
                
    }
    printf("The number of upper-case character is %d\n",big);
    printf("The number of lower-case character is %d\n",small);
    printf("The number of numerical character is %d\n",number);
    printf("The number of space character is %d\n",space);
    printf("The number of other character is %d\n",other);
}

