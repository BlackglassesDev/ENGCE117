#include <stdio.h>

int main() {
    int start, end, sum, i ;
    printf( "Start : " ) ;
    scanf( "%d", &start ) ;
    printf( "End : " ) ;
    scanf( "%d", &end ) ;
    printf( "\n" ) ;
    printf( "Multi Table\n" ) ;
    while( start <= end ) {
        i = 1 ;
        while( i < 10 ) {
            sum = start * i ;
            printf( "%d x %d = %d\n", start, i, sum ) ;
            i++ ;
        }//end for
        start++ ;
        printf( "\n" ) ;
    }
    return 0 ;
}//end function