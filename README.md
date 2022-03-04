# libft
This project is all about understanding how features work, implementing them, and learning how to use them. This library is written in C.
# Compilation
 `make`
# Functions
|  Function | Prototype | Description |
| :-: | :-: | :-: |
| ft_atoi | `int	ft_atoi(const char *nptr)` | Convert a string to an integer. |
| ft_bzero | `void ft_bzero(void *s, size_t n)` | Zero a byte string. |
| ft_calloc | `void *ft_calloc(size_t nmemb, size_t size)` | A memory allocator. |
| ft_isalnum | `int ft_isalnum(int c)` | Test for an alphanumeric character. |
| ft_isalpha | `int ft_isalpha(int c)` | Test for an alphabetic character. |
| ft_isascii | `int ft_isascii(int c)` | Test for an ascii character. |
| ft_isdigit | `int ft_isdigit(int c)` | Test for a digit character. |
| ft_isprint | `int ft_isprint(int c)` | Test for a printable character. |
| ft_itoa | `char *ft_itoa(int n)` | Convert an integer to a string. |
| ft_memccpy | `void	*ft_memccpy(void *dest, const void *src, int c, size_t n)` | Copy memory area. |
| ft_memchr | `void *ft_memchr(const void *s, int c, size_t n)` | Scan memory for a character. |
| ft_memcmp | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compare memory areas. |
| ft_memcpy | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copy memory area. |
| ft_memmove | `void	*ft_memmove(void *dest, const void *src, size_t n)` | Move memory area. |
| ft_memset | `void *ft_memset(void *s, int c, size_t n)` | Fill memory with a constant byte. |
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd)` | Put a byte on fd. |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd)` | Put a string follow by a newline on fd. |
| ft_putnbr_fd | `void ft_putnbr_fd(int n, int fd)` | Put a number on fd. |
| ft_putstr_fd | `void ft_putstr_fd(char *s, int fd)` | Put a string on fd. |
| ft_split | `char **ft_split(char const *s, char c)` | Split a string into pieces using c as separator. |
| ft_strchr | `char *ft_strchr(const char *s, int c)` | Locate character in string. |
| ft_strdup | `char *ft_strdup(const char *s)` | Duplicate a string. |
| ft_strjoin | `char	*ft_strjoin(char const *s1, char const *s2) `| Join two strings. |
| ft_strlcat | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Concatenate two strings. |
| ft_strlcpy | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copy a string. |
| ft_strlen | `size_t ft_strlen(const char *s)` | Calculate the length of a string. |
| ft_strmapi | `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Create a new string applying f to each character. |
| ft_strncmp | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compare two strings. |
| ft_strnstr | `char	*ft_strnstr(const char *big, const char *little, size_t len)` | Locate a substring in a string. |
| ft_strrchr | `char	*ft_strrchr(const char *s, int c)` | Locate character in string. |
| ft_strtrim | `char	*ft_strtrim(char const *s1, char const *set)` | Remove leading and trailing set of characters. |
| ft_substr | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Return a substring of len characters begenning at start. |
| ft_tolower | `int ft_tolower(int c)` | Upper case to lower case letter conversion. |
| ft_toupper | `int ft_toupper(int c)` | Lower case to upper case letter conversion. |
