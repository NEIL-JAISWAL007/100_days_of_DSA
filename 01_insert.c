// 1. Insert an element at a given position in an array and shift elements to the right
#include <stdio.h>
int main()
{
    int n, a[101], pos, x, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &x);
    for (i = n - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];
    a[pos - 1] = x;
    n++;
    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}