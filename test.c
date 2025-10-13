#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float c = 0;
    float n = 0;
    float t = 0;
    scanf("%f",&c);
    scanf("%f",&n);
    scanf("%f",&t);
    t = t/100;
    float m = (c*(t/12))/(1-pow(1+(t/12),-n*12));
    printf("%f",m);
    return 0;
}
