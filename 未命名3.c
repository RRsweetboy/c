//字符串结束的标志‘\0’为转义字符,0为数字0；'0'为字符0，用arr什么什么值去看//不能用变量来指定数组的大小； 
//写出一个能比较两个数大小的代码
/*1.#include<stdio.h> 
int main()
{int a,b;
scanf("%d%d",&a,&b);
if (a>b)
printf("%d",a);
else
printf("%d",b);
return 0; 
}*/
#include<stdio.h>
 max(int a,int b)
{if(a>b)
return a;
else
return b;
}
int main()
{int x,y,m;
scanf("%d%d",&x,&y);
m=max(x,y);
printf("%d",m);
return 0;
}
