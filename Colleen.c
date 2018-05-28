#include <stdio.h>
#define G(x) 34,x,34,10,
#define S(x) ,x,10
/*
 * This is a Self Replicant
 */
int main()
{
/*
 * This is an inside comment
 */
char *x="%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%cchar *x=%c%s%c;%cchar *a=%c%s%c;%cchar *a2=%c%s%c;%cchar *a3=%c%s%c;%cchar *b=%c%s%c;%cchar *c=%c%s%c;%cchar *c2=%c%s%c;%cchar *d=%c%s%c;%cchar *e=%c%s%c;%cchar *f=%c%s%c;%cchar *g=%c%s%c;%cchar *h=%c%s%c;%cchar *i=%c%s%c;%c %s%c%s%c%s%c";
char *a="#include <stdio.h>";
char *a2="#define G(x) 34,x,34,10,";
char *a3="#define S(x) ,x,10";
char *b="/*";
char *c=" * This is a Self Replicant";
char *c2=" * This is an inside comment";
char *d=" */";
char *e="int main()";
char *f="{";
char *g="}";
char *h="printf(x,a,10,a2,10,b,10,c,10,d,10,e,10,f,10,b,10,c2,10,d,10, G(x) G(a) G(a2) G(b) G(c) G(c2) G(d) G(e) G(f) G(g) G(h) G(i) h,10,i,10,g,10);";
char *i="return 0;";
printf(x S(a) S(a2) S(a3) S(b) S(c) S(d) S(e) S(f) S(b) S(c2) S(d), G(x) G(a) G(a2) G(a3) G(b) G(c) G(c2) G(d) G(e) G(f) G(g) G(h) G(i) h,10,i,10,g,10);
return 0;
}
