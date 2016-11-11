#include<stdio.h>
int main(void)
{
    double a,b,c,d,t,r;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    r=a/b;
    t=(1-a/b)*(1-c/d);
    printf("%.8f\n",r/(1-t));
    return 0;
}