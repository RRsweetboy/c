#include<stdio.h>
int main()
{int i,a,b,c,n;
scanf("%d",&a);
i=a+3;n=a;
for(;a<=i;a++)
{for(b=n;b<=i;b++)
{for(c=n;c<=i;c++)
{if(a!=b&&b!=c&&a!=c)
printf("%d%d%d ",a,b,c);
}
}printf("\n");}return 0; 

 } 
