#include <stdio.h>
int main()
{

    int n = 20;

    do {
            n /= 10;
    int digit = n % 10;
    putchar('0' + digit);

} while (n > 0);

printf("%d", n);



}
