#include<stdio.h>
void main()
{
int i,c=0,n;
printf("Enter the number:");
scanf("%d",&n);
f0r(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("%d is prime number",n);
}
else
{
printf("%d is not a prime number",n);
}
}


