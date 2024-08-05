#ifndef PRINTF_H
#define PRINTF_H
#define BASE_MAX "0123456789ABCDEF"
#define BASE_MIN "0123456789abcdef"

#include "libft/libft.h"
# include <ctype.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
#include <stdarg.h>
int ft_putchar_num(const char c);
int ft_putstr_num(const char *str);
#endif