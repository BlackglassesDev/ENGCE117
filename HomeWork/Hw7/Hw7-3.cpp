#include <stdio.h>

int main() {
    int num, sum = 0, i = 0 ; ;
    int n = 9 ;
    printf( "Enter number: " ) ;
    scanf( "%d", &num ) ;
    printf( "Series = " ) ;
    while( i < num ) {
        printf( "%d", n ) ;
        if( i < num - 1 ) {
            printf( " + " ) ;
        }//end if
        sum += n ;
        n = n * 10 + 9 ;
        i++ ;
    }//end for
    printf( "\n" ) ;
    printf( "Sum = %d", sum ) ;
    return 0 ;
}//end function