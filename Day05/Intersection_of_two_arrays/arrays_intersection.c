#include <stdio.h>

void intersection(int a[], int n, int b[], int m)
{
    int i, j;

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int n = 5;
    int m = 5;

    intersection(a, n, b, m);

    return 0;
}
