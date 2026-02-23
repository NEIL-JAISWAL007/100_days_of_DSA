// 12. Check if a given matrix is symmetric
#include <stdio.h>
int main()
{
    int m, n, a[10][10], i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (m != n)
    {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                printf("Not a Symmetric Matrix\n");
                return 0;
            }
        }
    }
    printf("Symmetric Matrix\n");
    return 0;
}
