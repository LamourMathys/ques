#include <stdio.h>
#include <stdlib.h>

int my_fibonacci(int param_1)
{
    if(param_1 < 0){
        return -1;
    }

    if(param_1 == 0){
        return -0;
    }

    return param_1 + my_fibonacci(param_1 - 1);
}

int main(){
    printf("%d" ,my_fibonacci(10));
}