#include <stdio.h>

int main() {
    char nom[20]; // limite de nombre de caractères pas assez grande
    printf("Nom ? ");
    scanf("%s", nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
