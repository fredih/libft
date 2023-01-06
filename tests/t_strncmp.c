#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <string.h>

int main(void)
{ 	
 	char *s2 = "\200";
 	char *s1 = "\0";
	printf("%d\n%d",strncmp(s1,s2,1), ft_strncmp(s1,s2,1));
}