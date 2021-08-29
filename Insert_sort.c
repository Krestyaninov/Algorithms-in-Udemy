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

void insert_sort(int arr[], int len)
{
    int i;
    int k;

    i = 1;
    while (i != len)
    {
        k = i;
        while (k > 0 && arr[k - 1] > arr[k])
        {
            int tmp = arr[k - 1];
            arr[k - 1] = arr[k];
            arr[k] = tmp;
            k -= 1;
        }
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
    insert_sort(arr, len);
    print_array(arr, len);

    return (0);
}