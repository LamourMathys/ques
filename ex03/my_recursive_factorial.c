#include <stdio.h>
#include <stdlib.h>

int my_recursive_factorial(int param_1)
{
    if (param_1 < 0 || param_1 > 12) {
        return 0;
    }

    if (param_1 == 0) {
        return 1;
    }

    return param_1 * my_recursive_factorial(param_1 - 1);

}

int main(){
    printf("%d\n", my_recursive_factorial(2));
    printf("%d\n", my_recursive_factorial(3));
    printf("%d\n", my_recursive_factorial(-1));
    printf("%d\n", my_recursive_factorial(0));
}