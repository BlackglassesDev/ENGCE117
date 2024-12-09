#include <stdio.h>

int main() {
    int num[ 10 ] ;
    int max_index = 0 ;
    printf( "Input 3 Number: " ) ;
    for( int i = 0 ; i < 3 ; i++ ) {
        scanf( "%d", &num[ i ] ) ;
    }//end for
    for( int i = 1 ; i < 3 ; i++ ) {
        if( num[ i ] > num[ max_index ]) {
            max_index = i; 
        }
    }
    for( int i = 0 ; i < 3 ; i++ ) {
        printf( "%d%s Number = %d\n", i + 1, ( i == 0 ? "st" : ( i == 1 ? "nd" : "rd" ) ), num[ i ] ) ;
    }//end for
    printf( "The %d%s Number is the greatest among three\n", max_index + 1, ( max_index == 0 ? "st" : ( max_index == 1 ? "nd" : "rd" ) ) ) ;
    return 0 ;
}//end function