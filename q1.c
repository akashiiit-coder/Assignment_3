#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a>b?a>c?printf("a is largest"):printf("c ic largest"):b>c?printf("b is largest"):printf("c is largest");
}