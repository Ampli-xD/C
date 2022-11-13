//Write a function to convert celsius to fahrenheit.

# include<stdio.h>

float convert(float n);

int main ()
{
    float n;
    printf("Enter the value of n: ");
    scanf("%f",&n);
    float out=convert(n);
    printf("%f In Fahrenheit is %f", n, out);
    return 0;
}

float convert(float n)
{
    float far=n*(9/5)+32;
    return far;
}