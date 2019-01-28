#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_pal(int n){    
    int length =  (n < 10 ) ? 1 : (int)log10(n)+1;
    /*printf("%d\n", length);*/
    
    char buffer[length];
    /* write length number of values from n as strings to buffer */
    snprintf(buffer, length+1, "%d", n);
    
    for(int i = 0; i < (int)floor(length/2)+1; i++){
        /*printf("%c", buffer[i]);    */
        /*printf("%c, %c\n", buffer[i], buffer[length-i-1]);*/
        if(buffer[i] != buffer[length-i-1]){
            return 0;
        }
    }
    return 1;
}


int main(){
    printf("%d", is_pal(1011));
    
    int current_max = 0;
    for(int i = 999; i > 99; i--){
        for(int j = 999; j > 99; j--){
            int product = i*j;
            if (product > current_max && is_pal(product)==1){
                current_max = product;
            }
        }
    }
    printf("largest product = %d", current_max);
    
    return EXIT_SUCCESS;
}
