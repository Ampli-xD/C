# **_ॐ गं गणपतये नमः_**

# Learning C

C is a case sensitive language

# Syntax

Must include **#include<stdio.h>** pre processer directive <br>

```c
int main()
{
    all the program is written in here;
    in the main function;
    we write **return 0;** at the end of the main function so we know program runned without errors
}
```

To show output `printf("This function is used.");` <br>

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

- `printf("Integer variable %d ", variable name);` <br>
- `printf("Real number variable %f", variable name);`<br>
- `printf("Character variable %c, variable name);`<br>

**To Get input**

- `scanf("%d", &IntegerVariable);` <br>
- `scanf("%f", &RealVariable);` <br>
- `scanf("%c", &CharacterVariable);` <br>

# Instructions

**Type of instructions** <br>

- Type Declaration Instructions: Declare a variable before using it, in order
- Arithemetic Instructions: all the operations are on the RHS, LHS should have only one variable. int op float = float. examples +, -, _, /, %(only int, symbol depends on numerator) etc. When performing float to int **explicit conversion** we use `(int) 1.82364` and the output will be 1 as all the numbers after the decimal are completely removed. **NO ROUNDING OFF IS DONE BY THE COMPILER**. Arithemetic Operator precedence in C _, /, % Then +, - Then =, Example: `x= 5 * 2 + 3 * 4 % 8` When op of same precedence are together Associativity is used, this law states start to calculate left to right `x = 4 * 2 % 5 * 3`.
- Control Instructions: Sequence Control, Decision Control, Loop Control & Case Control

# Operators

- Arithemetic Operators
- Relational Operators: == | != | >,>= | <,<= | Return 1 being True or 0 being False
- Logical Operators: && is and, || is or, ! is not
- Bitwise Operators
- Assignment Operators: =, +=, -=, \*=, /=, %= These are shorthand operators.
- Ternary Operators: ```Condition ? doSomething if True: doSomething id False;``` This is a short hand operator for conditional statement.

**Operator Precedence:**

- !
- \*, /, %
- +, -
- <, <=, >, >=
- ==, !=
- &&
- ||
- =

# Conditional Statements

**Type of statements:**

- if-else
- switch

**if-else**

```c
if(Condition1)
{
    //Do something if the condition1 is True
}
else if(Condition2)
{
    //Do something if condition1 is False and condition2 is True
}
else
{
    //Do something if both conditions are False
}
```
**switch**
```c
switch(number)
{
    case C1: //do something
            break;
    case C2: //do something
            break;
    default: // do something
}
//Cases can be in any order.
//Nested switches are allowed.
//Here using break is import otherwise all the statements below it will be executed until a break is found.

```

# Loop Control Instructions

**for loop**

*Syntax*
```c
for(initialisation; condition; updation)
{
    //do something
}
```
- Here the itarator in the initialisation can be float or char aswell.

**while loop**

*Syntax*
```c
while(condition)
{
    //do something
}
```
- Here first it will check the condition then do the work.

**do while loop**

*Syntax*
```c
do
{
    //do something
}
while (condition);
```
- Here first it will do the work then check the condition.

**break Statement**

Breaks the loop instantly
```c
if(i==3)
{
    break; //here whenever i's value is 3 loop will break instantly
}
```

**continue Statement**

Breaks the loop only once and continue it 
```c
if(i=3)
{
    continue; //here whenever i's value is 3, here loop will pass just this time and will continue to work when i is not 3
}
```

# Functions and recursions 

**Functions**

Block of code that performs a particular task and can be used multiple times

*Syntax*
```c
//declaration
void printHello();

int main()
{
    printHello(); //function call
    printHello();
    return 0;
}
//function
void printHello()
{
    printf("Hello");
}
```

# Comments
```c
// single line comment
/* multiple
   line
   comment
*/
```

> For converting from Exe to out
> **gcc file.c -o exename**
