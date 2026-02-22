// 4. Reverse an array in-place using the two-pointer approach
#include <stdio.h>
int main()
{
    int n, a[101], i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    i = 0;
    j = n - 1;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
