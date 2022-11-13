//Write functions to calculate area of square, 
//a circle and a rectangle

# include<stdio.h>

void A_circle();
void A_square();
void A_rectangle();

int main()
{
    char ch;
    printf("You want to find out the area of circle (C), rectanle (R) or a square (S): ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'C': A_circle();
        break;
        case 'S': A_square();
        break;
        case 'R': A_rectangle();
        break;
    }
}

void A_circle()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("The area of the circle is: %f", 3.14*radius*radius);
}

void A_square()
{
    float side;
    printf("Enter the side of the square: ");
    scanf("%f",&side);
    printf("The area of the square is: %f", side*side);
}

void A_rectangle()
{
    float length;
    float breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breath of the rectangle ");
    scanf("%f",&breadth);
    printf("The area of the rectangle is: %f",length*breadth);
}