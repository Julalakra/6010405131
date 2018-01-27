#include <stdio.h>
void main()
{
    int money,b50,b20,b5,b1;
    printf("Enter an amount: ");
    scanf("%d", &money);
    b50 = money/50;
    b20 = (money-(b50*50))/20;
    b5 = (money-(b50*50)-(b20*20))/5;
    b1 = money%5;
    printf("1: %d\n", b1);
    printf("5: %d\n", b5);
    printf("20: %d\n", b20);
    printf("50: %d\n", b50);
}