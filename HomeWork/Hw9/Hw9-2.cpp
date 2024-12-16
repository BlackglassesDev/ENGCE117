#include <stdio.h>

int main() {
    int num = 100, count = 0 ;
    int data[100], temp ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "Input [%d] : \n", i ) ;
        scanf( "%d", &data[ i ] ) ;
        if( data[ i ] == -1 ) {
            break;
        }//end if
        count++ ;
    }//end for

    for ( int i = 0; i < count - 1; i++ ) {
        for ( int j = 0; j < count - i - 1; j++ ) {
            if ( data[ j ] > data[ j + 1 ] ) {
                temp = data[ j ] ;
                data[ j ] = data[ j + 1 ] ;
                data[ j + 1 ] = temp ;
            }//end if
        }//end for
    }//end for
    
    printf( "Array = " ) ;
    for( int j = 0 ; j < count ; j++ ) {
        printf( "%d ", data[ j ] ) ;
    }//end for

    for ( int i = 0; i < count - 1; i++ ) {
        for ( int j = 0 ; j < count - i - 1 ; j++ ) {
            if ( data[ j ] < data[ j + 1 ] ) {
                temp = data[ j ] ;
                data[ j ] = data[ j + 1 ] ;
                data[ j + 1 ] = temp ;
            }//end if
        }//end for
    }//end for

    printf( "\n" ) ;
    printf( "Array = " ) ;
    for( int j = 0 ; j < count ; j++ ) {
        printf( "%d ", data[ j ] ) ;
    }//end for
    return 0 ;
}//end function