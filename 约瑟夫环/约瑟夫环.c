#include<stdio.h>
int f(int num[],int n,int m)
{
    int p;
    for(p=0;p<n;p++)
    {
        num[p]=p+1;
    }     //初始化数据
    int i, k, j;
    i = 0;//i为每次循环时计数变量
    k = 0;//k为按1,2,3...报数时的计数变量
    j = 0;//j为退出人数
    while(j < 9)//当退出人数比n-1少时执行循环体
    {
        if(num[i] != 0)//当前的这个人还没有出局
            k++;
        if(k == m)//这个人这轮需要出局
        {
            printf("The number of the NO.%d out is %d\n",j+1,num[i]);
            num[i] = 0;//将退出的人的编号置为0
            k = 0;//k报到m后,重置为0
            j++;//退出的人数+1
        }
        i++;
        if(i == 10)
            i = 0;//报数到尾后,i恢复为0
    }
    for(i = 0; i < 10; i++)
    {
        if(num[i] != 0)
        printf("The number of the last person left is:%d\n", num[i]);//只有一个num[i]不是0
    }
    return 0;
}
int main()
{
    int n,m;
    printf("Please print the total number of people:");scanf("%d",&n);
    printf("Please print the number of report");scanf("%d",&m);
    int num[n];
    f(num,n,m);
}