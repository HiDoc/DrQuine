#include <stdio.h>
int main(void){
	int i = 5;
	char *x = ("%s%c %s%c %s%d;%c");
	char *a = "#include <stdio.h>"; 
	char *b = "int main(){";
	char *c = "int i = ";
	char *d = "FILE *fp = fopen(d, );"; 
	char *e = "sprintf(f,\"Sully_%d.c\", i)"; 
	char f[50];
	char *g = "";
	char *h = "return 0;}";
	FILE *fp = fopen( d, "w" );
	sprintf(f, "Sully_%d.c", i);
	printf(x, a,10, b,10, c,--i,10);
	return 0;
}
