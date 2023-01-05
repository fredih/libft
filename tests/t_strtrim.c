#include <stdio.h>
#include <bsd/string.h>
#include "../libft.h"

int	main(void)
{
	// const char *largestring = "F oo Bar Baz ";
	// const char *smallstring = "Bar";

	// printf("%s\n", ft_strtrim("a", ""));
	// printf("%s\n", ft_strtrim("", "a"));
	// ft_putstr_fd(ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"), 1);
	// printf("\n=====================\n");
	// printf("%d\n", ft_strtrim("", "")[0] == '\0' );
	// ft_putstr_fd(ft_strtrim("", " \n\t"), 1);
	ft_putstr_fd(ft_strtrim("abcd", ""), 1);
	return (0);
}
