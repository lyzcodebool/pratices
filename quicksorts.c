/*************************************************************************
	> File Name: quicksorts.c
	> Author: 
	> Mail: 
	> Created Time: Mon 05 Jun 2017 06:41:57 PM PDT
 ************************************************************************/

#include<stdio.h>
//快排
void qsort(int a[], int left, int right);
int main()
{
    int a[10] = {12, 23, 34, 12, 21, 43, 54, 45, 67, 65};

    int len = sizeof(a)/ sizeof(int);
    qsort(a, 0, len - 1);

    for(int i = 0; i < len; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;

    
}

void qsort(int a[], int left, int right)
{
    if(left >= right)
    {
        return;
    }

    int i = left, j = right;
    int x = a[left];

    while(i < j)
    {

        while(i < j && a[j] >= x)
        j--;

        if(i < j)
        {
            a[i ++] = a[j];
        }

        while(i < j && a[i] <= x)
        i++;

        if(i < j)
        {
            a[j --] = a[i];
        }
    }
        
    a[i] = x;
    
    qsort(a, left - 1, i-1);
    qsort(a, i+1, right);
}
