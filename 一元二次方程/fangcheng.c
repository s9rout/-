#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,x1,x2;
    printf("Please enter the coefficients a,b,c:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float derta=b*b-4*a*c,p=(-b)/(2*a),q=sqrt(derta)/(2*a);
    if(derta>=0)
    {
        x1=p-q;
        x2=p+q;
        printf("x1=%7.4f, x2=%7.4f\n",x1,x2);
    }
    else
    {
        printf("ERROR");
    }
    

}
