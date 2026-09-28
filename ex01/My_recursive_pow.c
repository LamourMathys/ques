#include <stdio.h>
#include <stdlib.h>

int my_recursive_pow(int param_1, int param_2) {
    if (param_2 < 0) {
        return 0;
    }
    if (param_2 == 0) {
        return 1;
    }
    
    return param_1 * my_recursive_pow(param_1, param_2 - 1);
}

int main() {
    printf("%d\n", my_recursive_pow(2, 2));
    printf("%d\n", my_recursive_pow(2, 3));
    printf("%d\n", my_recursive_pow(2, 4));
    printf("%d\n", my_recursive_pow(5, 0));
    printf("%d\n", my_recursive_pow(2, -3));
    printf("%d\n", my_recursive_pow(0, 0));
    return EXIT_SUCCESS;
}
