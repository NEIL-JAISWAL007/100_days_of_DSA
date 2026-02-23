// Problem: Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.
#include <stdio.h>
int main()
{
    int m, n, a[10][10], b[10][10], sum[10][10], i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter first matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}