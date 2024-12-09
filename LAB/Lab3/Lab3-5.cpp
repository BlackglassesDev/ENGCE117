#include <stdio.h>

struct student {
    char name[ 50 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student (*GetStudent( int *room ) )[ 10 ] ;

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    for( int i = 0 ; i < group ; i++ ) {
        printf( "Room %d: 10 students entered.\n", i + 1) ;
        // for( int j = 0 ; j < 10 ; j++ ) {
        //     printf( "Name : %s\n", children[i][j].name);
        //     printf( "Age : %d\n", children[i][j].age);
        // }
    }
    return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ] {
    static student cld[ 20 ][ 10 ] ;
    printf( "Enter Room: " ) ;
    scanf( "%d", room ) ;
    for( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d:\n", i + 1 ) ;
        for( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: ", j + 1 ) ;
            scanf( "%s %d", &cld[ i ][ j ].name , &cld[ i ][ j ].age ) ;
        }
    }
    return cld ;
}