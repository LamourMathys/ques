#include <stdio.h>
#include <stdlib.h>

int my_iterative_pow(int param_1, int param_2) { //would put long long to handle Overflows
    if (param_2 < 0) {
        return 0;
    }
    
    int result = 1; //would put long long to handle Overflows
    for (int i = 0; i < param_2; i++) {
        result *= param_1;
    }
    return result;
}

int main() {
    printf("%d\n", my_iterative_pow(2, 2));
    printf("%d\n", my_iterative_pow(2, 3));
    printf("%d\n", my_iterative_pow(2, 4));
    printf("%d\n", my_iterative_pow(5, 0));
    printf("%d\n", my_iterative_pow(2, -3));
    printf("%d\n", my_iterative_pow(0, 0));
    return EXIT_SUCCESS;
}
