# include <stdio.h>
main(){
    int sum = 0;
	int a = 1;
	int b = 2;
	while (a < 4000000){
		if (a%2==0){
			sum += a;
		}
		int temp = a;
		a = b;
		b += temp;
	}
	printf("%d", sum);
}

