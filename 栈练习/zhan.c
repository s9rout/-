#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAXNUM 100
typedef int elemtype;
typedef struct
{
    elemtype stack[MAXNUM];    
    int top;
}Seqstack;                                      //定义栈.
int initstack(Seqstack*s)
{        
    s->top=-1;
    return TRUE;
}                                              //初始化栈.
int push( Seqstack *s, elemtype x )
{
    if( s->top >= MAXNUM - 1 )
       {   
            printf ("上溢出！\n");
            return FALSE;
       }
    else
       {  
            s->top++;
            s->stack[s->top] = x;
            return TRUE;
       }
}                                                //入栈.
int pop(Seqstack *s)
{      
    if(s->top<0)
        printf("下溢");
    else
        s->top--;
}                                                //出栈.
elemtype gettop( Seqstack *s )
{ 
    if( s->top < 0 )
    {  
        printf("下溢出！\n");
        return FALSE;
    }
    else
    return(s->stack[ s->top] ) ;
}                                                //取栈顶元素.
int main()
{
    Seqstack s1,s2;  
    initstack(&s1);
    initstack(&s2);
    push(&s1,3);
    push(&s1,5);
    push(&s1,7);
    push(&s1,11);
    push(&s1,15);                            //给定一有序栈s1.
    int i;                              
    for(i=0;i<=s1.top;i++)
    {
        printf("%4d",s1.stack[i]);
    }
    printf("\n");
    int x;
    scanf("%d",&x);
    while(x<gettop(&s1))
{
    push(&s2,gettop(&s1));
    pop(&s1);
}
    if(x>gettop(&s1))
    push(&s1,x);
    while(s2.top!=-1)
    {
        push(&s1,gettop(&s2));
        pop(&s2);
    }
    for(i=0;i<=s1.top;i++)
    {
        printf("%4d",s1.stack[i]);
    }    
}