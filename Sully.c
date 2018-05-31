#include <stdio.h>
int main(void){
	int i = 5;
	char *x = ("%s%c %s%c %s%d;%c char *x=%c%s%c;%c char *a=%c%s%c;%c char *b=%c%s%c;%c char *c=%c%s%c;%c char d[50];%c char *e=%c%s%c;%c char *f=%c%s%c;%c char *g=%c%s%c;%c char *h=%c%s%c;%c %s%cSully_%%d.c%c, i);%c %s%cw%c);%c %s%c%s%c");
	char *a = "#include <stdio.h>"; 
	char *b = "int main(){";
	char *c = "int i = ";
	char d[50];
	char *e = "sprintf(d,";
	char *f = "FILE *fp = fopen(d, "; 
	char *g = "fprintf(fp, x, a,10, b,10, c,--i,10, 34,x,34,10, 34,a,34,10, 34,b,34,10, 34,c,34,10, 10, 34,e,34,10, 34,f,34,10, 34,g,34,10, 34,h,34,10, e,34,34,10, f,34,34,10, g,10,h,10);";
	char *h = "return 0;}";
	sprintf(d, "Sully_%d.c", i);
	FILE *fp = fopen( d, "w");
	fprintf(fp, x, a,10, b,10, c,--i,10, 34,x,34,10, 34,a,34,10, 34,b,34,10, 34,c,34,10, 10, 34,e,34,10, 34,f,34,10, 34,g,34,10, 34,h,34,10, e,34,34,10, f,34,34,10, g,10,h,10);
	return 0;
}
