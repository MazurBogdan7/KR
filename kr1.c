#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int fib, fib1, fib2, i, fac, step, inpu, resER, error;

	float sum, eps, num, mod ;

	error = 0 ;fib = 1; fib1 = 1; fib2 = 2; i = 2; sum = 0; num = 0; step = 6; fac = 1; 

	inpu=scanf ("%f",&eps);
	if(inpu < 0){
		perror("Error\n");
		error = 1;

	}
	if((eps < .0f) || (eps == .0f)){
		printf("Error\n");
	}

	else {

		do {
			fib = fib+fib1;
			fib1 = fib-fib1;
			printf("%d\n",fib);
			fac = fac*i;
			step = step*6;
			
			num = step*fac;
			mod = fib/num;
			i++;
			sum = sum+mod;
			} 
		while (fabsf(mod) > eps);

	resER=printf("%lf\n", (double)sum);
	if (resER < 0){ 
	
		perror("Error\n");
		error = 1;

				}
		}
	return error;
}
