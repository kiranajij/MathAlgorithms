#include <stdio.h>

int main(){
	double sum =0;
	for(int i=1; i<10000; i++){
		sum += 1.0/(i*i);
	}
	printf("Euler sum is:\t%lf\n", sum);
	return 0;
}