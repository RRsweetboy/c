/*#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	if(a>=90)
	{
		printf("A");	
	}
	else
	{
		(a>=60)?printf("B"):printf("C");
	}
	return 0;
 }*///�ɼ���ת�� 
/*#include<stdio.h>
int main()
{
	printf("Welcome to the C world!\n");
	for(int i=1;i<=9;i++)
	{
		for(int t=1;t<=i;t++)
		{
			printf("%d*%d=%2d\t",i,t,t*i);
		}
		printf("\n");
	}
	return 0;
 }*///��ӡ�žų˷���
/*#include<stdio.h>
int main()
{
	int i,t;
	for(i=1;i<=11;i++)
	{
		for(t=1;t<=11;t++)
		{
			if(i==t)
			{
				printf("* ");
			}
			else if(i==6)
			{
				printf("* ");
			}
			else if(t==6)
			{
				printf("* ");
			}
			else if(i+t==12)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
 } *///���ǺŴ�ӡ����
/*#include <stdio.h>
 int main()
{
    int x1, x2, check;
    printf("Input x1, x2:\n");
    check = scanf("%d,%d",&x1,&x2);
    while((check != 2) || (x1 * x2 >= 0 ))
    {
        while (getchar() != '\n');
        printf("Input x1, x2:\n");
        check = scanf("%d,%d",&x1,&x2);
    }
    printf("x1=%d,x2=%d\n",x1,x2);
    return 0;
}*///�Ҵ���
/*#include<stdio.h>
int main()
{
	int i,a,b=1;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0){
			b=2;
			break;
		}
	}
	if(b==2)
	{
		printf("%d��������\n",a);
	}
	else
	{
		printf("%d������\n",a);
	}
	return 0;
 } *///�ж� 10000���ڵ����Ƿ�Ϊ����
/*#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a=1;
	printf("Input n:");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			a=0;
			break;
		}
	}
	if(a==1)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}

	return 0;
} *///�ǲ������� 
