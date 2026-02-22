// 2. Delete an element at a given position in an array and shift elements to the left
#include <stdio.h>
int main()
{
    int n, a[101], pos, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
