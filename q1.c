#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int input, i = 0, val, a;
    char binString[30];
    float x_n, x_n1;

    if(argc >= 2) {

    a = atoi(argv[1]);
    x_n = a/2;
    x_n1 = (x_n + a/x_n) / 2;

    while (fabs(x_n - x_n1) > 0.0001) {
        x_n = x_n1;
        x_n1 = (x_n + a/x_n) / 2;
    }

    printf("Approximation: %f\n", x_n1);
    }

    while(1) {

        printf("Enter an integer (-1 to quit): \n");
        scanf("%u", &input);

        if(input == -1){

            printf("bye\n");
            break;

        } else if(input == 0) {

            printf("binary equivalent: 0\n");

        } else {

        val = input;
        while(val > 0) {
            if(val % 2 == 0) {
                binString[i] = '0';
            } else {
                binString[i] = '1';
            }
            i++;
            val /= 2;
        }
        i = 0;
        printf("binary equivalent: ");
        for (int j = sizeof(binString); j >= 0; j--) {
            printf("%c", binString[j]);
        }
        printf("\n");
        for(int j = 0; j < sizeof(binString); j++)
            binString[j] = '\0';
        }
    }
}