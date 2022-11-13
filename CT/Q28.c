//Print Hello World 5 times using recursion

# include<stdio.h>

void alsiFunction(int count);

int main()
{
    alsiFunction(5);
    return 0;
}

void alsiFunction(int count)
{   
    if (count==0){return;}
    printf("Hello World\n");
    alsiFunction(count-1);
}