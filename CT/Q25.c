//Write a function that prints Namaste if the user is Indian
//& Bonjour if the user is French

# include<stdio.h>

void IsIndian();
void IsFrench();


int main()
{
    int nat;
    printf("Type 0 if you are Indian, type 1 if you are French: ");
    scanf("%d",&nat);
    if(nat==0)
    {
        IsIndian();
    }
    else if(nat==1)
    {
        IsFrench();
    }
    return 0;
}

void IsIndian()
{
    printf("Namaste!");
}

void IsFrench()
{
    printf("Bonjour!");
}