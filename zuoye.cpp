/*7.15include <stdio.h>
#include <stdlib.h>
# define MAX 81
int main(void)
{
    char str[MAX];
    int cnt[5] = { 0 };
    int k = 0;
    char word[5][10] = { "Ab","cd","as","sc","sh" };
    gets_s(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            while (str[i] == word[j][k])
            {
                if (word[j][k] == '\0')
                {

                    cnt[j]++;
                    break;
                }
                k++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("字符%s在其中出现了%d次", word[i], cnt[i]);
    }
    return 0;


}*/



//8.1
    /*1.没有赋初值，加上zptr = z
        2.number是值，number = *zptr
        3.zptr[2]已经是值了，不需要再加上 * ，number = zptr[2]
        4.不用 = 号，越界了, 删除 =
        5.是空类型指针，需要进行类型转化，加上(int*)
        6.地址不能++, aptr = z; aptr++;*/
//8.6
#include<stdio.h>
#include<string.h>

int main()
{
    int i, tem, t;
    char a[1000];
    scanf("%s", a);
    t = strlen(a);
    for (i = 0; i < t; i++)
    {
        printf("%c", a[i]);
        if (((t - i - 1) % 3) == 0 && i != t - 1)
        {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}