#include "marray.h"


int array_hasi(int * arr, int s, int a) {
    int index = -1;
    
    for (int i = 0; i < s; i++) {
        if (*(arr + i) == a) {
            index = i;
            break;
        }
    }
    
    return index;
}

int array_hasc(char * arr, int s, char a) {
   int index = -1;
    
    for (int i = 0; i < s; i++) {
        if (*(arr + i) == a) {
            index = i;
            break;
        }
    }
    
    return index;
}


int array_sum(int * arr, int s) {
    int total = 0;
    
    for (int i = 0; i < s; i++) {
        total += arr[i];
    }
    
    return total;
}



