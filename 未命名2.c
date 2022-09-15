/*#include<stdio.h>
int  main()
{int arr[10]={1,2,3,4,5,6,7,8,9,10};
int i;
while(i<10)
{printf("%d ",arr[i]);
i++; 
}
return 0;
}*/
/*#include<stdio.h>
int main()//操作符+ - * / 
{int a=5%2;//取模（余数） 
printf("%d",a);
return 0; 
 } */
/* #include<stdio.h>
 int main()
 {//移（2进制)位操作符 
 //<<左移；>>右移。
int a=1;
 int b=a<<2;
 printf("%d",b);
 return 0;//整形占4个字节—32个比特//00000000000000000000000000000000001即变为00000000000000000000000000000010翻译为十进制即为2
 //位操作符（ &按位与）（^为异或）只有当二进制都是1的时候最后才能的得到 
 //与：全一则一，或：有 1则1，异或：同0异一； 
 
 } */
/*#include<stdio.h>
int main()
{int a=10;
a +=10;
printf("%d",a) ;

return 0;
//+=,-=,*=,/=均为复合赋值符 
}*/





//单目操作符，双目操作符，三目操作符//sizeof计算的是所占空间的大小，以字节为单位。
 


#include<stdio.h>
int main()
{//c语言中表示真假，0是假，一切的非0都是真，！就是把真变成假，把假变成真。-/+（正号一般省略） ,,
int arr[10],a;
printf("%d\n",sizeof(arr));
a=sizeof(arr)/sizeof(arr[0]);
printf("%d",a) ;

return 0;
 } //常量，字符串，转义字符，，注释，选择语句，循环语句，函数，数组定义和数组的使用，操作符， 
