#include <stdio.h>

/*
	comment outside
*/

void print_colleen(char *s)
{
	printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10);
}

int main(void)
{
	char s[] = "#include <stdio.h>%c%c/*%c	comment outside%c*/%c%cvoid print_colleen(char *s)%c{%c	printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint main(void)%c{%c	char s[] = %c%s%c;%c%c	/*%c		comment inside main%c	*/%c	print_colleen(s);%c	return 0;%c}%c";

	/*
		comment inside main
	*/
	print_colleen(s);
	return 0;
}
