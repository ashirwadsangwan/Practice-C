
#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    // alternatively we can use scanf("%d %d", &a ,&b) 
    c = a*b;

    printf(" a = %d,\n b = %d,\n c = %d\n", a, b, c);

    return 0;
}