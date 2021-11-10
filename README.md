Makes our own printf function for holberton.
  
The objective  is make a function than emulates the original function of printf,according this goal,
we follow the instructions for the excersice.
  
We create two functions to manage chars and strings, and we usa % like format specification.
Attending our objective, we write a function that produces a output according to a format,
where the prototype is : int printf(const char *format, ...);.
 
The function returns, the number of characters printed (excluding the null byte used to end output to strings)
we made function write output to stdout, the format is a character string and the format string is composed of zero or more directives.
 
functions handle the following conversion specifiers:
		c, s, %, d, i.
where c are char , s are strings, % is the format specification, d are decimal and i are integers.
 
In _printf.c we check the existence of the format variable, in case of error function return -1.
if format exists the function checks every character for the presence of % marker and its corresponding option, if it found an option
then it calls to a print function associated with that structure index.
if there is no match, function prints the characters.
 
in funchar.c we have the logic for the function struct , there we can found print _s, print_c, print_d and convert_d functions.
this function are executed depends the input received for the struct.
 
finally in main.h we have the prototypes functions.

