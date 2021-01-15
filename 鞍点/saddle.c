#include<stdio.h>
int main()
{
    int array[3][3]={3,8,7,1,2,5,9,4,8};
    int(*p)[3];
    int i=0,j,k;
    for(p=array;i<3;i++)
    {
        int*max;
        int max_row=0;
        max=*(p+i);
        for(j=1;j<3;j++)
        {
            if(*max<*(*(p+i)+j))
            {
                max=(*(p+i)+j);
                max_row=j;
            }
        }
        printf("第%d行的第%d列是该行的最大的元素，为%d.\n",i,max_row,*max);
        int saddle=1;
        for(k=0;k<3;k++)
        {
            
           if(k==i)
           continue;
           if(*max>*(*(p+k)+max_row))
           {
               saddle=0;
               break;
           }
        }
        if(saddle==1)
        printf("这个元素为鞍点，它的行为%d,列为%d.\n",i,max_row);
        else
        {
            printf("这个元素不为鞍点.\n");
        }
    }
}