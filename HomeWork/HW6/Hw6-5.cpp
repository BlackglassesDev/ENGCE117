#include <stdio.h>

int main() {
    int num, j ;
    printf( "Enter number: " ) ;
    scanf( "%d", &num ) ;
    printf( "Series = " ) ;
    for( int i = num ; i >= 2 ; i-- ) {
        for( j = 2 ; j <= i ; j++ ) {
            if( i % j == 0 ) {
                break;
            }//end if
        }//end for
        if( i == j ) {
            printf( "%d ", i ) ;
        }//end if
    }//end for
    return 0 ;
}//end function