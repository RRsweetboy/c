/*#include<stdio.h>
int main()
{char arr1[]="abc";
char arr2[]={'a','b','c'};
printf("%d",strlen(arr1));
printf("%d",strlen(arr2));
return 0;
}*/
/*#include<stdio.h>
int main()
{printf("%c\n",'\32');
return 0;}*/
/*#include<stdio.h>
int main()

{int input;
printf("好好学习\n");
printf("你要好好学习吗?(1/0)>:");
scanf("%d",&input);
if(input==0)
printf("好offer\n");
else
printf("卖地瓜\n");
return 0;}*/
/*#include<stdio.h>
int main()
{int line;
printf("一人我想上\n");
 while(line<200000) 
 {printf("敲代码\n");
 line++;
 }
 printf("ok");
 return 0;
 }*///循环语句while
 //加法函数
 /*#include<stdio.h>
 int add(int x,int y)
 { int z=x+y;
 return z; 
 }
 int main()
 {int a,b,sum;
 scanf("%d%d",&a,&b);
 sum=add(a,b);
 printf("%d",sum);
 return 0;
 }*///自定义函数和库函数 
 #include<stdio.h>
 int main()//数组：一组相同类型元素的集合 
 {int arr[10]={1,2,3,4,5,6,7,8,9,10};/*放10个元素*///语法规定下标从0开始 
// char ch[20]/*放20个字符??为什么要用ch*/；
 //float arr2[5];
 printf("%d\n",arr[4]);//4为默认的下标值 
 return 0;} 
 
