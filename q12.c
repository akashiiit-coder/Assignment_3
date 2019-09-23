#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a,b,c,p,q,r;
    scanf("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&a,&b,&c);
    double dis=(fabs(a*p+b*q+c))/(sqrt(a*a+b*b));
    
    if(dis>r)
    {
        printf("they do not intersect");
    }
    else if(dis==r)
    printf("the area of triangle is zero");
    else{
    double cl=sqrt(r*r-dis*dis);

         printf("%lf",cl*dis);
    }
    return 0;
}