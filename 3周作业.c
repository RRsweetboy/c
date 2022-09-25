/*#include<stdio.h>
int main()
{int N;
scanf("%d",&N);
if(N%5<=3&&N%5!=0)
printf("Fishing in day %d",N);
else
printf("Drying in day %d",N); 
return 0; }*///三天打鱼两天晒网
/*#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a==b&&a!=c)
printf("C");
else if(a==c&&a!=b)
printf("B");
else if(b!=a&&c==b)
printf("A");
return 0;
 }*///用天平找小球
/*#include<stdio.h>
int main()
{int a,b;
scanf("%d:%d",&a,&b);
if(a>=0&&a<=11)
printf("%d:%d AM",a,b); 
else if(a>12&&a<=23)
printf("%d:%d PM",a-12,b);
else if(a==12)
printf("%d:%d PM",a,b);
else
printf("%d:%d AM",a-24,b);
return 0;

 }*///12,24小时制转换
/*#include<stdio.h>
int main()
{int a;
scanf("%d",&a);
if(a>=90)
printf("A");
else if(a>=80&&a<90)
printf("B");
else if(a>=70&&a<80)
printf("C");
else if(a<70&a>=60) 
printf("D");
else
printf("E");
return 0;*///成绩分数转化


 } 
