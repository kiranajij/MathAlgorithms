#include<stdio.h>

float f(float x);	// A dummy implelemtation of the function
					//we are going to use.

int main(){

	/*
	here a is lower bound and b is the upper bound,
	n is the number of subdivisions.
	*/

	float a, b, sum, dist, trapSum;
	int n;

	//getting the users to input the values;
	printf("Please enter the lower bound, upper bound and number of subdivisions\n");
	scanf("%f %f %d", &a, &b, &n);

	//setting up the sum
	sum = f(a) + f(b);
	dist = (a + b)/ n;

	//looping
	for (int i=1; i<n; i++){
		sum += 2 * f(a + i * dist);
	}

	trapSum = sum * dist / 2;

	printf("the trapizoidal sum is given by: \t%f\n", trapSum);
	return 0;
}

//defining the function
float f(float x){
	return x*x*x;
}