//Write a program to check if a student passed or failed
// marks>30 is PASS
// marks<=30 is fail

# include<stdio.h>
int main()
{   
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
//using Ternary operator
    marks>30 && marks<=0 ? printf("Sorry you Failed") : printf("You're Pass!\n");
//using if-else
    // if (marks>30)
    // {
    //     printf("You're Pass!\n");
    // }
    // else if (marks<=30)
    // {
    //     printf("Sorry you Failed");
    // }
    return 0;
}