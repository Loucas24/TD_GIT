#include <stdio.h>

int main() {
    char c = 'A';
    printf("c = %c\n", c); // error supposée : %c à la place de %s car il s'agit d'un char donc %s incompatible avec char
    return 0;
}
