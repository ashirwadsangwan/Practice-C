#include <stdio.h>

void display(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}    


void insertionSort(int arr[], int size){
    

    for (int i = 0; i<size; i++){
        
        int target = arr[i];
        int hole = i;

        while (hole>0 && arr[hole-1]>target){
            arr[hole] = arr[hole-1];
            hole = hole - 1;

        arr[hole] = target;
        }   
    }

}


int main(int argc, const char * argv[]){
    int array[] = {10,8,98,5,6,44,3,6,1};
    int size = 9;
    printf("Original Array : \n");
    display(array, size);

    insertionSort(array, size);

    printf("Sorted Array is : \n");
    display(array, size);

    return 0;
}


