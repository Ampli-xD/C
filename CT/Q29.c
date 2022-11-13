//Sum of first n natural numbers using recursive function.

# include<stdio.h>

int RFunc();

int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    int sum=(RFunc(n));
    printf("The sum is %d ", sum);
    return 0;
}


int RFunc(int n)
{   
    if(n==1){return 1;}
    int Msum=RFunc(n-1);
    int sum = Msum+n;
    return sum;
}