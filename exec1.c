#include <stdio.h>

int main() {
    int a = 2;
    int b = 0; //ne peut pas diviser pas 0
    int c = a / b;  // crash / comportement indéfini 
    if (b==0){
        printf("Vous ne pouvez pas diviser pas 0");
        return 0; //quitter avec le message d'erreur
    }
    printf("%d\n", c);
    return 0;
}
