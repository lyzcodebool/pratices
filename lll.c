/*************************************************************************
	> File Name: lll.c
	> Author: 
	> Mail: 
	> Created Time: Mon 05 Jun 2017 07:30:03 PM PDT
 ************************************************************************/

#include<stdio.h>
int fun(int x, int y)
{
    int sum = 0;
    if(x <= y)
    {
        for(int i = x; i <= y; ++i)
        {
            if(i&1 == 1)
            {
                sum += i;
            }
        }
    }
    return sum;
}

int main()
{
    int n, m;
    printf("请输入你想要求解的范围：\n");

    scanf("%d%d", &n, &m);

    printf("这个范围内的奇数和%d",fun(n, m));

    putchar(10);
    return 0;
}
