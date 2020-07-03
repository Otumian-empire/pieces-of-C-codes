#include <stdio.h>
#include "marray.h"

void print_a(int * arr, int s);

int main() {
    int s = 5;
    
    int  arri[]  = {1, 2, 3, 4, 5};
    char arrc[]  = {'1', '2', '3', '4', '5'};

    int i = array_hasi(arri, s, 1);
    int j = array_hasc(arrc, s, '1');
    
    // array_hasi
    if (i > -1) {
    	printf("%d in array\n", arri[i]);
    } else {
		printf("element not found\n");    
    }
    
    // array_hasi
    if (j > -1) {
    	printf("%c in array\n", arrc[j]);
    } else {
		printf("element not found\n");    
    }
    
    // array_sum
    printf("sum of the array, ");
    print_a(arri, s);
    printf(" is %d\n", array_sum(arri, s));
    
    return 0;
}


void print_a(int * arr, int s) {
    printf("[");
    
    for (int i = 0; i < s; i++) {
        printf("%d", arr[i]);
        
        if (i < (s - 1)) {
            printf(", ");            
        }
    }
    
    printf("]");
}

