# libft
Libft contains replicated versions of functions found in standard C libraries (and more).

## How to use

1. Clone the library into your project using the following command:  
`git clone https://github.com/jelloster/libft.git`

2. Include the following line in your project's header file:  
`#include "libft/inc/libft.h"`

3. Done! Your project is ready to use the functions available in libft.

## Included functions

### Character Functions

- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is an ASCII character.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a character to uppercase.
- `ft_tolower`: Converts a character to lowercase.

### String functions

- `ft_strlen`: Computes the length of a string.
- `ft_strlcpy`: Copies a string with size control.
- `ft_strlcat`: Concatenates two strings with size control.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strnstr`: Finds a substring within a string, up to a given length.
- `ft_strdup`: Duplicates a string.
- `ft_strncmp`: Compares two strings up to a specified length.

### Memory functions

- `ft_memset`: Fills a block of memory with a constant byte.
- `ft_bzero`: Writes zeroes to a byte string.
- `ft_memcpy`: Copies memory from one location to another.
- `ft_memmove`: Moves memory from one location to another, allowing overlap.
- `ft_memchr`: Searches for a byte in a memory block.
- `ft_memcmp`: Compares two memory blocks.
- `ft_calloc`: Allocates memory and initializes it to zero.
- `ft_memdel`: Frees and sets a memory pointer to `NULL`.

### Conversion functions

- `ft_atoi`: Converts a string to an integer.

### Additional functions

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings into a new string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings based on a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Creates a new string using a mapping function on each character.
- `ft_striteri`: Iterates over a string and applies a function to each character.
- `ft_putchar_fd`: Outputs a character to a file descriptor.
- `ft_putstr_fd`: Outputs a string to a file descriptor.
- `ft_putendl_fd`: Outputs a string with a newline to a file descriptor.
- `ft_putnbr_fd`: Outputs an integer to a file descriptor.

### Linked list functions

- `ft_lstnew`: Creates a new linked list node.
- `ft_lstadd_front`: Adds a new node to the beginning of a linked list.
- `ft_lstsize`: Counts the number of nodes in a linked list.
- `ft_lstlast`: Returns the last node of a linked list.
- `ft_lstadd_back`: Adds a new node to the end of a linked list.
- `ft_lstdelone`: Deletes a node from a linked list using a specified function.
- `ft_lstclear`: Deletes all nodes in a linked list using a specified function.
- `ft_lstiter`: Iterates over a linked list and applies a function to each node.
- `ft_lstmap`: Creates a new list by applying a function to each node of an existing list.
