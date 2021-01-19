#include<stdio.h>
#include<string.h>
int f(char*p,char*q)
{
    int p_=strlen(p);
    int q_=strlen(q);       //计算两个字符串的长度。
    char*text,*key;
    text=p;
    key=q;
    int i=0,j=1;
    int acc=0;              //预设不存在。
    int t=0;                //设置变量t使得查询到之后能够直接退出遍历。
    while(i<p_)             //遍历text查询。      
    {
        if(*(text+i)!=*key) 
        {
            i++;            
        }                   //若首字符不同，则判断下一个字符是否相同。
        else
        {            
            do
            {
                if(*(text+i+j)==*(key+j))
                {
                    acc=1;
                    j++;
                    if(j==q_)
                    t=1;    //若key出现在text中，停止遍历，并输入ok。
                }
                else
                {
                    i+=j;
                    j=1;
                    break;  //如果后续字符不同的话从遍历过的字符之后重新遍历。
                }
                
            }
            while(j<q_);            
        }
        if(t==1)
        break;                
    }
    if(acc==1)
    {
        printf("ok.");
    }
    else
    {
        printf("no.");
    }    
}
int main()
{
    char a[100]="We are friends.";
    char b[100]="ends";
    char*p,*q;
    p=a;
    q=b;
    f(p,q);
}