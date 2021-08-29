#include <stdio.h>
#include <stdbool.h>
#define ALLOCATE_SIZE 100

int input_array(int arr[], int max_size)
{
    int len = 0;

    while (len < max_size)
    {
        int x;
        scanf("%d", &x);
        if (x == 0 || len == max_size)
            break;
        arr[len] = x;
        len++;
    }
    return (len);
}

void selection_sort(int arr[], int len)
{
    int i;
    int k;
    int min = 0;

    i = 0;
    while (i < len)
    {
        k = i + 1;
        min = i;
        while (k < len)
        {
            if (arr[k] < arr[min])
            {
                min = k;
            }
            k++;
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
        i++;
    }
}

void print_array(int arr[], int N)
{
    int i = 0;
    
    while (i < N)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    printf("Enter num:");
    int arr[ALLOCATE_SIZE];
    int len;

    len = input_array(arr, ALLOCATE_SIZE);
    print_array(arr, len);
    selection_sort(arr, len);
    print_array(arr, len);

    return (0);
}
