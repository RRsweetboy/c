//#include<stdio.h>
//
//void tran(int a)
//{
//	switch(a)
//	{
//		case 1:printf("yi");break;
//		case 0:printf("ling");break;
//		case 2:printf("er");break;
//		case 3:printf("san");break;
//		case 4:printf("si");break;
//		case 5:printf("wu");break;
//		case 6:printf("liu");break;
//		case 7:printf("qi");break;
//		case 8:printf("ba");break;
//		case 9:printf("jiu");break;
//	}
//}
//int bre(int x)
//{
//	int a;
//	int i,t;
//	for( i=1,a=x;a>9;i++)
//	{
//		a/=10;
//	}
//	for(t=1;i>1;t*=10)
//	{
//		i--;
//	}
//	for(int m=x;m>0;t/=10)
//	{
//		int d=m/t;
//		m/=10;
//		tran(d);
//		if(m>0)
//		{
//			printf(" ");
//		}
//	}
//}
//int main()
//{
//	long long d,n,sum=0;
//	scanf("%d",&n);
//	while(n>0)
//	{
//		d=n%10;
//		n/=10;
//		sum+=d;
//	}
//	bre(sum);
//	return 0;
//}
/*#include<stdio.h>
void bai(int x)
{
	for(int i=0;i<x;i++)
	{
		printf("B");
	}
}
void shi(int y)
{
	for(int t=0;t<y;t++)
	{
		printf("S");
	}
}
void ge(int z)
{
	for(int m=1;m<=z;m++)
	{
		printf("%d",m);
	}
}
int main()
{
	int n,n1,n2,n3;
	scanf("%d",&n);
	n1=n/100;
	n2=(n%100)/10;
	n3=n%10;
	bai(n1);
	shi(n2);
	ge(n3);
 } *///换个格式输出整数
/*#include<stdio.h>
int main()
{
	int n;
	long x1,x2,x3;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d",&x1,&x2,&x3);
		printf("Case #%d ",i);
		if(x1+x2>x3)
		{
			printf("true");
		 } 
		 else
		 {
		 	printf("false");
		 }
	}
	return 0;
 }*///A+B和C
#include<stdio.h>
#include<math.h>
int isprime(int x);
int main() 
{
	int c=1;
	int p[10001]={2};
	for(int i=3;c<10001;i+=2)
	{
		if(isprime(i))
		{
			p[c++]=i;
		}
		
		}	
	int count=0,m,n;
	scanf("%d %d",&m,&n);
	for(int t=m-1;t<=n-1;t++)
	{
		count++;
		printf("%d",p[t]);
		if(count%10==0||t==n-1)
		{
			printf("\n");
		}
		else 
		{
			printf(" ");
		 } 
		}
		return 0;
	}
	int isprime(int x)
{
	int ret=1;
	if(x%2==0&&x!=2)
	{
		ret=0;
	}
	for(int i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}
	//数素数
/*#include<stdio.h>
int main()
{
	long n,x,t,m;
	scanf("%d %d",&n,&x);
	int a[n];
	for( int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 for( t=0,m=1;t<n;t++)
	 {
	 	if(x==a[t])
	 	{
	 		printf("%d",t);
	 		m=0;
		 }
		
	 }
	 if(m)
	 {
	 	printf("Not Found");
	  } 
	return 0;
	 
} *///查找整数
/*#include<stdio.h>

int a[10];
void br(int x)
{
	int d;
	for(int y=x;y>0;y/=10)
	{
		d=y%10;
		a[d]++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int x;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		br(x);
	 } 
	 int max=0;
	 for(int i=0;i<10;i++)
	 {
	 	if(max<a[i])
		 {
		 	max=a[i];
		  } 
	  } 
	  printf("%d:",max);
	  for(int i=0;i<10;i++)
	  {
	  	if(max==a[i])
	  	{
	  		printf(" %d",i);
		  }
	  }
	  return 0;
} *///求一批整数中出现最多的个位数字 
/*#include<stdio.h>
int main()
{
	int m,n,ret=1;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int t=0;t<n;t++)
		{
			scanf("%d",&a[i][t]);
		}
	}
//	for(int i=1;i<m-1;i++)
//	{
//		for(int t=1;t<n-1;t++)//**********除去边界 
		{
			if(a[i][t]>a[i-1][t]&&a[i][t]>a[i+1][t]&&a[i][t]>a[i][t-1]&&a[i][t]>a[i][t+1])
			{
				printf("%d %d %d\n",a[i][t],i+1,t+1);
				ret=0;
			}
		}
		
	}
	if(ret)
		{
			printf("None %d %d\n",m,n);
		}
	return 0;
 } *///求矩阵的局部极大值
/*#include<stdio.h>
int main()
{
	int n[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(int i=1;i<10;i++)
	{
		if(n[i]!=0)
		{
			printf("%d",i);
			n[i]--;
		}
		for(int t=0;n[t]>0;n[t]--)
		{
			printf("%d",t);
		}
			if(n[i]!=0)
		{
			while(n[i]>0)
			{	
				printf("%d",i);
				n[i]--;
			}
		}
	}
	printf("\n");
	return 0;
	
}*///组个最小数

