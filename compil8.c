#include <stdio.h>

int main() {
    int x = 10;
    printf("x = %d\n", x); //error: 'y' undeclared (first use in this function) printf("x = %d\n", y); y n'est pas défini donc on le remplace par x
    return 0;
}
