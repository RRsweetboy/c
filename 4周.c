/*#include<stdio.h>
int main()
{
	int i,t,m,n1,n=0;
	scanf("%d",&n1);
	for(i=n1;i<=n1+3;i++)
		{
		for(t=n1;t<=n1+3;t++)
			{
			for(m=n1;m<=n1+3;m++)
			{
			if(i!=t&&i!=m&&t!=m)
			{
				printf("%d",i*100+t*10+m);
				n++;
				if(n%6==0)
				{
					printf("\n");
				}
				else
				{
					printf(" ");
				}
			}
	}
}
}
			 
	return 0;
	
}*///求给定的整数集
/*#include<stdio.h>
int main()
{
	int N,sum=0;
	int a=1;
	scanf("%d",&N);
	for(int i=N;i>1;i--)
	{
		a*=10;
	}
	for(int t=a;t<a*10;t++)
	{
		int n=t,m=t;
		while(m>0)
		{
			int x=m%10;
			m/=10;
			int d=1;
			for(int j=N;j>0;j--)
			{
				d*=x;
			}
			sum+=d;
		}
		if(n==sum)
		{
			printf("%d\n",n);
		}
		sum=0;
	}
	return 0;
}//水仙花数*********
/*#include<stdio.h>
int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int t=1;t<=i;t++)
		{
			printf("%d*%d=%d\t",t,i,i*t);
		}
		printf("\n");
	}
	return 0;
 }*///九九乘法表
/*#include<stdio.h>
int main()
{
	int M,N;
	int n=0,sum=0;
	scanf("%d%d",&M,&N);
//	if(M==1)
//	{
//		M=2;
//	}//特殊位置特殊处理 
	for(int i=M;i<=N;i++)
	{
		int a=0;//********************位置不要放错 
		for(int t=2;t<i;t++)
		{
			if(i%t==0)
			{
				a=1;
				break;
			}
		}
		if(a==0)
		{
			n++;
			sum+=i;
		}
	}
	printf("%d %d",n,sum);
	return 0;	
} *///计算素数 
/*#include<stdio.h>
int main()
{
	int x=0,a,n,b;
	scanf("%d%d",&a,&n);
	while(b!=a)
	{
		scanf("%d",&b);
		x++;
		if(x<=n)
		{	
			if(b<0)
			{
				printf("Game Over\n");
				return 0;
			}
			if(b==a)
			{
				break;
			}
			else if(b>a)
			{
				printf("Too big\n");
			}
			else if(b<a)
			{	
				printf("Too small\n");
			}
	
		}
		else
		{
			printf("Game Over\n");
			return 0;
			}
				
	}
	if(x==1)
	{
		printf("Bingo!\n");
	}
	else if(x<=3)
	{
		printf("Lucky You!\n");
	}
	else if(x>3&&x<=n)
	{
		printf("Good Guess!\n");
	 }
	 return 0; 
} *///猜数字游戏















 
