
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char sarr[3][10] = { 0 };
    int cnt = 1;
    for (int i = 0; i < 3; i++)
    {
        gets_s(sarr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       if (sarr[0][i] == sarr[1][i] && sarr[2][i]==sarr[1][i])
        {
            printf("%c", sarr[0][i]);
            cnt = 0;
        }
        else
        {
            break;
        }
    }
    if (cnt)
    {
        printf("""");
    }
    return 0;
}*/
/*#include <stdio.h>
char change(char* a);
int main(void)
{
    char sarr[2];
    gets_s(sarr);//有没有什么办法可以让数组中的个数与字符个数同步************************************
    int len = sizeof(sarr) / sizeof(sarr[0]);
    for (int i = 0; i < len; i++)
    {
        change(&sarr[i]);
    }
    puts(sarr);
}
char change(char* a)
{
    if (*a >= 'a' && *a < 'x')
    {
        *a += 3;
    }
    else if (*a >= 'x' && *a <= 'z')
    {
        *a -= 23;
    }
    else if (*a >= 'A' && *a < 'X')
    {
        *a += 3;
    }
    else if (*a >= 'X' && *a <= 'Z')
    {
        *a -= 23;
    }
    return *a;
}*/

