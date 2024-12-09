#include <stdio.h>

int main() {
    int start, end, sum ;
    printf( "Start : " ) ;
    scanf( "%d", &start ) ;
    printf( "End : " ) ;
    scanf( "%d", &end ) ;
    printf( "\n" ) ;
    printf( "Multi Table\n" ) ;
    for( ; start <= end ; start++ ) {
        for( int i = 1 ; i < 10 ; i++ ) {
            sum = start * i ;
            printf( "%d x %d = %d\n", start, i, sum ) ;
        }//end for
        printf( "\n" ) ;
    }
    return 0 ;
}//end function