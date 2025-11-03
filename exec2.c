#include <stdio.h>

int main() {
    int tab[5];
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;
        printf("%d\n",tab[i]); //printf obligatoire dans première boucle car 2eme boucle inutile   
    }
    //for (int i = 0; i < 10; i++) {
    //    printf("%d\n",tab[i]);  
    //}
    printf("fait\n");
    return 0;
}
