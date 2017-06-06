/*************************************************************************
	> File Name: selectq.c
	> Author: 
	> Mail: 
	> Created Time: Mon 05 Jun 2017 06:34:23 PM PDT
 ************************************************************************/

#include<stdio.h>

//选择排序

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[] = {9, 8, 34, 12, 23, 56, 78, 67, 45, 12};
    
    int len = sizeof(a)/ sizeof(int);
    for(int i= 0; i < len; ++i)
    {
        for(int j= 0; j < len; ++j)
        {
            if(a[i] > a[j])
            {
                swap(&a[i], &a[j]);                
            }
        }
    }

    for(int i= 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


