#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "../ft_memset.c"


#define  BUF_SIZE  20

int main(void)
{
	// printf("%c, %c\n", 126, (unsigned char)(126+256));
	char buffer[BUF_SIZE + 1];
   char *string;
 
   ft_memset(buffer, 0, sizeof(buffer));
   string = (char *) ft_memset(buffer,'A', 10);
   printf("\nBuffer contents: %s\n", string);
   ft_memset(buffer+10, 126, 10);
   printf("\nBuffer contents: %s\n", buffer);
	

	// printf("char: %ld, int: %ld\n", sizeof(char), sizeof(int));

	// for (int i = -1; i <= 1; i++){
	// 	if (isascii(i))
	// 		printf("YES, ");
	// 	else
	// 		printf("NO, ");
	// 	printf("%c\n", i);
	// }
}