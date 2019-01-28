#include <stdio.h>

int divis(int n, int limit){
    /* only need to check from half the size of the number of divisors
    because they are mirrored.
    e.g.  if value is divisble by 8, no need to check if it's divisible by 4 or 2. */
    for(int i = limit/2; i <= limit; i++){
        if(n % i != 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int done = 0;
    int start = 20;
    int current = start;
    do{
        /*printf("%d\n", current);*/
        if (divis(current, start)==1){
            printf("%d\n", current);
            break;
        }
        current++;         
        
    }while(done==0);
}
