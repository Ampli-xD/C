//Keep taking numbers as input from user until user enters an odd number

# include<stdio.h>
int main()
{   

    //method using break
    int en;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&en);
        if(en%2==0)
        {   
            printf("Thats an odd number!");
            break;
        }
    } 
    while (1);

    //faster method
    //int en;
    // do
    // {
    //     printf("Enter a number: ");
    //     scanf("%d",&en);
    // } 
    // while (en%2==0);
    // printf("Thats an odd number!");
    
    
}
