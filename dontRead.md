C is a case sensitive language

must include #include<stdio.h> per processer directive
int main(){
    all the program is written in here;
    in the main function;
    we write return 0; at the end of the main function so we know program runned without errors
}

to show output printf("This function is used.");

To print variables in output
    printf("Interger variable %d ", variable name);
    printf("Real number variable %f", variable name);
    printf("Character variable %c, variable name);

To Get input 
    scanf("%d", &IntegerVariable);
    scanf("%f", &RealVariable);
    scanf("%c", &CharacterVariable);
 
// single line comment
/* multiple 
    line
    comment 
*/

gcc file.c -o exename