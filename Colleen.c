#include <stdio.h>
#define G(x) 34,x,34,10,
#define S(x) ,x,10
/*
 * This is a Self Replicant
 */
int print(){
char *x="%s%c%s%c%s%c%s%c%s%c%s%c%s%cchar *x=%c%s%c;%cchar *a=%c%s%c;%cchar *b=%c%s%c;%cchar *c=%c%s%c;%cchar *d=%c%s%c;%cchar *e=%c%s%c;%cchar *f=%c%s%c;%cchar *g=%c%s%c;%cchar *h=%c%s%c;%cchar *i=%c%s%c;%c%s%c%s%c";
char *a="#include <stdio.h>";
char *b="#define G(x) 34,x,34,10,";
char *c="#define S(x) ,x,10";
char *d="/*";
char *e=" * This is a Self Replicant";
char *f=" */";
char *g="int print(){";
char *h="printf(x S(a) S(b) S(c) S(d) S(e) S(f) S(g), G(x) G(a) G(b) G(c) G(d) G(e) G(f) G(g) G(h) G(i) h,10, i,10);";
char *i="return 0;}";
printf(x S(a) S(b) S(c) S(d) S(e) S(f) S(g), G(x) G(a) G(b) G(c) G(d) G(e) G(f) G(g) G(h) G(i) h,10, i,10);
return 0;}
int main(){
print();
/*
 * This is an inside comment
 */
char *x="%s%c%s%c%s%c%s%c%s%cchar *x=%c%s%c;%cchar *a=%c%s%c;%cchar *b=%c%s%c;%cchar *c=%c%s%c;%cchar *d=%c%s%c;%cchar *e=%c%s%c;%cchar *f=%c%s%c;%cchar *g=%c%s%c;%c%s%c%s%c";
char *a="int main(){";
char *b="print();";
char *c="/*";
char *d=" * This is an inside comment";
char *e=" */";
char *f="printf(x S(a) S(b) S(c) S(d) S(e), G(x) G(a) G(b) G(c) G(d) G(e) G(f) G(g) f,10, g,10);";
char *g="return 0;}";
printf(x S(a) S(b) S(c) S(d) S(e), G(x) G(a) G(b) G(c) G(d) G(e) G(f) G(g) f,10, g,10);
return 0;}
