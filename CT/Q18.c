//keep taking numbers as input from user until user enters a number which is multiple of 7

# include<stdio.h>

int main()
{
    int en;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&en);
    } 
    while (en%7!=0);
    printf("Thats multiple of 7!\n");
}