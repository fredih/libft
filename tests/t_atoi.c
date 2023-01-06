#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <string.h>

int main(void)
{ 	
    // char *n = "-085";
 	// int i1 = atoi(n);
 	// int i2 = ft_atoi(n);

	// char *n = "\t\v\f\r\n \f- \f\t\n\r    06050";
 	// int i1 = atoi(n);
 	// int i2 = ft_atoi(n);


 	char *n = "+000000000123";
 	int i1 = atoi(n);
 	int i2 = ft_atoi(n);

	printf("expected: %d\nresult: %d", i1, i2);
	
	
}