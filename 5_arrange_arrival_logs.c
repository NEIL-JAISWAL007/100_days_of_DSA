// 5. Merge two sorted arrival logs into a single chronological log
#include <stdio.h>
int main()
{
    int p, q, a[101], b[101], c[201], i, j, k;
    printf("Enter size of server log 1: ");
    scanf("%d", &p);
    printf("Enter %d arrival times from server 1: ", p);
    for (i = 0; i < p; i++)
        scanf("%d", &a[i]);
    printf("Enter size of server log 2: ");
    scanf("%d", &q);
    printf("Enter %d arrival times from server 2: ", q);
    for (i = 0; i < q; i++)
        scanf("%d", &b[i]);
    i = 0;
    j = 0;
    k = 0;
    while (i < p && j < q)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < p)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < q)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("Merged log: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}
