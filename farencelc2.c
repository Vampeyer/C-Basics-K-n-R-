#include <stdio.h>

int main()
{
float fahr, celsius;
float lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;

while(fahr <= upper)
{
celsius = (5.0/9.0) * (fahr -32.0);
printf("%3.0f %6.2f\n", fahr, celsius);  /* the .1 in 6.1 or .2 , describes how many decimals characters to display , like .5 .05 .005 etc  */
					/* without the last line of code this is a looper   */
					/*  This line of code increments the fahr value by 20 , until the comparison is truthy */

fahr = fahr + step;

}
}

/* %d prints a decimal integer and %f prints as a floating point   */
