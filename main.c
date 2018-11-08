#include <stdio.h>

int main()
{
    int sum;
    sum = 0;
    int i;
    for (i = 1000; i <= 10000; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }
    printf("The sum is: %d", sum);
}
