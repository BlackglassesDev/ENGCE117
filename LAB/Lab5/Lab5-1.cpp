#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **add, char n[], int a, char s, float g ) ;
void InsNode( struct studentNode *ins, char n[], int a, char s, float g ) ;
void DelNode( struct studentNode **del ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
    DelNode( &now ) ; 
    ShowAll( start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while

    printf( "\n" ) ;
}//end function

struct studentNode *AddNode( struct studentNode **add, char n[], int a, char s, float g ) {
    while( *add != NULL ) {
        add = &( *add )->next ;
    }//end while
    *add = new struct studentNode ;
    strcpy( ( *add )->name, n ) ;
    ( *add )->age = a ;
    ( *add )->sex = s ;
    ( *add )->gpa = g ;
    ( *add )->next = NULL ;
    return *add ;
}//end function

void InsNode( struct studentNode *ins, char n[], int a, char s, float g ) {
    struct studentNode *NewNode = new struct studentNode ;
    strcpy( NewNode->name, n ) ;
    NewNode->age = a ;
    NewNode->sex = s ;
    NewNode->gpa = g ;
    NewNode->next = ins->next ;
    ins->next = NewNode ;
}//end function

void DelNode( struct studentNode **del ) {
    struct studentNode *temp ;
    temp = (*del)->next ;
    ( *del )->next = temp->next ;
    delete temp ;
}//end function