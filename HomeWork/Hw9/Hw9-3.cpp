#include <stdio.h>

int main() {
    int num = 100, arr1[ 100 ], arr2[ 100 ], count = 0 ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "Input Value to Array1 [%d] : ", i ) ;
        scanf( "%d", &arr1[ i ] ) ;
        if( arr1[ i ] == -1 ) {
            break;
        }//end if
        count++ ;
    }//end for
    printf( "\nArray1 = " ) ;
    for( int j = 0 ; j < count ; j++ ) {
        printf( "%d ", arr1[ j ] ) ;
    }//end for

    printf( "\nArray2 = " ) ;
    for( int k = 0 ; k < count ; k++ ) {
        printf( "%d ", arr2[ k * 0 ] ) ;
    }//end for

    printf( "\n--| Copy Data from Array1 to Array2" ) ;
     printf( "\nArray2 = " ) ;
    for( int k = 0 ; k < count ; k++ ) {
        arr2[ k ] = arr1[ k ] ;
        printf( "%d ", arr2[ k ] ) ;
    }//end for

    return 0 ;
}//end function