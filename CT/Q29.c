//Sum of first n natural numbers using recursive function.

# include<stdio.h>

void RFunc();

int main()
{
    int n;
    int i=1;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    RFunc(i, n);
    return 0;
}

int i=1;
void RFunc(int i, int n)
{   
    if(i==n+1){return;}
    printf("%d\n",i);
    RFunc(i+1, n);
}