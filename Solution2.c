#include <stdio.h>

int main()
{
    int startRange, endRange;
    startRange = 0;
    endRange = 0;
    printf("Please input start range: ");
    scanf("%d", &startRange);
    printf("Please input end range: ");
    scanf("%d", &endRange);

    int i;
    for (i = startRange; i <= endRange; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}
