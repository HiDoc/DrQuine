#include <stdio.h>
int main(){
FILE *fp = fopen("Grace_kid.c" ,"w");
char *x = "%s %c %s %s %c%s%c %s %c%s%c %s char *x=%c%s%c; char *a=%c%s%c; char *b=%c%s%c; char *c=%c%s%c;  char *c1=%c%s%c;  char *c2=%c%s%c;  char *c3=%c%s%c;  char *c4=%c%s%c; char *d=%c%s%c; char *e=%c%s%c; %s %s";
char *a = "#include <stdio.h>";
char *b = "int main(){";
char *c = "FILE *fp = fopen(";
char *c1 = "Grace_kid.c";
char *c2 = ",";
char *c3 = "w";
char *c4 = ");";
char *d = "fprintf(fp, x, a, 10, b, c, 34,c1,34, c2, 34,c3,34, c4, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,c2,34, 34,c3,34, 34,c4,34, 34,d,34, 34,e,34, d, e);";
char *e = "return 0;}";
fprintf(fp, x, a, 10, b, c, 34,c1,34, c2, 34,c3,34, c4, 34,x,34, 34,a,34, 34,b,34, 34,c,34, 34,c1,34, 34,c2,34, 34,c3,34, 34,c4,34, 34,d,34, 34,e,34, d, e);
return 0;}
