# Basics of C

C is a general purpose programming language.
C is a procedure oriented language.
It is used for the development of operating systems, databases, applications, etc.

C is often used to create programs that need to run fast and work closely with the computer.
- Operating systems
- Cars, Tvs, Home eletronics system programming,
- Databases and system software tools for their fast working
- Graphics handling Game engines and programms.
- other Programming languages libraries.

# Syntax

'#' - The preprocessor marker is used to include header files, making their declarations available to the compiler before compilation.
'#' is only a marker that tells the preprocessor this line is a preprocessor directive.
The preprocessor is a program stage that runs before the compiler.
- Handles #include
- Handles #define macros
- Handle conditional compilation (#if, #ifdef, #ifndef, #else, #elif, #endif)
- Remove comments

# Escape sequences
- '\n' - newline escape sequence
- \\ - Inserts a backslash character
- \t - Inserts a horizontal tab
- \" - Inserts a double quote character

# Comments
single line - //
Multi line - /* */

# Variables
Variables are containers for stroing data values.
Variable is a name given to a memory location.

# More about printf()
printf() Function signature

   int printf(const char *format, ...);
First argument -> format string (char *)
Remaining arguments -> values to print

- printf does not use variable types
  - does not look at C variables types
  - does not know object sizes
  - does not know memory boundaries
  - variadic function discard type info.

printf internal pointer to null-terminated character sequence.
Formatting means converting a number into a character (or text) for display.

# Format Specifier

Format specifier acts as a placeholder that tells C what kind of value will be printed.
***Using variables is usually better inside printf(), because the value can be reused and changed later.***

Declaring multiple variables must be of the same data type, we cannot mix types in the same declaration.

***Declaring multiple variables on one line is convenient, but declaring them on separate lines can make your code easier to read***

# Identifiers
All c variables must be identified with unique names, these unique names are called Identifiers.
The general rules for naming variables:-
1. Names can contain letters, digits and underscores.
2. Names are case sensitive.
3. Names must begin with a letter or an underscore.
4. names cannot contain whitespaces or special characters like #, ! %, etc.
5. Reserved words cannot be used as names.

**Calculations are usually done first, the result is stored in variables then printed**

# Data Types
int(2 0r 4 bytes), float(4 bytes), double(8 bytes), char(1 byte)

basic data types:-
- int (%d or %i)
- float (%f or %F)
- double  (%lf)   precision of upto 15 decimal digits
- char (%c)
- string (%s)

Data types in C do ALL of this:

- Allocate memory size
- Define allowed values
- Set value range
- Control arithmetic behavior
- Enable type checking (for functions)
- Tell compiler how to interpret bits
- Affect memory alignment (Structures)
- Prevent type errors

# Characters
char is just a number type like int.
Char can accept characters, because characters in C are just numbers.

char c = 'A';

internally:
char c = 65;
Because 'A' is just a numeric constant (ASCII value 65)

Integer promotion = automatic conversion of char and short to int before arithmetic or function calls.
In C, when a char participates in an expression (like >, +, -, etc.), it is automatically promoted to int (or unsigned int) before the operation is performed.

When assigning an multi-character constat like 
char name = 'ABCD';
This implementation is not portable and not reliable.

But on most common systems:
- 'ABCD' becomes an int (not a char!)
- The compiler packs 'A','B', 'C', 'D' into an integer
- Then that integer is truncated to 1 byte when assigned to char
So only last byte survives, usually the last byte 'D'.
char can be signed or unsigned.

# Numeric Data type
- int is signed always.
- In C, very large or very small floating-point numbers can be written using scientific notation.
- For this, the letter e (or E), which stands for "times 10 to the power of".
- 45e3 means 45 × 10³ = 45000.
- '.' followed by a number specifies the number of decimal digits to keep in output.

**To actually get the size(in bytes) of a data type or variable use the sizeof() operator, sizeof() is not a function**
- For sizeof() %zu is used, because sizeof returns a value of type size_t which is an unsigned integer type.

*Extended Keywords*
short int(2, %hd), unsigned int(2 or 4, %u), long int(4 or 8, %ld), long long int (8, %lld), unsigned long int(4 or 8 bytes, %lu), unsigned long long int(8, %llu), long double(8,12 or 16, %Lf)

**unsigned means the type can only store non-negtive values**
*The exact sizes depends on our system and compiler*

# Fixed - width Integers
Data types sizes can vary depending on your computer and system.
To make programs behave the same everywhere, C provides fixed-width integer types in the <stdint.h> header.

int8_t (8 bits, %d), uint8_t (8, %u), int16_t (16, %d), uint16_t (16, %u), int32_t (32, %d), uint32_t (32, %u), int64_t (64, %lld), uint64_t (64, %llu)

*Used when*
1. Sending data over networks,
2. Writing codes for embedded systems,
3. For file formats

Programs: 

- First C program
- Keywords
- Standard I/O
- Simple arithmetic problems

Focus: Understanding syntax and program structure.