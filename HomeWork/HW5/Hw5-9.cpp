#include <stdio.h>

int main() {
    float x1, y1, x2, y2 ; 
    float mid_x, mid_y ;   
    printf( "Input A Point:\n" ) ;
    scanf( "%f %f", &x1, &y1 ) ;
    printf( "Input B Point:\n" ) ;
    scanf( "%f %f", &x2, &y2 ) ;
    mid_x = ( x1 + x2 ) / 2.0 ;
    mid_y = ( y1 + y2 ) / 2.0 ;
    printf( "Mid Point of A and B is ( %.1f, %.1f )\n", mid_x, mid_y ) ;
    return 0 ;
}//end function
