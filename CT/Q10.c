//write a program to give grades to a student
//marks<30 is C
//30<= marks<70 is B
//70<= marks<90 is A
//90<= marks <=100 is A+

# include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks to get the grades: ");
    scanf("%d",&marks);
    marks<30 ? printf("You will get C grade"): printf(" ");
    marks>=30 && marks<70 ? printf("You will get B \n"):printf(" ");
    marks>=70 && marks<90 ? printf("You will get A \n"):printf(" ");
    marks>=90 && marks<100 ? printf("You will get A+ \n"):printf(" ");
    return 0;
    
}