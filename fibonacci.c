//
// Created by William Gao <wlgao@ucsc.edu> on 9/12/20.
//

#include "stdio.h"
#include "fibonacci.h"

void run_fibonacci() {

    int n = 22;
    printf("F(%d) = %d", n, F(n));
}

int F(int n) {
    return fibonacci(n);
}

int fibonacci(int n) {

    if(n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
