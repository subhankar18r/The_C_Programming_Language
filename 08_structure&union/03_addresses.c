#include <stdio.h>
#include <string.h>

typedef struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
} add;

void printInfo(struct address a);

int main()
{

    add adrs[2];

    printf("enter info for person 1: ");
    scanf("%d", &adrs[0].houseNo);
    scanf("%d", &adrs[0].block);
    scanf("%s", adrs[0].city);
    scanf("%s", adrs[0].state);

    printf("enter info for person 2: ");
    scanf("%d", &adrs[1].houseNo);
    scanf("%d", &adrs[1].block);
    scanf("%s", adrs[1].city);
    scanf("%s", adrs[1].state);

    printInfo(adrs[0]);
    printInfo(adrs[1]);

    return 0;
}

void printInfo(struct address a)
{
    printf("address of house no. %d is %d,%s,%s.\n", a.houseNo, a.block, a.city, a.state);
}