# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main(){
	/* sum of natural numbers is n(n+1)/2
		sum of squares is n(n+1)(2n+1)/6
	*/
	
	int start = 100;
	/*int sum = (start+1) * (start/2);*/
	int sum = (start*(start+1))/2;
	int squared_post = sum * sum;
	int squared_pre = (start*(start+1)*((2*start)+1))/6;
	
	printf("sum = %d, post squared = %d, pre squared = %d, difference = %d", sum, squared_post, squared_pre, abs(squared_pre-squared_post));
}
