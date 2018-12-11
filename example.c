#include <stdlib.h>
#include <stdio.h>
#include "src/libConv.h"

int main() {
    
    unsigned char paddedInput[] = {0,  0,  0,  0,  0,  0, 0, 
                                   0, 35, 40, 41, 45, 50, 0,
                                   0, 40, 40, 42, 46, 52, 0,
                                   0, 42, 46, 50, 55, 55, 0,
                                   0, 48, 52, 56, 58, 60, 0,
                                   0, 56, 60, 65, 60, 75, 0,
                                   0,  0,  0,  0,  0,  0, 0};

    unsigned char output[] = {  0,0,0,0,0,
                                0,0,0,0,0,
                                0,0,0,0,0,
                                0,0,0,0,0,
                                0,0,0,0,0};

    float kernel[] = {
        0.0, 0.0, 0.0, 0.0, 1.2, 0.0, 0.0, 0.0, 0.0
    };
    
    Convolution(&paddedInput, &output, 5, 5, 1, &kernel, 3);

    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", output[i*5 + j]);
        }
        printf("\n");
    }


    return 0;

}