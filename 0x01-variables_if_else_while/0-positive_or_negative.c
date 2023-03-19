#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*to print numberis postive
*to print number is zero
*to print number is negative 
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("%d is positiven\n",n);
}
ifelse 
{
printf("%d is zero\n",n);
}
else (n<0)
{
printf("%d is negative \n",n);
}
return(0);
}

