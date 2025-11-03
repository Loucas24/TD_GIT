#include <stdio.h>

int main() {
    char s[5] = "Hello"; // warning: initializer-string for array of chars is too long char s[3] = "Hello"; [3] n'est pas assez long pour Hello
    printf("%s\n", s);
    return 0;
}
