#include<stdio.h>
#include<math.h>
int main()
{int a,b,c=0,d,e,s=0,y,f1,f2;
scanf("%d",&y);
f1=pow(10,y-1);
f2=pow(10,y);
b=f1;
a=f1;
printf("%d",f1);
printf("水仙花的个数有：\n");
while(a<f2){d=a;
while(b>0){c=a/b;
a=a-c*b;b=b/10;
e=pow(c,y);
s+=e;
}
if(d==s){printf("%d\n",s);
}
s=0;
b=f1;
a=d+1;
}
return 0;}
