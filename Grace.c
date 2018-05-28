/*#include <stdio.h>
  int main(){
  char *x = "%s %c %s char *x=%c%s%c; char *a=%c%s%c; char *b=%c%s%c; char *c=%c%s%c;  char *c1=%c%s%c; char *d=%c%s%c; char *e=%c%s%c; %s %c%s%c %c %c%c%c %c%c %s %s";
  char *a = "#include <stdio.h>";
  char *b = "int main(){";
  char *c = "FILE *fp = fopen(";
  char *c1 ="Grace_kid.c";
  char *d ="fprintf(fp, x, a, 10, b, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,d,34, 34,e,34, c, 34,c1,34, 44, 34,119,34, 41,59, d, e);";
  char *e = "return 0;}";
  FILE *fp = fopen("Grace_kid.c" ,"w");
  fprintf(fp, x, a, 10, b, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,d,34, 34,e,34, c, 34,c1,34, 44, 34,119,34, 41,59, d, e);
  return 0;}
  */
#include <stdio.h>
#define FT(x) int main(){CHAR PRINT}
#define CHAR	char *x = "%s %c %s char *x=%c%s%c; char *a=%c%s%c; char *b=%c%s%c; char *c=%c%s%c;  char *c1=%c%s%c; char *d=%c%s%c; char *e=%c%s%c; %s %c%s%c %c %c%c%c %c%c %s %s"; \
						   char *a = "#include <stdio.h>"; \
char *b = "int main(){"; \
char *c = "FILE *fp = fopen("; \
char *c1 ="Grace_kid.c"; \
char *d ="fprintf(fp, x, a, 10, b, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,d,34, 34,e,34, c, 34,c1,34, 44, 34,119,34, 41,59, d, e);"; \
char *e = "return 0;}"; 

int main(){
	char *x = "%s %c %s char *x=%c%s%c; char *a=%c%s%c; char *b=%c%s%c; char *c=%c%s%c;  char *c1=%c%s%c; char *d=%c%s%c; char *e=%c%s%c; %s %c%s%c %c %c%c%c %c%c %s %s";
	char *a = "#include <stdio.h>";
	char *b = "int main(){";
	char *c = "FILE *fp = fopen(";
	char *c1 ="Grace_kid.c";
	char *d ="fprintf(fp, x, a, 10, b, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,d,34, 34,e,34, c, 34,c1,34, 44, 34,119,34, 41,59, d, e);";
	char *e = "return 0;}";
	FILE *fp = fopen("Grace_kid.c" ,"w");
	fprintf(fp, x, a, 10, b, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,d,34, 34,e,34, c, 34,c1,34, 44, 34,119,34, 41,59, d, e);
	return 0;}
