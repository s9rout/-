#include<stdio.h>
int f(int*a,int*b,int*c,int*d)
{
    int max,min;
    if(*a>*b)
    {
        max=*a;
        min=*b;
    }
    else
    {
        max=*b;
        min=*a;
    }
    int p,q;
    p=max%min;
    q=max*min;
    while(p!=0)
    {
        max=min;
        min=p;
        p=max%min;
    }
    int lcm=q/min;
    *c=min;
    *d=lcm;
    
}
int main()
{
    int num_a,num_b;
    int*a,*b;
    scanf("%d",&num_a);
    scanf("%d",&num_b);
    a=&num_a;
    b=&num_b;
    int*gcd,*lcm;
    int g;//提供g和l两个确定的地址作为实参，然后调用f函数赋给这两个确定的地址值，从而解决一个函数只能return一个值的问题。
    int l;
    gcd=&g;
    lcm=&l;
    f(a,b,gcd,lcm);
    printf("The greatest common divisor of %d and %d is %d, and the least common multiple is %d",num_a,num_b,*gcd,*lcm);
}