#include <stdio.h>

int main() {
    int num = 0, n = 1, m = 1, sum = 0, total, allsum ;
    printf( "Enter Number: " ) ;
    scanf( "%d", &num ) ;
    printf( "Series = %d + %d", n, m ) ;
    sum = n + m ;
    allsum = sum ;
    
    for( int i = 2 ; i < num ; i++ ) {
        printf( " + %d", sum ) ;
        allsum += sum ;
        total = sum ;
        sum += m ;
        m = total ;
    }//end for
    printf( "\nSum = %d", allsum ) ;
    return 0 ;
}//end function