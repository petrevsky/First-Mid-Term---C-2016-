#include <stdio.h>

int main()
{
    int enterNumber;
    int tempMSD;
    int tempLSD;


    while (scanf("%d", &enterNumber)) {
        tempLSD = enterNumber % 10;

        while (enterNumber > 10) {
            enterNumber /= 10;
        }
        tempMSD = enterNumber;
        if (tempMSD < tempLSD) {
            printf("The MSD is %d and the LSD is %d.", tempMSD, tempLSD);
            printf(" %d %d\n", tempMSD, tempLSD);
        }


}

}
