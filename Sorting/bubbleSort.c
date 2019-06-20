/*
- display function
- swap function
- bubbleSort
 */

#include <stdio.h>

void display(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}    
    


void swap(int *first, int *second){

    int temp = *first;
    *first = *second;
    *second = temp;
}


void bubbleSort(int arr[], int size){

    for (int i=0; i<(size-1); i++){
        for (int j=0; j<(size-1); j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}



int main(int argc, const char * argv[]){
    int array[] = {9,8,7,5,6,4,3,6,1};
    int size = 9;
    printf("Original Array : \n");
    display(array, size);

    bubbleSort(array, size);

    printf("Sorted Array is : \n");
    display(array, size);

    return 0;
}

