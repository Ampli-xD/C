//calculate the sum of all numbers between 5 and 50 including both

# include<stdio.h>

int main()
{
    int sum=0;
    for(int i=5; i<=50; i++)
    {
        sum+=i;
    }
    printf("Then sum is %d\n",sum);
    return 0;
}