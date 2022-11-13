//Use library function to calcutlate the square
//of a given number

# include<stdio.h>
# include<math.h>

int main()
{
    int number;
    printf("Enter the number to take a square: ");
    scanf("%d",&number);
    int number_sq = pow(number,2);
    printf("The Square is %d",number_sq);
    return 0;
}