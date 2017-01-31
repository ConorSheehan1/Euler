# include <stdio.h>/* find the 10001st prime*/

int main(){
	int max = 10001;	int number_of_primes = 1;	int arr[max] = {0};
	int start = 2;	arr[0] = start;	while (number_of_primes < max){		for(int j = 0; j < max; j++){			/* reached end of array */
			if(j == number_of_primes-1){
				
				/* numebr is not divisible by any previous primes, so is prime itself.				add to arr, increment number of primes*/
				if(start % arr[j] != 0){
					arr[j+1] = start;
					number_of_primes++;
				}
				break;
			}			if(start % arr[j] == 0){				/* number is not prime */				break;			}								}		start++;	}	/* show all primes
	for(int i=0; i < max; i++){
		printf("%d\n", arr[i]);
	}*/	/*show n-th prime*/	printf("answer = %d", arr[max-1]);
	
}