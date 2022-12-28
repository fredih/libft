#include <stdio.h>
#include <ctype.h>

int main(void)
{
	for (int i = -1; i <= 1; i++){
		if (isascii(i))
			printf("YES, ");
		else
			printf("NO, ");
		printf("%c\n", i);
	}
}