#include "build-tools.h"
#include <stdio.h>

int rand_seed=10;

// Produce a random number between 0 and 32767
int rand(){
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
};

// Produce r x c sized matrix via prompt. Caller must perform malloc
void build_matrix(int r, int c, int mat[r][c]){
    for (int i=0; i<r; i++){
        scanf("Enter a value for element: %d", &x);
    };
};

int main(){

    return 0;
};