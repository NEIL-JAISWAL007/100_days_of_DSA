// 6. Remove duplicate elements from a sorted array in-place
#include <stdio.h>
int main()
{
    int n, a[101], i, j, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d sorted array elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    i = 0;
    for (j = 1; j < n; j++)
    {
        if (a[j] != a[i])
        {
            i++;
            a[i] = a[j];
        }
    }
    printf("Unique elements: ");
    for (j = 0; j <= i; j++)
        printf("%d ", a[j]);
    printf("\n");
    return 0;
}
