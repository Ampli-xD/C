//Factorial of n by recursion

# include<stdio.h>

int Factorial();

int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    int sum=(Factorial(n));
    printf("The Factorial is %d ", sum);
    return 0;
}

int Factorial(int n)
{
    if(n==1){return 1;} // base case where the recursion will stop and start sending values back.
    int fact=Factorial(n-1); //passed the process with n-1 again to the succeding function.
    int output=fact*n; //when got the value multiply it by n and pass it to the preceding function. 
    return output;
}