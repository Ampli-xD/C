/*Print 1(True) or 0(False) for the following statements:
a. if it's sunday & it's snowing -> True
b. if it's monday or it's raining -> True
c. if a number is greater than 9 & less than 100 (2 digit number) -> True
*/
# include<stdio.h>
int main()
{   
    char day;
    char weather;
    int number;
    printf("Enter the Day: ");
    scanf("%c \n", &day);
    printf("Enter the weather: ");
    scanf("%c \n", &weather);
    printf("Enter the number: ");
    scanf("%d \n", &number);

    printf("a= %d", day=="sunday" && weather=="smowing");
    printf("b= %d", day=="monday" || weather=="raining");
    printf("c= %d", number>9 && number<100);
    return 0;
}