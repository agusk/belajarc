#include <stdio.h>

int main()
{
    int a = 25, b = 3;

    int c = a + b;
    printf("a+b = %d \n", c);

    c = a - b;
    printf("a-b = %d \n", c);

    c = a * b;
    printf("a*b = %d \n", c);

    float d = (float)a / b;
    printf("a/b = %.3f \n", d);

    c = a % b;
    printf("a%%b = %d \n", c);

    a++;
    printf("a++ = %d \n", a);

    ++a;
    printf("++a = %d \n", a);

    b--;
    printf("b-- = %d \n", b);

    --b;
    printf("--b = %d \n", b);


	return 0;
}

