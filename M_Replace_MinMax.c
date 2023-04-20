#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int max = 0, min = 0, i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[max] < a[i])
        {
            max = i;
        }
        if (a[min] > a[i])
        {
            min = i;
        }
    }
    int temp = a[min];
    a[min] = a[max];
    a[max] = temp;
    for (i = 0; i < n; i++)
    {

        // printf("%d", min);
        printf("%d ", a[i]);
    }

    return 0;
}