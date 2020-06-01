#include<stdio.h>
#define FILENAME "Grace_kid.c"
#define GRACE "#include<stdio.h>%c#define FILENAME %cGrace_kid.c%c%c#define GRACE %c%s%c%c#define FT(x) int main(void)%c%c{%c%c	FILE *fd;%c%c%c%c	fd = fopen(FILENAME, %cw%c);%c%c	if (!fd)%c%c	{%c%c		printf(%cfopen Grace_kid.c failed%c);%c%c		return 0;%c%c	}%c%c	fprintf(fd, GRACE, 10, 34, 34, 10, 34, GRACE, 34, 10, 92, 10, 92, 10, 92, 10, 92, 10, 34, 34 ,92, 10, 92, 10, 92, 10, 34, 34, 92, 10, 92, 10, 92, 10, 92, 10, 92, 10, 92, 10, 10, 10, 10, 10, 10, 10);%c%c	fclose(fd);%c%c	return 0;%c%c}%c%c/*%c	go%c*/%cFT()%c"
#define FT(x) int main(void)\
{\
	FILE *fd;\
\
	fd = fopen(FILENAME, "w");\
	if (!fd)\
	{\
		printf("fopen Grace_kid.c failed");\
		return 0;\
	}\
	fprintf(fd, GRACE, 10, 34, 34, 10, 34, GRACE, 34, 10, 92, 10, 92, 10, 92, 10, 92, 10, 34, 34 ,92, 10, 92, 10, 92, 10, 34, 34, 92, 10, 92, 10, 92, 10, 92, 10, 92, 10, 92, 10, 10, 10, 10, 10, 10, 10);\
	fclose(fd);\
	return 0;\
}

/*
	go
*/
FT()
