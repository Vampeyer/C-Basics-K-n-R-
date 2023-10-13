#include  <stdio.h>

/* print Farenheight-Celcius table for fahr = 0, 20 ... 300  */
int main()
{

	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;   /*  Lower limit of each temperature  scale  */
	upper = 300; /*  Upper Size Limit */
	step = 20;  /* step size */

	fahr = lower;
	while (fahr <= upper)
{
	celsius = 5 * (fahr-32) / 9;
	printf("%d\t%d\n", fahr, celsius) ;
	fahr = fahr + step;
	
 }
printf("%d\t%d\n" ,"one" ,"two" );
}
