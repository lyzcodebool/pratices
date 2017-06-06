/*************************************************************************
	> File Name: button.c
	> Author: 
	> Mail: 
	> Created Time: Mon 05 Jun 2017 06:25:29 PM PDT
 ************************************************************************/

#include<stdio.h>
//冒泡
void swap(int *a, int *b);
int main()
{
    int a[10] = {12, 3, 5, 2, 45, 6, 7, 56, 8, 34};
    
    int len = sizeof(a)/ sizeof(int);
    for(int i= 0; i < len - 1; ++i)
    {
        for(int j = 0; j < len - i - 1; ++j)
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", a[i]);
        if(0 == i%5 && i != 0)
        {
            putchar(10);
        }
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
