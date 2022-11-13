#define _CRT_SECURE_NO_WARNINGS 1
/*#include <stdio.h>

void fact(int n)
{

	printf("%d", n);
	if (n != 100)
	{
		printf(",");
		fact(n + 1);
	}
	return;
}
int main()
{
	fact(1);

	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int isprime(int x)
{
	int cnt = 1;
	for (int j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			cnt = 0;
			break;
		}
	}
	return cnt;
}
int main()
{
	int n, cnt2 = 0, sum = 0;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		if (isprime(i) && i != 1)
		{
			printf("%6d", i);
			cnt2++;
			sum += i;
		}
		if (cnt2 == 10 || i == 1)
		{
			printf("\nsum=%d\n", sum);
			break;
		}
		
	
	}
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int isprime(int x)
{
	int cnt = 1;
	for (int j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			cnt = 0;
			break;
		}
	}
	return cnt;
}
int main()
{
	int n, cnt2 = 0, sum = 0, arr[10] = { 0 };
	scanf("%d", &n);
	for (int i = n, m = 0; i > 0; i--)
	{
		if (isprime(i) && i != 1)
		{
			arr[m] = i;
			printf("%6d", i);
			cnt2++;
			sum += i;
			m++;
		}
		if (cnt2 == 10 || i == 1)
		{
			printf("\nsum=%d\n", sum);
			break;
		}


	}
	int x, cnt = 0;
	scanf("%d", &x);
	for (int k = 0; k < 10; k++)
	{
		if (x == arr[k])
		{
			printf("%d", k);
			cnt = 1;
		}

	}
	if (cnt == 0)
	{
		printf("-1");
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	 char ch ;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch < 'z')
		{
			ch += 1;
		}
		else if (ch == 'z')
		{
			ch = 'a';
		}

		if (ch >= 'A' && ch < 'Z')
		{
			ch += 1;
		}
		else if (ch == 'Z')
		{
			ch = 'A';
		}
		printf("%c", ch);
	}
	return 0;

}*/





//二维数组和指针
/*#include <stdio.h>
int main()
{
	int arr[100][100] = { 0 };
	int n;
	printf("Input n:");
	scanf("%d", &n);
	printf("Input %d*%d matrix:\n", n, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", arr[j][i]);
			if (j == n - 1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int arr[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int cnt[12] = { 0 };;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cnt[i] += arr[i][j];
		}
	}
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cnt[5+j] += arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)
			{
				cnt[10] += arr[i][j];
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j == 4)
			{
				cnt[11] += arr[i][j];
			}
		}
	}
	int x = 1;
	for (int j = 1; j < 12; j++)
	{
		if (cnt[j] != cnt[0])
		{
			printf("It is not a magic square!\n");
			x = 0;
			break;
		}
	}
	if (x)
	{
		printf("It is a magic square!\n");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				printf("%4d", arr[i][j]);
				if (j == 4)
				{
					printf("\n");
				}
			}
		}
	}
	return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[255];
	gets_s(str);
	int length = strlen(str);
	int max = 0;
	int i, j, k, n;
	for (i = 0; i < length; i++)
	{
		for (j = i + 1; j < length; j++)
		{
			for (k = i; k < j; k++)
			{
				if (str[k] == str[j])
				{
					n = j;					j = length;
					k = j; 
				}
			}
			if (n - i > max) 
				max = n - i;
		}
	}
	if (max == 0) 
		max = length;
	printf("%d\n", max);
	return 0;
}*/
