//�ַ��������ı�־��\0��Ϊת���ַ�,0Ϊ����0��'0'Ϊ�ַ�0����arrʲôʲôֵȥ��//�����ñ�����ָ������Ĵ�С�� 
//д��һ���ܱȽ���������С�Ĵ���
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
