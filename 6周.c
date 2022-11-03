/*#include<stdio.h>
int main()
{
	char a;
	int b;
	double c,d;
	scanf("%lf %d %c %lf",&c,&b,&a,&d);
	printf("%c %d %.2f %.2f",a,b,c,d);
	return 0;
	
 } *///混合类型数据格式化输入
//***********scanf中%c的特殊性既不用空格也不用空行 
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
	
} *///简单计算机
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
	
	
	
} *///字符串字母大小写转化
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
}*///单词长度 
