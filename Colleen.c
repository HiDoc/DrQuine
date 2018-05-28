#include <stdio.h>
/*
 * This is a Self Replicant
 */
int main(){char *c="#include <stdio.h>%c/*%c%s%c */%cint main(){char *c=%c%s%c;char*a=%c%s%c;printf(c,10,10,a,10,10,34,c,34,34,a,34,10);return 0;}%c";char*a=" * This is a Self Replicant";printf(c,10,10,a,10,10,34,c,34,34,a,34,10);return 0;}
