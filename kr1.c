#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int fib, fib1, i, fac, step, inpu, s, resER, error;

    float sum, eps, num2, num1 ,mod ,cor;

	error = 0 ;fib = 1; fib1 = 0; i = 2/*number in factorial*/; sum = 0.0; num1 = 0.0; num2 = 0.0; step = 6; fac = 1; cor = 0.0; s = 2;

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
			printf("%d\n",fib);//fib chek
			fac = fac*i;
			step = step*6;
			cor = sqrt(s);
			num1 = fib*cor;
			num2 = step*fac;
			mod = num1/num2;
			i++;
			s += 1;
			sum = sum+mod;
			} 
		while (fabsf(mod) > eps);

	resER=printf("%f\n", sum);
	if (resER < 0.0){ 
	
		perror("Error\n");
		error = 1;

				}
		}
	return error;
}
