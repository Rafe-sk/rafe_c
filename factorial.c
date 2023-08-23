#include<stdio.h>
int main()
{
 int  a,f;
 printf("enter the value of a");
 scanf("%d",&a);

 for(int i=a;i>=1;i--)
 {
  f=f*i;
 }

 printf("the factorial of given number is %d",f);
return 0;
}