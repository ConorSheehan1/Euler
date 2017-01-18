# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main(){
	int start = 100;
	int sum = (start+1) * (start/2);
	int squared_post = sum * sum;
	int squared_pre = 0;
	for(int i = 1; i <= start; i++){
		/* square i and add it to variable */
		squared_pre += i*i;
	}
	
	
	
	printf("sum = %d, post squared = %d, pre squared = %d, difference = %d", sum, squared_post, squared_pre, abs(squared_pre-squared_post));
}