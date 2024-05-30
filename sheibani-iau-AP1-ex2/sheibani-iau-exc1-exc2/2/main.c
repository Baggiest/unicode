#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int *arr1, *arr2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array: ");
    arr1 = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    printf("Enter the elements of the second array: ");
    arr2 = (int *)malloc(m * sizeof(int));


    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // here we check if the second array exists in the first one :)
    int found = 0;
    for (int i = 0; i < n - m + 1; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (arr1[i + j] != arr2[j])
            {
                break;
            }
        }
        if (j == m)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("The second array exists in the first array \n");
    }
    
    {
        printf("The second array does not exist in the first array\n");
    }

    free(arr1);
    free(arr2);

    return 0;
}
