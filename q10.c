#include <stdio.h>
int main()
{
    int a,b,c,d,x,n=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
    if(a==x)
    n++;
    if(b==x)
    n++;
    if(c==x)
    n++;
    if(d==x)
    n++;
    printf("%d\n",n);
}