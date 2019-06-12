
#include <stdio.h>

int main()
{
    float a, b, sum, diff, product, div;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);

    sum = a+b;
    printf("sum : %.2f\n", sum);

    diff = a-b;
    printf("diff : %.2f\n", diff);

    product = a*b;
    printf("product : %.2f\n", product);

    div = a/b;
    printf("div : %.2f\n", div);

    return 0;
}