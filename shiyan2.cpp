#define _CRT_SECURE_NO_WARNINGS 1
/*#include <stdio.h>

int max(int arr[], int len);
int main(void)
{
	int arr[] = { 0,25,81,35,84,12,54,17 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = len - 1; i > 0; i--)
	{
		int maxid = max(arr, i+1);
		int t = arr[i];
		arr[i] = arr[maxid];
		arr[maxid] = t;
	}
	int x;
	scanf("%d", &x);//我们要去搜索x
	int left = 0, right = len - 1, ret = 1;
	while (right > left)
	{
		int mid = (right + left) / 2;
		if (arr[mid] == x)
		{
			printf("在第%d位", mid);
			ret = 0;
			break;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;//************
		}
		else if (arr[mid] < x)
		{
			left = mid + 1;//************
		}
	}
	if (ret)
	{
		printf("不存在");
	}
	return 0;
}
int max(int arr[], int len)
{
	int maxid = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > arr[maxid])
		{
			maxid = i;
		}
	}
	return maxid;
}*/
/*#include <stdio.h>
#define MAX 10//我觉得不太好
int max(int arr[], int len);
int main(void)
{
	int mi[MAX] = { 0 };
	int arr[MAX][2] = { 0 };
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			if (i != j)
			{
				if (arr[i][0] == arr[j][0])
				{
					 arr[i][1] += arr[j][1];
				}
			}
		}
	}
	for (int j = MAX-1; j > 0; j--)
	{
		int maxid = 0, i;
		for ( i = 1; i <= j; i++)
		{
			if (arr[i][0] > arr[maxid][0])
			{
				maxid = i;
			}
		}
		int t = arr[maxid][0];
		arr[maxid][0] = arr[j][0];
		arr[j][0] = t;
	}
	for (int j = MAX - 1; j >= 0; j--)
	{
		if (arr[j][0] != 0)
		{
			printf("%dx%d+",arr[j][1],arr[j][0]);
		}
		else
		{
			printf("%d", arr[j][1]);
		}
	}
	return 0;

}*/
/*#include <stdio.h>
int arr[100][100];
int main(void)
{
	int cnt = 1;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int maxid = 0;
	int minid = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (arr[i][j] > arr[maxid][j])
			{
				maxid = j;
			}
		}
		for (int k = 1; k < n; k++)
		{
			if (arr[k][maxid] < arr[minid][maxid])
			{
				minid = k;
			}
		}
		if (minid == i)
		{
			printf("%d %d", minid, maxid);
			cnt = 0;
		}
	}
	if (cnt)
	{
		printf("NO");
	}
	return 0;
}*/
/*#include <stdio.h>
void swap(int* a, int* b);
int main(void)
{
	int a = 3, b = 5;
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}*/
/*#include <stdio.h>
void minmax(int arr[], int len, int* min, int* max);
int main(void)
{
	int arr[] = { 1,25,48,3,4,78,6,156 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int min = 0, max = 0;
	minmax(arr, len, &min, &max);
	printf("%d %d", arr[min], arr[max]);
	return 0;
}
void minmax(int arr[], int len, int* min, int* max)
{
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > arr[*max])
		{
			*max = i;
		}
		if (arr[i] < arr[*min])
		{
			*min = i;
		}
	}
}*/
/*#include <stdio.h>
int divide(int a, int b, int* result);
int main(void)
{
	int a, b, c = 0;
	scanf("%d%d", &a, &b);
	if (divide(a, b, &c))
	{
		printf("%d", c);
	}
	else
	{
		printf("分母不能为0");
	}
	return 0;
}
int divide(int a, int b, int* result)
{
	int cnt = 1;
	if (b == 0)
	{
		cnt = 0;
	}
	else
	{
		*result = a / b;
	}
	return cnt;
}*/
/*#include<stdio.h>
int main(void)
{
	int arr[] = { 1,25,48,54,9,8,15, }, cnt = 1, x;
	int len = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &x);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == x)
		{
			printf("%d", i);
			cnt = 0;
			break;
		}
	}
	if (cnt)
	{
		printf("不存在");
	}
	return 0;
}*/
/*#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <time.h>
# define n 10
int max(int arr[], int len);
int main(void)
{
	int arr[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	for (int i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
	printf("\n");
	for (int j = n-1 ; j > 0; j--)
	{
		int maxid = max(arr, j+1);
		int t = arr[maxid];
		arr[maxid] = arr[j];
		arr[j] = t;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%5d ", arr[i]);
	}
	printf("\n");
	int x;
	scanf("%d", &x);
	int left = 0, right = n - 1;
	int cnt = 1;
	while (right >= left)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == x)
		{
			printf("找到了，在%d位置上", mid);
			cnt = 0;
			break;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;//*****************************************
		}
		else if (arr[mid] < x)
		{
			left = mid + 1;//************************
		}
	}
	if (cnt)
	{
		printf("不存在");
	}
	return 0;
}
int max(int arr[], int len)
{
	int maxid = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > arr[maxid])
		{
			maxid = i;
		}
	}
	return maxid;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
int main(void)
{

}