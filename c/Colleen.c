#include <stdio.h>

/* comment outside */

void print_colleen(char *s)
{
	printf(s, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 34, s, 34, 10, 10, 9, 10, 9, 10, 9, 10, 10, 10);
}

int main(void)
{
	char s[] = "#include <stdio.h>%c%c/* comment outside */%c%cvoid print_colleen(char *s)%c{%c%cprintf(s, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 34, s, 34, 10, 10, 9, 10, 9, 10, 9, 10, 10, 10);%c}%c%cint main(void)%c{%c%cchar s[] = %c%s%c;%c%c%c/* comment inside main */%c%cprint_colleen(s);%c%creturn 0;%c}%c";

	/* comment inside main */
	print_colleen(s);
	return 0;
}
