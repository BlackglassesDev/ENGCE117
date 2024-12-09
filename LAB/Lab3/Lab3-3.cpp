#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

struct student upgrade( struct student child ) {
    double gpa ;
    if( child.sex == 'M' ) {
        child.gpa *= 1.10 ;
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if
    }//end if
    if( child.sex == 'F' ) {
        child.gpa *= 1.20 ;
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if
    }//end if
    return child ;
}