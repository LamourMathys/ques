#include <stdio.h>
#include <stdlib.h>

int my_iterative_factorial(int param_1)
{
    
    if (param_1 < 0 || param_1 > 12) { //12 because 13 factorial is over the int limit 
        return 0;
    }

    int result = 1;

    for(int i = 1; i<= param_1; i++){
       result = result * i;
    }
    
    return result;
}

int main(){
    printf("%d\n", my_iterative_factorial(2));
    printf("%d\n", my_iterative_factorial(3));
    printf("%d\n", my_iterative_factorial(4));
    printf("%d\n", my_iterative_factorial(0));
    printf("%d\n", my_iterative_factorial(-5));
    printf("%d\n", my_iterative_factorial(13));
}