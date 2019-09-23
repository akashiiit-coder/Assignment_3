#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("a is largest");

    }
    if(b>a && b>c && b>d)
    {
        printf("b is largest");
    }
     if(c>a && b<c && c>d)
    {
        printf("c is largest");
    }
     if(d>a && d>c && b<d)
    {
        printf("d is largest");
    }
    
    
}