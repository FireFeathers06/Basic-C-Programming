/** Contributor : Vivek Bhardwaj
 * swapping using X-OR
 **/

#include<stdio.h>  

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int x, y;
    printf("\nEnter two numbers which you want swap...");
    scanf("%d%d", &x, &y);

    printf("\nBefore Swap X : %d And Y : %d ", x, y);

    swap(&x, &y);

    printf("\nAfter Swap X : %d And Y : %d ", x, y);

    return 0;
}
