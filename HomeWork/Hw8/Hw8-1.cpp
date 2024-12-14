#include <stdio.h>

int main() {
    int value, sum = 0, num[ 50 ] ;
    float avg = 0 ;
    printf( "Enter value n: \n" ) ;
    scanf( "%d", &value ) ;
    for( int i = 0 ; i < value ; i++ ) {
        printf( "Enter number %d :\n", i + 1 ) ;
        scanf( "%d", &num[ i ] ) ;
        sum = sum + num[ i ] ;
    }
    avg = ( float ) sum / value ;
    printf( "Sum = %d\n", sum ) ;
    printf( "Avg = %.2f", avg ) ;
    return 0 ;
}