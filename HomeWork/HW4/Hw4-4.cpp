#include <stdio.h>

int main() {
    float h, w, area ;
    printf( "Enter H & W :\n" ) ;
    scanf( "%f %f", &h, &w ) ;
    area = 0.5 * w * h ;
    printf( "Triagle Area : %.1f", area ) ;
    return 0 ;
}//end function