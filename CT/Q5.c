//Write a program to check if a number is divisible by 2 or not
# include<stdio.h>
int main()
{
    int Number_To_Check;
    printf("Enter the number to check if its divisible by 2 or not: ");
    scanf("%d", &Number_To_Check);
    printf("1 Means True & 0 means False: ");
    printf("%d \n",Number_To_Check % 2 == 0);
    return 0;
}