//print the factorial of a number n

# include<stdio.h>

int main()
{   
    int n;
    int mul=1;
    printf("Enter the number to be factorial: ");
    scanf("%d",&n);
    printf("%d! = 1 ",n);
    for(int i=2; i<=n; i++)
    {   
        printf(" x %d",i);
        mul*=i;
    }
    printf(" = %d\n",mul);
    return 0;
}