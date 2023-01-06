#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>
#include <unistd.h>

int main(void)
{ 	
    ft_putstr_fd(ft_strjoin("lorem ipsum dolor sit amet", "123456"),1);
    write(1, "\n", 1);


    // char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	// char buff1[0xF00] = "there is no stars in the sky";
 	// char buff2[0xF00] = "there is no stars in the sky";
 	// size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
 	// size_t r1 = strlcat(buff1, str, max);
 	// size_t r2 = ft_strlcat(buff2, str, max);
	// printf("max: %ld\n", max);
 	// strlcat(buff1, str, max);
 	// ft_strlcat(buff2, str, max);
 
	// printf("%s, %ld\n%s, %ld", buff1, r1,  buff2, r2);
 	// if (r1 != r2)
 	// 	exit(TEST_FAILED);
 	// char s1[4] = "";
 	// char s2[4] = "";
 	// r1 = strlcat(s1, "thx to ntoniolo for this test !", 4)
 	// 	;
 	// r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4)
 	// 	;
 	// if (r1 != r2)
 	// 	exit(TEST_FAILED);
 	// exit(TEST_SUCCESS);
	return (0);
}