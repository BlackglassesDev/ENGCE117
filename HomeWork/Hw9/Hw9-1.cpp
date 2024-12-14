#include <stdio.h>

int main() {
    int num = 100, count = 0 ;
    char data[100] ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "Input [%d] : \n", i ) ;
        scanf( "%d", &data[ i ] ) ;
        if( data[ i ] == -1 ) {
            break;
        }//end if
        count++ ;
    }//end for

    printf( "Index = " ) ;
    for( int j = 0 ; j < count ; j++ ) {
        printf( "%d ", j ) ;
    }
    printf( "\n" ) ;

    printf( "Array = " ) ;
    for( int j = 0 ; j < count ; j++ ) {
        printf( "%d ", data[ j ] ) ;
    }
    return 0 ;
}//end function