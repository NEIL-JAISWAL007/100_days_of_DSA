// 3. Implement linear search to find a key in an array and count comparisons
#include <stdio.h>
int main()
{
    int n, a[101], k, i, comp = 0, found = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter key to search: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        comp++;
        if (a[i] == k)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Found at index %d\n", i);
    }
    else
    {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comp);
    return 0;
}
