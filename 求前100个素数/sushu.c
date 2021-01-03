#include<stdio.h>
int findprime(int x,int knownprimes[],int numberofknownprimes)
{
    int ret=1;
    int i;
    for(i=0;i<numberofknownprimes;i++)
    {
        if(x%knownprimes[i]==0)
        {
            ret=0;
            break;
        }

    }
    return ret;
}
int main()
{
    #define number 100
   int prime[number]={2};
   int count=1;
   int i=3;
   while(count<number)
   {
       if(findprime(i,prime,count))
       {
           prime[count++]=i;
       }
       i++;
   }
   for(i=0;i<number;i++)
   {
       printf("%4d",prime[i]);
       if((i+1)%5)
       {
           printf("\t");
       }
       else
       {
           printf("\n");
       }
   }
return 0;
}