#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int is_pal(n){
	
}*/


int main(){
	int n = 100;
	
	int length =  (n < 10 ) ? 1 : (int)log10(n)+1;
	printf("%d\n", length);
	
	char buffer[length];
	/* write length number of values from n as strings to buffer */
	snprintf(buffer, length+1, "%d", n);
	
	for(int i = 0; i < length+1; i++){
		printf("%c", buffer[i]);	
	}
	return EXIT_SUCCESS;
}