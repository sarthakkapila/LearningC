#include <stdio.h>                                      // Standard input output 
#include <stdlib.h>                                     // Standard library (General utilities: memory management, program utilities, string conversions, random numbers, algorithms)

// STD lib headers
/*
<assert.h>	Conditionally compiled macro that compares its argument to zero
<complex.h> (since C99)	Complex number arithmetic
<ctype.h>	Functions to determine the type contained in character data
<errno.h>	Macros reporting error conditions
<fenv.h> (since C99)	Floating-point environment
<float.h>	Limits of floating-point types
<inttypes.h> (since C99)	Format conversion of integer types
<iso646.h> (since C95)	Alternative operator spellings
<limits.h>	Ranges of integer types
<locale.h>	Localization utilities
<math.h>	Common mathematics functions
<setjmp.h>	Nonlocal jumps
<signal.h>	Signal handling
<stdalign.h> (since C11)	alignas and alignof convenience macros
<stdarg.h>	Variable arguments
<stdatomic.h> (since C11)	Atomic operations
<stdbit.h> (since C23)	Macros to work with the byte and bit representations of types
<stdbool.h> (since C99)	Macros for boolean type
<stdckdint.h> (since C23)	macros for performing checked integer arithmetic
<stddef.h>	Common macro definitions
<stdint.h> (since C99)	Fixed-width integer types
<stdio.h>	Input/output
<stdlib.h>	General utilities: memory management, program utilities, string conversions, random numbers, algorithms
<stdnoreturn.h> (since C11)	noreturn convenience macro
<string.h>	String handling
<tgmath.h> (since C99)	Type-generic math (macros wrapping math.h and complex.h)
<threads.h> (since C11)	Thread library
<time.h>	Time/date utilities
<uchar.h> (since C11)	UTF-16 and UTF-32 character utilities
<wchar.h> (since C95)	Extended multibyte and wide character utilities
<wctype.h> (since C95)	Functions to determine the type contained in wide character data
*/

/*
%c	-> single char
%s  -> string
%Lf	-> long double
%n	-> prints nothing 
%d	-> decimal integer (assumes base 10)
%i	-> decimal integer (detects the base automatically)
%o	-> octal (base 8) integer
%x	-> hexadecimal (base 16) integer
%p	-> an address (or pointer)
%f	-> floating point number 
%u	-> int unsigned decimal
%e	-> floating point number (scientific notation)
%E	-> floating point number (scientific notation)
%%	-> % symbol
*/

#define PHI 1.61                                        // Defines a const named PHI need not specify type

int age = 30;                                           // Integer variable
float pi = 3.14;                                        // Float variable
char grade = 'A';                                       // Char variable

float add(int age, float pi);                           // Func prototype (declaration of a func)

void main(){
    float result = add(age, pi);
    printf("%f", result);
}

float add(int a, float b){
    return a+b;
}

// What the fuck even is this my js-py brain can't handle this bruh 💀