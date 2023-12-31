#include <stdio.h>

int main() {
    double N;
    char C;

    // Read input until the end of the file
    while (scanf("%lf %c", &N, &C) != EOF) {
        switch (C) {
        case 'B':
            printf("The Price of this \"COW\" is only %.3lf TK.\n", N * 700 * 0.94);
            break;
        case 'R':
            printf("The Price of this \"COW\" is only %.3lf TK.\n", N * 700 * 0.97);
            break;
        case 'W':
            printf("The Price of this \"COW\" is only %.3lf TK.\n", N * 700 * 0.87);
            break;
        case 'V':
            printf("The Price of this \"COW\" is only %.3lf TK.\n", N * 700 * 0.91);
            break;
        case 'M':
            printf("The Price of this \"COW\" is only %.3lf TK.\n", N * 700 * 0.925);
            break;
        }
    }

    return 0;
}
