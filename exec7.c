#include <stdio.h>

int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    int temps = 0; //ne peut pas faire de calcul dans une initialisation d'une variable
    temps = distance_km / vitesse_kmh;
    int minutes = 0; //ne peut pas faire de calcul dans une initialisation d'une variable 
    minutes = temps * 60; 
    printf("minutes = %d\n", minutes); 
    return 0;
}
