#include <stdio.h>

int main() {
    int abc = 5;// error: invalid suffix "abc" on integer constantprintf("%d\n", 1abc); le 1 n'est pas valide
    printf("%d\n", abc);
    return 0;
}
