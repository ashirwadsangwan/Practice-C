#include <stdio.h>

int main()
{
    int a;
    int *p;
    a = 20;
    // printf("%d\n", p) shows an error because p is not declared.
    p = &a;
    printf("%d\n", *p);
}