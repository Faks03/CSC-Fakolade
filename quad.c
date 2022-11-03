#include <stdio.h>


int main()
{
    float x , y , c;
    float d ;
    float first, second ;
    printf("Enter the coefficient of each value (x^2 + y + c)\n");
    printf("Enter the value for x : ");
    scanf("%f",&x);

    printf("Enter the value for y : ");
    scanf("%f", &y);

    printf("Enter the value for c : ");
    scanf("%f", &c);

    float sqrt, temp;

    d = y*y - (4 * x * c);
    sqrt = d / 2;
    temp = 0;

    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (d/temp + temp) / 2;
    }
    
    if (d>0)
    {
	first = (-y + sqrt ) / (2 * x );
    	second = (-y - sqrt ) / (2 * x ); 
    }
    else if (d == 0)
    {
    	first = -y/(2 * x);
	first = second;
    }
    else 
    {
    	printf("Imaginary");
    }
    
    printf("The values are %f and %f\n", first, second);

    return 0;
}
