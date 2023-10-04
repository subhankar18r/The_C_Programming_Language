#include <stdio.h>

int main()
{
    // declear a 2d array
    int arr[2][3] = {{2, 4, 5}, {3, 6, 9}};

    // reassign value
    arr[0][1] = 3;

    // access a 2d array
    printf("%d\n", arr[0][2]);
    return 0;
}
