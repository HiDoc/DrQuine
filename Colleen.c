#include <stdio.h>
/*
 * This is a Self Replicant
 */
int main()
{
/*
 * This is an inside comment
 */
char *x="%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%c%s%cchar *x=%c%s%c;%cchar *a=%c%s%c;%cchar *b=%c%s%c;%cchar *c=%c%s%c;%cchar *c2=%c%s%c;%cchar *d=%c%s%c;%cchar *e=%c%s%c;%cchar *f=%c%s%c;%cchar *g=%c%s%c;%cchar *h=%c%s%c;%cchar *i=%c%s%c;%c%s%c%s%c%s%c";
char *a="#include <stdio.h>";
char *b="/*";
char *c=" * This is a Self Replicant";
char *c2=" * This is an inside comment";
char *d=" */";
char *e="int main()";
char *f="{";
char *g="}";
char *h="printf(x,a,10,b,10,c,10,d,10,e,10,f,10,b,10,c2,10,d,10, 34,x,34,10, 34,a,34,10, 34,b,34,10, 34,c,34,10, 34,c2,34,10, 34,d,34,10, 34,e,34,10, 34,f,34,10, 34,g,34,10, 34,h,34,10, 34,i,34,10, h,10,i,10,g,10);";
char *i="return 0;";
printf(x,a,10,b,10,c,10,d,10,e,10,f,10,b,10,c2,10,d,10, 34,x,34,10, 34,a,34,10, 34,b,34,10, 34,c,34,10, 34,c2,34,10, 34,d,34,10, 34,e,34,10, 34,f,34,10, 34,g,34,10, 34,h,34,10, 34,i,34,10, h,10,i,10,g,10);
return 0;
}
