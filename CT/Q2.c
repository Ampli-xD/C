// Write a program to calculate the area of the circle when radius is given

#include <stdio.h>

int main()
{
    float Radius;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &Radius);
    printf("The Area of the Circle is: %f \n", Radius * Radius * 3.14);
    return 0;
}
