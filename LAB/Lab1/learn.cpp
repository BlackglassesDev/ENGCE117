#include <stdio.h>
#include <string.h>

void GetSet(int data[], int *num);

int main(){
    int *data;
    int num;
    data = new int[10];
    GetSet(data, &num);
    printf("Number of elements: %d\n", num);

    for (int i = 0; i < num; i++){
        printf("%d ", data[i]);
    }// end for
    printf("\n");

    return 0;
} // end main

void GetSet(int data[], int *num){
    printf("Enter the number of elements: ");
    scanf("%d", num);

    printf("Enter the elements: ");
    for (int i = 0; i < *num; i++){
        scanf("%d", &data[i]);
    }
} // end GetSet