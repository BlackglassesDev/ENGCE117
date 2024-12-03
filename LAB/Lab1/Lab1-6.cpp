#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    printf( "-----------------\n" ) ;
    printf( "Enter number of rows and columns: %d %d \n", m, n ) ;
    printf( "Enter matrix elements:\n" ) ;
    for( int i = 0 ; i < m ; i++ ){
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[i * n + j] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for
    return 0 ;
}//end function

int *GetMatrix( int *row, int *col ) {
    printf( "Enter number row and col: " ) ;
    scanf( "%d %d", row , col ) ;
    int *dt = new int[10] ;
    printf( "Enter Matrix of eletment:\n" ) ;
    for( int i = 0 ; i < *row * *col ; i++ ){
        scanf( "%d", &dt[i] ) ;
    } //end for
    return dt ; 
}//end function GetMatrix