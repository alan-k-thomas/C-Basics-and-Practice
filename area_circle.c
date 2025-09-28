//Input the radius of a circle and find the area.
#include<stdio.h>
int main()
{
    //using float for decimal inputs and outputs
    float r, a; 
    //float input %f
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    a = 3.14 * r * r;
    //foat output .2%f - print upto 2 decimals 
    printf("Area of the circle = %.2f\n", a);
    return 0;
}