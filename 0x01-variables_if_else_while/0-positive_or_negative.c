#include <stdlib.h>
#include <time.h>
#include <math.h>
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
if n>0
{
printf("%d is positiven\n",n)
}
if n=0
{
printf("%d is zero\n",n)
}
if n<0
{
printf("%d is negative \n",n)
}


