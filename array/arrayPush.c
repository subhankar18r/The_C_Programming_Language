#include <stdio.h>
void main()
{
    int position, i, value, ch, arr[5] = {1, 2, 3, 4};

    printf("enter value: ");
    scanf("%d", &value);
    arr[4] = value;
    printf("Element %d is inserted at %d index \n", value, 4);
    printf("New Array is \n ");

    for (i = 0; i < 4 + 1; i++)
    {
        printf("%d \t", arr[i]);
    }
}
