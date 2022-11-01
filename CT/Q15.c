//Print the sum of first n Natural Numbers.
// also, print them in reverse

# include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int sum=0;
    for (int i=1, j=n; i<=n && j>=1; i++, j--)
    {
        sum+=i;
        printf("%d\n", j);

    }

    printf("The sum is %d \n", sum);
    // int i=1;
    // int sum;
    // do
    // {
    //     sum+=i;
    //     i++;
    // }
    // while (i<=n);
    // printf("%d",sum);
    // printf("\nIn Reverse\n");
    // for (i=n; i>=1; i--)
    // {
    //     printf("%d ",i);
    // }
    
    return 0;
}