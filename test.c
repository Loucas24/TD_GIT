#include <stdio.h>

int main(int argc, char const *argv[])
{
    int seconde = 0;
    int heure = 0;
    int minute = 0;
    scanf("%d",&seconde);
    while (seconde > 3600)
    {
        heure = heure + 1;
        seconde = seconde - 3600;
    }
    while (seconde > 60)
    {
        minute = minute + 1;
        seconde = seconde - 60;
    }
    
    printf("%d secondes = %d heures, %d minutes et %d secondes" , heure,minute,seconde);
    return 0;
}
