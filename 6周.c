/*#include<stdio.h>
int main()
{
	char a;
	int b;
	double c,d;
	scanf("%lf %d %c %lf",&c,&b,&a,&d);
	printf("%c %d %.2f %.2f",a,b,c,d);
	return 0;
	
 } *///����������ݸ�ʽ������
//***********scanf��%c�������ԼȲ��ÿո�Ҳ���ÿ��� 
/*#include<stdio.h>
int main()
{
	int a,c;
	char b='0';
	scanf("%d",&a);
	while(b!='=')
	{
		scanf("%c",&b);
		if(b=='=')
		{
			break;
		}
		scanf("%d",&c);
		if(b=='-')
		{
			a-=c;
		}
		else if(b=='+')
		{
			a+=c;
		}
		else if(b=='*')
		{
			a*=c;
		}
		else if(b=='/')
		{
			if(c==0)
			{
				printf("ERROR");
			}
			else
			{
				a/=c;
			}
		}
		else
		{
			printf("ERROR");
		}
	}
	printf("%d",a);
	
} *///�򵥼����
/*#include<stdio.h>
int main()
{
	char ch;
	while(ch!='#')
	{
		scanf("%c",&ch);
		if(ch=='#')
		{
			break;
		}
		else if(ch>='a'&&ch<='z')
		{
			ch-=32;
		}
		else if(ch>='A'&&ch<='Z')
		{
			ch+=32;
		}
		else
		{
			ch=ch;
		}
		printf("%c",ch);
	 } 
	 return 0;
	
	
	
} *///�ַ�����ĸ��Сдת��
/*#include<stdio.h>
int main()
{
	char a='0';
	int i=0;
	while(a!='.')
	{
		scanf("%c",&a);
		if(a!=' '&&a!='.')
		{
			i++;
		 } 
		  else if(a==' ')
		 {
		 	printf("%d ",i);
		 	i=0;
		 }
		  else if(a=='.')
		 {
		 	printf("%d",i);
		 	break;
		 }
	}
	return 0;
}*///���ʳ��� 
