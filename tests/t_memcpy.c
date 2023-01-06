#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <string.h>

int main(void)
{ 	
    // char *src = "thanks to @apellicc for this test !\r\n";
 	// char dst1[0xF0];
 	// int size = strlen(src);
 	// char *r1 = memmove(dst1, src, size);
 	// char *r2 = ft_memmove(dst1, src, size);

 	char *r1 = ft_memcpy(((void*)0), ((void*)0), 0);


	
	printf("%p\n", r1);
 	char *r2 = ft_memcpy(((void*)0), ((void*)0), 3);
	
	printf("%p", r2);
}