#include "mystring.h"
#include "bit_setReset.h"
#include "myutlibs.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{

int n = 5, k = 1; int res=0;
char s1[20]="abcd";
char s2[20]="abxyz";

//utility

printf("the factorial of %d is:", 5);
factorial(5);
printf("\n %d is ",25);
isprime(25);
printf("\n %d is ",584);
ispalindrome(584);
printf("\n");
printf("%d is the value of sum",vsum(5, 8, 12, 45));


//string
printf("\n \n");
if(mystrcmp(s1,s2)==0)
printf("equal\n");
else
printf("Not equal\n");
mystrcat(s1,s2);
printf("s1=%s,s2=%s\n",s1,s2);
int n1=mystrlen(s1);
printf("n1=%d\n",n1);
mystrcpy(s2,s1);
printf("s2=%s\n",s2);

//bitmask
printf("\n");
printf("%d with %d-th bit Set: %d\n",n, k, set(n, k));
printf("%d with %d-th bit Cleared: %d\n",n, k, clear(n, k));
printf("%d with %d-th bit Toggled: %d\n",n, k, flip(n, k));
res=query(n, k);
if(res)
    printf("SET");
else
    printf("NOTSET");

return 0;

}
