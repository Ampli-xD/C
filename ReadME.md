# ***ॐ  गं गणपतये नमः***
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

**To print variables in output** 
- ```printf("Integer variable %d ", variable name);``` <br>
- ```printf("Real number variable %f", variable name);```<br>
- ```printf("Character variable %c, variable name);```<br>

**To Get input**
- ```scanf("%d", &IntegerVariable);``` <br>
- ```scanf("%f", &RealVariable);``` <br>
- ```scanf("%c", &CharacterVariable);``` <br>

# Instructions 
**Type of instructions** <br>
- Type Declaration Instructions: Declare a variable before using it, in order
- Arithemetic Instructions: all the operations are on the RHS, LHS should have only one variable. int op float = float. examples +, -, *, /, %(only int, symbol depends on numerator) etc. When performing float to int **explicit conversion** we use ```(int) 1.82364``` and the output will be 1 as all the numbers after the decimal are completely removed. **NO ROUNDING OFF IS DONE BY THE COMPILER**. Arithemetic Operator precedence in C *, /, % Then +, - Then =, Example: ```x= 5 * 2 + 3 * 4 % 8``` When op of same precedence are together Associativity is used, this law states start to calculate left to right ```x = 4 * 2 % 5 * 3```.
- Control Instructions: Sequence Control, Decision Control, Loop Control & Case Control

# Operators 
- Arithemetic Operators
- Relational Operators: == | != | >,>= | <,<= | Return 1 being True or 0 being False
- Logical Operators: && is and, || is or, ! is not
- Bitwise Operators
- Assignment Operators: =, +=, -=, *=, /=, %= These are shorthand operators.
- Ternary Operators

**Operator Precedence:**
- !
- *, /, %
- +, -
- <, <=, >, >=
- ==, !=
- &&
- ||
- =

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
