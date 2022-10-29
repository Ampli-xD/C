//Print the numbers from 0 to n where n is given by the user
# include<stdio.h>
int main()
{   
    int num;
    printf("Enter a value for n: ");
    scanf("%d", &num);
    for(int i=0; i<=num; i+=1 )
    {
        printf("%d ",i);
    }
    return 0;
}
