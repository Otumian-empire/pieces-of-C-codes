#include "operatorprogram.h"

int eq(int a, int b) {
    return a == b;
}

int gt(int a, int b) {
    return a < b;
}

int lt(int a, int b) {
    return a < b;
}

int in(int a, int b[], int n) {
    int r = 0;
    
    for (int i = 0; i < n; i++) {
        if (eq(a, b[i])) {
            r = 1;
            break;
        }
    }
        
    return r;
}

int neq(int a, int b) {
    return a != b;
}

int nlt(int a, int b) {
    return gt(a,b) || eq(a, b);
}

int ngt(int a, int b) {
    return lt(a,b) || eq(a, b);
}


