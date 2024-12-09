#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = new int[ 10 ] ;
    GetMatrix( data, &m, &n ) ;
    if( m <= 0 && n <= 0 ) {
        return 0 ;
    }//end if
    else if( m <= 0 || n <= 0 ) {
        return 0 ;
    }//end else if
    printf( "Matrix (%dx%d): \n", m, n ) ;
    for( int i = 0 ; i < m ; i++ ){
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[i * n + j] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for
    return 0 ;
}//end function

void GetMatrix( int value[], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;
    if( *row <= 0 && *col <= 0 ) {
        printf( "Matrix:\n" ) ;
        printf( "(empty)" ) ;
        return ;
    }//end if
    else if( *row <= 0 || *col <= 0 ) {
        printf( "Error: Invalid matrix dimensions." ) ;
        return ;
    }//end else if
    printf( "Enter the matrix elements: " ) ;
    for ( int i = 0 ; i < ( *row ) * ( *col ) ; i++ ) {
        scanf( "%d", &value[i] ) ;
    }//end for 
}//end function GetMatrix