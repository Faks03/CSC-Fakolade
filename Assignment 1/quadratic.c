#include <stdio.h>
#include <math.h>

int main(void)
{
    // sqr(x) + y + c
    float x , y , c;
    float d ;
    float first, second ;
    printf("Enter the value for x : ");
    scanf("%f",&x);

    printf("Enter the value for y : ");
    scanf("%f", &y);

    printf("Enter the value for c : ");
    scanf("%f", &c);

    d = sqrt(y*y - (4 * x * c));

    first = (-y + d ) / (2 * x );
    second = (-y - d ) / (2 * x );
    printf("The values are %f and %f", first, second);

    return 0;
}