#include <stdio.h>

int main()
{
    int currentNumber, secondNumber;
    secondNumber = 1;
    currentNumber = 0;
    int i = 0;
    int result = 0;
    while(scanf("%d", &currentNumber)) {
            if (currentNumber % secondNumber == 0) {
                if (i != 0) {
                    printf("oops %d is dividable with %d with 0 remainder\n", currentNumber, secondNumber);
                }
            }
            secondNumber = currentNumber;
            i++;
        }
}


