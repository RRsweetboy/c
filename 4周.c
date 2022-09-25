/*#include<stdio.h>
int main()
{int a,b,c,d=0,i;
scanf("%d",&a);
for(i=a;i<=a+3;i++)
 for(b=a;b<=a+3;b++)
  for(c=a;c<=a+3;c++)
  {if(i!=b&&i!=c&&b!=c) 
  {
  printf("%d",i*100+b*10+c);
  d++;
   if(d%6==0)
   printf("\n");
   else
   printf(" ");}
   }
   return 0;
  


}*///求符合给定条件的整数集 
/*#include<stdio.h>
int main()
{int a,b;
for(a=1;a<=9;a++)
{
printf("\n");
for(b=1;b<=a;b++)
printf("%d*%d=%d ",b,a,a*b);}
return 0;


 }/*//九九乘法表 
