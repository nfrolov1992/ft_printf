# ft_printf

ft_printf is reproduced C's printf function. Just like real printf, it allows the following functionality:

%[flags][width][.precision][length]type 
Result is a formated string. Each of these parts is explained below. To produce ft_printf() function, only UNIX write, malloc, free, exit, stdarg functions have been used. Rest of the functionality is custom built.

Following flags are supported

'#'(hash) - For o, x, X types, the text 0, 0x, 0X, respectively, is prepended to non-zero numbers.

'0'(zero) - When the 'width' option is specified, prepends zeros for numeric types.
For example, printf("%2X",3) produces ' 3', while printf("%04X",3) produces '0003'.

'-'(minus) - Left-align the output of this placeholder. (The default is to right-align the output.)

'+'(plus) - Prepends a plus for positive signed-numeric types.

' '(space) - Prepends a space for positive signed-numeric types.This flag is ignored if the + flag exists.
[width]
Width specifies a minimum number of characters to output. For example, ft_printf("%5d", 5); would result in ' 5';

[.precision]
Precision field specifies a maximum limit on the output. For example, ft_printf("%.2s", "abcd"); would result in 'ab';

[length]
Length specifiers tell what argument is expected. It will cause ft_printf() to typecast the input to meet necessary requirement.

Allowed length specifiers

'l' - For integer types, causes ft_printf to expect a long-sized integer argument.
'L' - For floating point types, causes ft_printf to expect a long double argument.
'hh' - For integer types, causes ft_printf to expect an int-sized integer argument which was promoted from a char.
'h' - For integer types, causes ft_printf to expect an int-sized integer argument which was promoted from a short.
'l' - For integer types, causes ft_printf to expect a long-sized integer argument.
'll' - For integer types, causes ft_printf to expect a long long-sized integer argument.
type
Following conversion characters are allowed:

%c (character)
%s (string)
%p (address)
%d (digit)
%i (integer)
%o (digit in octal)
%u (unsigned integer)
%x (hexadecimal in lowercase)
%X (hexadecimal in upper case)
%f (float)

Return value
Function returns bytes written to standard output. Thus, if multibyte character is printed, ft_printf() would return the amount of bytes it consists of not how many characters were printed.
