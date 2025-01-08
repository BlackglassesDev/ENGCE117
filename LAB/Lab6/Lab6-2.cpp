#include <stdio.h>
#include <string.h>

struct TaskNode {
    char taskName[50];
    char startDate[15];
    char endDate[15];
    char status[20];
    struct TaskNode *next;
    struct TaskNode *back;
};

void ShowAllTasks(struct TaskNode *walk);
struct TaskNode* AddTask(struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status);
void InsertTask(struct TaskNode *now, char *taskName, char *startDate, char *endDate, char *status);
void DelTask(struct TaskNode *now);
void SwapTasks(struct TaskNode *task1, struct TaskNode *task2);

int main() {
    struct TaskNode *start, *now;
    start = NULL;

    now = AddTask(&start, "Set up project", "2024-11-01", "2024-11-10", "Not Started");
    ShowAllTasks(start);
    now = AddTask(&start, "Write code", "2024-11-11", "2024-11-20", "Not Started");
    ShowAllTasks(start);
    InsertTask(now, "Research", "2024-11-05", "2024-11-10", "Not Started");
    ShowAllTasks(start);
    
    SwapTasks(now, now->next);  // Swap Write code and Research tasks
    ShowAllTasks(start);
    
    DelTask(now);  // Delete "Research" task
    ShowAllTasks(start);
    // printf( "\n ............... %s\n",now ) ; ///////////////////////////////////////////////////////

    return 0;
}

void ShowAllTasks(struct TaskNode *walk) {
    while (walk != NULL) {
        printf("%s -> ", walk->taskName);
        walk = walk->next;
    }
    printf("End\n");
}

struct TaskNode* AddTask(struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status) {
    struct TaskNode *temp = NULL ;
    while( *start != NULL ) {
        temp = *start ;
        start = &( *start )->next ;
    }//end while
    *start = new struct TaskNode ;
    strcpy( ( *start )->taskName , taskName ) ;
    strcpy( ( *start )->startDate , startDate ) ;
    strcpy( ( *start )->endDate , endDate ) ;
    strcpy( ( *start )->status , status ) ;
    ( *start )->next = NULL ;
    ( *start )->back = temp ;
    return *start ;
}//end function

void InsertTask(struct TaskNode *now, char *taskName, char *startDate, char *endDate, char *status) {
    struct TaskNode *NewNode = new struct TaskNode ;
    strcpy( ( NewNode )->taskName , taskName ) ;
    strcpy( ( NewNode )->startDate , startDate ) ;
    strcpy( ( NewNode )->endDate , endDate ) ;
    strcpy( ( NewNode )->status , status ) ;
    ( NewNode )->next = NULL ;
    ( NewNode )->back = now->back ;

    now->back->next = NewNode ;
    now->back->next->next = now ;
    now->back = NewNode->back->next ; 
}//end function

void SwapTasks(struct TaskNode *task1, struct TaskNode *task2) {
    task2 = task1->back->back->next ;
    task2->next = NULL ;
    task1->back->back->next = task1 ;
    task1->next = task2 ;
    task1->back = task1->back->back ;
    task2->back = task1->back->next ;
}//end function

void DelTask(struct TaskNode *now) {
    struct TaskNode *temp ;
    if( now->next == NULL ) {
        now->back->next = NULL ;
        temp = now->back->back->next ;
    }//end if
    else { 
        temp = now->next ;
        now->back->next = temp ;
        temp->back = now->back ;
    }//end else
    *now = *temp ;
}//end function