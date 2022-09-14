#ifndef LIBSPEWC2_H
# define LIBSPEWC2_H
# include "libspewc/libspewc.h"
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
char	*get_next_line(int fd, int buffer_size);
#endif
