#include<stdio.h>
int main()
{
    int i, j, k, m;
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//以1至n为序给每个人编号
    printf("Please enter the number of the report:");
    scanf("%d",&j);
    i = 0;//i为每次循环时计数变量
    k = 0;//k为按1,2,3...报数时的计数变量
    m = 0;//m为退出人数
    while(m < 9)//当退出人数比n-1少时执行循环体
    {
        if(num[i] != 0)//当前的这个人还没有出局
            k++;
        if(k == j)//这个人这轮需要出局
        {
            printf("Outgoing serial number:%d\n", num[i]);
            num[i] = 0;//将退出的人的编号置为0
            k = 0;//k报到j后,重置为0
            m++;//退出的人数+1
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


