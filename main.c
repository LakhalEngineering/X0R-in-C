#include <stdio.h>
#include <string.h>


int main(){

    int x = 888;
    int y = -254;

    x ^= y;
    y ^= x;
    x ^= y;

    printf("x : %8x\ny: %8x\n\n", x,y);
}