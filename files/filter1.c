#include <stdio.h>
#include <stdlib.h>
#include <stdint>

typedef uint_8 BYTE;

typedef struct RGBVALUES{
    int height, width;
    BYTE image[][];
    BYTE rgbtred, rgbtgreen, rgbtblue;
    
} RGBTRIPLE;

void filter(int height, int weight, RGBTRIPLE image[height][weight]){
    // looping over all pixels.
    for(int i=0;i<h; i++){
        for(int j=0;j<weight;j++){
            // allow only red to pass throuhg.
            image[i][j].rgbtgreen = 0x00; // set all blue pixels to 0 
            image[i][j].rgbtblue  = 0x00; // set all green pixels to 0
        }
    }
}

int main(){
    printf("");
}
