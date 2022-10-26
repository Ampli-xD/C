//Write a program to check if a number is odd or even
# include<stdio.h>
int main()
{   
    //1 = True = Even
    //0 = False = odd
    int Number_To_Check;
    printf("Enter the number to check if its odd or even: ");
    scanf("%d", &Number_To_Check);
    printf("1 Means Even & 0 means Odd: ");
    printf("%d \n",Number_To_Check % 2 == 0);
    return 0;
}