#include<stdio.h>
main()
{
int n,a,b=3;
printf("enter a number");
scanf("%d", &n);

for(b=3;b<=n;b++)
{
for(a=2;a<=b-1;a++)
{
if(b%a==0)
continue;
}
printf("%d \n", b);
b++;
}
}
