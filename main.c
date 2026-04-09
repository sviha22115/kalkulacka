#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define ADD 1
#define SUB 2
#define MULT 3
#define DIV 4

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float imul(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main(int argc, char *argv[]) {
    int selection = 0;

    printf("input choice num: ");
    scanf("%d", &selection);

    float a, b;
    printf("zadejte 2 cisla: ");
    scanf("%f%f", &a, &b);

    switch (selection) {
    case ADD:
        printf("%f", add(a, b));
        break;
    case SUB:
        printf("%f", sub(a, b));
        break;
    case MULT:
        printf("%f", imul(a, b));
        break;
    case DIV:
        if (b == 0) {
            printf("NAN");
        } else {
            printf("%.3f", divide(a, b));
        }
        break;
    default:
        printf("NAN");
        break;
    }

    return EXIT_SUCCESS;
}
