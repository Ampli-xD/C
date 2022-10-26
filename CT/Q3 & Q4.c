/*Solve:
    int x=1.999999; =  2
    a. 5*2-2*3      =  4
    b. 5*2/3*3      = 15
    c. 5*(2/2)*3    = 15
    d. 5+2/2*3      =  8
*/

# include<stdio.h>

int main()
{
    int x= 1.99999;
    int a= 5*2-2*3;
    int b= 5*2/2*3;
    int c= 5*(2/2)*3;
    int d= 5+2/2*3;
    printf("%d \n", x);
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%d \n", d);

    return 0;
}