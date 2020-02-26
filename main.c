#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("Please enter a number to be used.\n");
    scanf("%f", &x);
    y = x*x + 2*x;
    printf("Your number is %f\n", y);
    return 0;
}
