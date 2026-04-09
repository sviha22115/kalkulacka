#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define ADD 1
#define SUB 2
#define MULT 3
#define DIV 4

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int imul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main(int argc, char *argv[]) {
    int selection = 0;

    printf("input choice num: ");
    scanf("%d", &selection);

    int a, b;
    printf("zadejte 2 cisla: ");
    scanf("%d%d", &a, &b);

    switch (selection) {
    case ADD:
        printf("%d", add(a, b));
        break;
    default:
        printf("NAN");
        break;
    }

    return EXIT_SUCCESS;
}
