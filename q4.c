#include <stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a*a==b*b+c*c)
    printf("yes");
    else
    printf("no");
}