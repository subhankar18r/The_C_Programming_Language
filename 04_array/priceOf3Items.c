// enter price of 2 items and print their final cost
#include <stdio.h>

int main()
{
    float price[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter price %d\n", i);
        scanf("%f", &price[i]);
    }

    printf("total price(with gst) = %f\n", (price[0] + price[1] + price[2]) + (price[0] + price[1] + price[2]) * 0.18);
    return 0;
}