#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    printf( "befor in main = %.2f\n", aboy.gpa ) ;
    aboy = upgrade() ;
    printf( "after in main = %.2f\n", aboy.gpa ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

struct student upgrade( ) {
    struct student pp ;
    pp.sex = 'M' ;
    pp.gpa = 2.00 ;
    printf( " in function = %.2f\n", pp.gpa ) ;
    if( pp.sex == 'M' ) {
        pp.gpa *= 1.10 ; //+10%
        if( pp.gpa > 4.00 ) {
            pp.gpa = 4.00 ;
        }//end if
    }//end if
    else if( pp.sex == 'F' ) {
        pp.gpa *= 1.20 ; //+20%
        if( pp.gpa > 4.00 ) {
            pp.gpa = 4.00 ;
        }//end if
    }//end else if
    return pp ;
}//end function