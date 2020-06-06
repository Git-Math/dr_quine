#define SULLY "#define SULLY %c%s%c%c%c#include<stdio.h>%c#include<string.h>%c#include<stdlib.h>%c%cint main(void) {%c	int i = %d;%c	char filename[19];%c	char exe_name[19];%c	char cmd[49];%c	FILE *fd;%c%c	if (i < 0) /* no negative values */%c		return 0;%c	if (strchr(__FILE__, '_')) /* decrement i except the first time */%c		i--;%c	sprintf(filename, %cSully_%cd.c%c, i);%c	fd = fopen(filename, %cw%c);%c	if (!fd)%c	{%c		printf(%cfopen Sully_%cd.c failed%c, i);%c		return 0;%c	}%c	fprintf(fd, SULLY, 34, SULLY, 34, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 34, 37, 34, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 34, 10, 10, 10, 10, 10, 10);%c	fclose(fd);%c	sprintf(exe_name, %c./Sully_%cd%c, i);%c	sprintf(cmd, %cclang %cs -o %cs%c, filename, exe_name);%c	system(cmd);%c	if (i) /* continue condition */%c		system(exe_name);%c	return 0;%c}%c"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int i = 5;
	char filename[19];
	char exe_name[19];
	char cmd[49];
	FILE *fd;

	if (i < 0) /* no negative values */
		return 0;
	if (strchr(__FILE__, '_')) /* decrement i except the first time */
		i--;
	sprintf(filename, "Sully_%d.c", i);
	fd = fopen(filename, "w");
	if (!fd)
	{
		printf("fopen Sully_%d.c failed", i);
		return 0;
	}
	fprintf(fd, SULLY, 34, SULLY, 34, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 34, 37, 34, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 34, 10, 10, 10, 10, 10, 10);
	fclose(fd);
	sprintf(exe_name, "./Sully_%d", i);
	sprintf(cmd, "clang %s -o %s", filename, exe_name);
	system(cmd);
	if (i) /* continue condition */
		system(exe_name);
	return 0;
}
