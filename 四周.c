/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1,b=0,c;
	printf("���Ѿ����һ�����ˣ��㿪ʼ�°ɣ�\n");
	 do{
	 	scanf("%d",&c);
		 b++;
	 	if(c<a){
	 		printf("��µ���С��\n"); 
		 }
		else if(c>a){
			printf("��µ�������\n");
		}
		else{
			printf("��ϲ�������!!!\n");
			break;
		}
		
	 }while(a!=c);
	printf("��ϲ������%d�ξͲ����˴�\n",b);
	return 0;
}*///������Ϸ 
/*#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a); 
	while(a>0){
		b=a%10;
		c=c*10+b;
		a/=10;
	}
	printf("%d\n",c); 
	return 0;
 } *///��λ������������******
/*#include<stdio.h>
int main()
{
	int i,x;
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(x%i==0){
			break;
		}
	}
	if(i<x){
		printf("��������\n");
	} 
	else{
		printf("������\n");
	}
	return 0;
 }*///�����ǲ�������������һ�� 
/*#include<stdio.h>
int main()
{
	int i,x,a=1;
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(x%i==0){
			a=0;
			break;
		}
	}
	if(a==1){
		printf("������\n"); 
	}
	else{
		printf("��������\n");
	} 
	return 0;
 }*///�����ǲ�����������������
/*#include<stdio.h>
int main()
{
	int x;
	for(x=1;x<=100;x++){
		int i,a=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			a=0;
			break;
		}		
		}
		if(a==1){
			printf("%d ",x); 
		}
	}
return 0;
 }*///����100���ڵ���������
/*#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int a,b,c,i;
	for(a=1;a<=x*10;a++){
		for(b=1;b<=x*5;b++){
			for(c=1;c<=x*2;c++){
				if(a+b*2+c*5==x*10){
					printf("��%d��һ�Ǻ�%d�����Ǻ�%d������ܹ���%dԪ\n",a,b,c,x);
				 goto out;}
			}
		}
	}
	out:
	return 0;
}*///��Ӳ��
/*#include<stdio.h>
int main()
{
	int a,n;
	double c=0.0;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		c+=1.0/a;
	}
	printf("f(%d)=%f\n",n,c);
	return 0;
 } *///��ǰn��� 
/*#include<stdio.h>
int main()
{
	int i,mask=1,n1,n2,x;
	scanf("%d",&x);
	n1=x;
	for(i=1;n1>9;i++)
	{
		n1/=10;
	}
	for(;i>1;i--)
	{
		mask*=10;
	}
	while(mask>0)
	{
		n2=x/mask;
		printf("%d",n2);
		x%=mask;
		mask/=10;
		if(mask>0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0; 
 } *///����ֽ�
/*#include<stdio.h>
int main()
{
	int t,a,b;
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
 }*///�������Լ�� ����һշת�����
/*#include<stdio.h>
int main()
{
	int a,b,min,i,ret;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		min=b;
	}
	else
	{
		min=a;
	}
	for(i=1;i<=min;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				ret=i;
			}
		}
	}
	printf("%d",ret);
	return 0;
 } *///�������Լ������������ 
