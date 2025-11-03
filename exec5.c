#include <stdio.h>

int main() {
    char s[5]= ""; // il fallait définir s
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    printf("%s\n", s); 
    return 0;
}
