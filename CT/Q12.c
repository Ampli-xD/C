//Write a program to find if the character entered by the user is upper case or not
# include<stdio.h>
int main()
{
    char CH;
    printf("Enter the character to check: ");
    scanf("%c", &CH);
    CH>='A' && CH<='Z' ? printf("The entered char is an uppercase! \n"): printf("The entered  char is not a uppercase Alphabet! \n");
    return 0;
}