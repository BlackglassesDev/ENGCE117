#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number: " ) ;
    scanf( "%d", &num ) ;
    for( int i = num ; i >= 2 ; i-- ) {
        if( i % 2 == 0 && i % i == 0 ) {
            printf( "Series = %d", i ) ;
        }
    }
}