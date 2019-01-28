#include <stdio.h>
#include <math.h>

// pythagorean triplet: a<b<c && a**2 + b**2 = c**2 
int main(){
	int i, j, a, b, max=1000;
	float c;
	
	for(i=0; i < max; i++){
		for(j=0; j<max; j++){
			a = pow(i, 2);
			b = pow(j, 2);
			c = sqrt(a+b);

			if(i < j && j<(int)c && c == (int)c && (int)i+j+c == max){
				printf("%d, %d, %f, sum=%f\n", i, j, c, i+j+c);
				printf("product = %d", i*j*(int)c);
				
			}
		}
	}
}
