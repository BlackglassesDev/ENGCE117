#include <stdio.h>

int main() {
    int num, j ;
    printf( "Enter number: " ) ;
    scanf( "%d", &num ) ;
    printf( "Series = " ) ;
    while( num >= 2 ) {
        j = 2 ;
        while(  j <= num ) {
            if( num % j == 0 ) {
                break;
            }//end if
            j++ ;
        }//end for
        if( num == j ) {
            printf( "%d ", num ) ;
        }//end if
        num-- ;
    }//end for
    return 0 ;
}//end function