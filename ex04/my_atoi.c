#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) { //verifier si digit
    return (c >= '0' && c <= '9');
}

int my_atoi(char* param_1)
{
    int i = 0;
    int signe = 1;
    int resultat = 0;

    //skip les guillemet les espaces les \n etc
    while (param_1[i] == ' ' || param_1[i] == '\n'){
         i++;
    }
    // regarder et sauvegarder le signe puis skip 
    if(param_1[i] == '-'){
        signe = -1;
        i++;
    }
    else if (param_1[i] == '+'){
        signe = 1;
        i++;
    }
    
    //puis convertir les chars en ints
    while (is_digit(param_1[i])) {
    resultat = resultat * 10 + (param_1[i] - '0');
    i++;
}

    return signe *resultat;
    
}

int main(){
    int result = my_atoi("1");
    printf("%d\n", result);
}

