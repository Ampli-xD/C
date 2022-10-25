# Learning C 

C is a case sensitive language

# Syntax

Must include **#include<stdio.h>** per processer directive <br>
```c
int main()
{
    all the program is written in here; 
    in the main function; 
    we write **return 0;** at the end of the main function so we know program runned without errors 
}
```
To show output ```printf("This function is used.");``` <br>

# Types of Constants
Here in C programing there are 3 ypes of Constants: <br>
    Interger: it's symbol is %d and it includes 1,2,3,-1,-1 etc. <br>
    Real Numbers: it's symbol is %f and it includes 2.00, 34.32, etc. <br>
    Characters: it's symbol is %c anf it includes A,a,V,D,#,$,%, etc. <br>
 
# Types of Variables and Input and Output methods
- float <br>
- int <br>
- char <br>

To print variables in output <br>
- ```printf("Integer variable %d ", variable name);``` <br>
- ```printf("Real number variable %f", variable name);```<br>
- ```printf("Character variable %c, variable name);```<br>

To Get input 
- ```scanf("%d", &IntegerVariable);``` <br>
- ```scanf("%f", &RealVariable);``` <br>
- ```scanf("%c", &CharacterVariable);``` <br>
 
 # Comments
```c
// single line comment 
/* multiple 
    line 
    comment 
*/
```

>For converting from Exe to out 
>**gcc file.c -o exename**
