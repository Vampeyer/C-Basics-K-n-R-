#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
#define POWERLEVEL "More Power"
#define BODY "More Body"
#define CONTROL "I want control"

int main()
{

int fahr;

for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    	printf("%10s\t%10s\t%10s\n" ,POWERLEVEL , BODY, CONTROL );
	printf("%3d %6.1f\n" , fahr, (5.0 / 9.0)*(fahr - 32));


}
