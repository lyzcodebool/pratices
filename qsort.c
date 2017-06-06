/*************************************************************************
	> File Name: qsort.c
	> Author: 
	> Mail: 
	> Created Time: Mon 05 Jun 2017 07:06:41 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
//调用api
int com_xy(const void *a, const void *b);
int main()
{
    int a[10] = {12, 34, 23, 21, 34, 54, 45, 65, 56, 78};

    int len = sizeof(a)/ sizeof(int);

    qsort(a, len, sizeof(a[0]), com_xy);

    for(int i= 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int com_xy(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return (x < y) ? -1:(x == y)? 0:1;
}
