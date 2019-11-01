#include<stdio.h>
#define GRACE "#include<stdio.h>%c#define GRACE %c%s%c%c#define MAIN int main(void)%c%c{%c%c%cFILE *fd;%c%c%c%c%cfd = fopen(%cGrace_kid.c%c, %cw%c);%c%c%cif (!fd)%c%c%c{%c%c%c%cprintf(%cfopen Grace_kid.c failed%c);%c%c%c%creturn 0;%c%c%c}%c%c%cfprintf(fd, GRACE, 10, 34, GRACE, 34, 10, 92, 10, 92, 10, 9, 92, 10, 92, 10, 9, 34, 34, 34, 34 ,92, 10, 9, 92, 10, 9, 92, 10, 9, 9, 34, 34, 92, 10, 9, 9, 92, 10, 9, 92, 10, 9, 92, 10, 9, 92, 10, 9, 92, 10, 10, 10, 10);%c%c%cfclose(fd);%c%c%creturn 0;%c%c}%c/* comment */%cMAIN%c"
#define MAIN int main(void)\
{\
  FILE *fd;\
\
  fd = fopen("Grace_kid.c", "w");\
  if (!fd)\
  {\
    printf("fopen Grace_kid.c failed");\
    return 0;\
  }\
  fprintf(fd, GRACE, 10, 34, GRACE, 34, 10, 92, 10, 92, 10, 9, 92, 10, 92, 10, 9, 34, 34, 34, 34 ,92, 10, 9, 92, 10, 9, 92, 10, 9, 9, 34, 34, 92, 10, 9, 9, 92, 10, 9, 92, 10, 9, 92, 10, 9, 92, 10, 9, 92, 10, 10, 10, 10);\
  fclose(fd);\
  return 0;\
}
/* comment */
MAIN
