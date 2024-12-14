#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    float gpa ;
    struct studentNode *next ;
} ;

void saveNode( struct studentNode *child, char n[], int a, float g ) ;
void GoNext( struct studentNode **now ) ;

int main() {
    struct studentNode *start, *now ;
    start = new struct studentNode ;
    saveNode( start, "Alice", 20, 3.5 ) ;

    start->next = new struct studentNode ;
    saveNode( start->next, "Bob", 22, 3.8 ) ;

    start->next->next = new struct studentNode;
    saveNode( start->next->next, "Charlie", 21, 3.7 ) ;

    now = start ;

    // printf( "Gonext1 = %s\n", now->name ) ;
    GoNext( &now ) ;  // Move to next node and print
    // printf( "Gonext2 = %s\n", now->name ) ;
    GoNext( &now ) ;  // Move to next node and print
    // printf( "Gonext3 = %s\n", now->name ) ;
    GoNext( &now ) ;  // Move to next node and print
    // printf( "Gonext4 = %s\n", now->name ) ;
    GoNext( &now ) ;  // Move to next node and print
    // printf( "Gonext5 = %s\n", now->next ) ;

    return 0;
}//end function

void saveNode( struct studentNode *child, char n[], int a, float g ) {
    strcpy( child->name, n ) ;
    child->age = a ;
    child->gpa = g ;
    child->next = NULL ;
}//end function

void GoNext( struct studentNode **now ) {
    if ( *now != NULL ) {
        printf( "%s\n", ( *now )->name ) ;
        *now = ( *now )->next ;
    } //end if
    else {
        printf( "End of List\n" ) ;
    }//end else
}//end function