/*#include<stdio.h>
int main()
{
	int n;
	double b=2.0,c=1.0,sum=2.0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		double d=c;
		c=b;
		b+=d;
		sum=sum+(b/c);
	}
	printf("%.2f",sum);
	return 0;
}*///求序列前n项和
/*#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d/%d",&n1,&n2);
	int min;
	if(n1>n2)
	{
		min=n2;
	}
	else if(n1<n2)
	{
		min=n1;
	}
	else
	{
		printf("1/1");
	}
	for(int i=min;i>2;i--)
	{
		if(n1%i==0&&n2%i==0)
		{
			printf("%d/%d",n1/i,n2/i);
			break; 
		}
	}
	return 0;
}*///约分
/*#include<stdio.h>
int main()
{
	int n,d;
	int i;
	scanf("%d",&n);
	if(n<0)
	{
		printf("fu ");
		n=-n;
	}
	int t=n;
	for(  i=1;t>9;i*=10)
	{
		t/=10;
	}
	for (int j=n;i>0;i/=10)
	{
		d=j/i;
		j%=i;
		switch(d)
		{
			case 0:printf("ling");
			break;
				case 1 :printf("yi");
			break;	case 2:printf("er");
			break;	case 3:printf("san");
			break;	case 4:printf("si");
			break;	case 5:printf("wu");
			break;	case 6:printf("liu");
			break;	case 7:printf("qi");
			break;	case 8:printf("ba");
			break;	case 9:printf("jiu");
			break;
			
		}
		if(i>9)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
} *///念数字
#include<stdio.h>
int main()
{
	int a,n;
	int j;
	scanf("%d%d",&a,&n);
	int sum=a,sum2=a;
	for(int i=n;i>1;i--)
	{
		j=10*a;
		a*=10;
		sum+=j;
		sum2+=sum;
	}
	printf("%d",sum2);
	return 0;
 } 
 
