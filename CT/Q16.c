//Print the table of the number input by the user

# include<stdio.h>
int main()
{
    int nu;
    int sa;
    printf("Enter the number used in the table: ");
    scanf("%d",&nu);
    printf("Enter the number upto which table should be printed: ");
    scanf("%d",&sa);

    for(int i=0; i<=sa; i++)
    {
        printf("%d * %d = %d \n", nu, i, nu*i);
    }    
    return 0;
}