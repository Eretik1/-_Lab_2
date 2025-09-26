#include <stdio.h>
#include <stdlib.h>
#include "def.h"

int main(int, char**){
    int number[10];
    for (int i = 0; i < 10; i++) {
        number[i] = rand() % 100 + 1;
        printf("%d ", number[i]);
    }
    printf("\n");
    
    int res1 = sum1(10, number[0], number[1], number[2], number[3], number[4],
                    number[5], number[6], number[7], number[8], number[9]);
    printf("%d \n", res1);

    res1 = sum2(number);
    printf("%d \n", res1);

    double res2 = def3(10, 10, 10, def1);
    double res3 = def3(10, 10, 10, def2);
    printf("%f   %f\n", res2, res3);

    def4();
}
