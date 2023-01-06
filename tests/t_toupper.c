#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <string.h>

int main(void)
{ 	
	char a[]="a";	
	a[0] = ft_toupper(*a);
	printf("%s", a);
}