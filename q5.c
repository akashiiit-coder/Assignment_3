#include <stdio.h>
int main()
{
    int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(b==0)
printf("line is vertical -> no finite slope\n");
else
printf("Slope is %lf\n",-(double)a/b);

}