#include<stdio.h>
#include<stdlib.h>

int main(){
    // Correct usage of calloc: number of elements and size of each element
    int *arr1 = (int*)calloc(4, sizeof(int));  // Allocate memory for 4 integers, initialized to 0
    int *arr2 = (int*)malloc(4 * sizeof(int));  // Allocate memory for 4 integers, uninitialized

    // Check if memory allocation was successful
    if(arr1 == NULL || arr2 == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Display the values in arr1 (should be initialized to 0 by calloc)
    printf("arr1 (allocated with calloc):\n");
    for(int i=0; i<4; i++){
        printf("arr1[%d] = %d\n", i, arr1[i]); 
    }

    // Display the values in arr2 (uninitialized memory, might contain garbage values)
    printf("\narr2 (allocated with malloc):\n");
    for(int i=0; i<4; i++){
        printf("arr2[%d] = %d\n", i, arr2[i]); 
    }

    // Now, let's use realloc to resize arr2 to hold 6 elements
    arr2 = (int*)realloc(arr2, 6 * sizeof(int));  // Resize to hold 6 integers
    // syntax : void* realloc(void* ptr, size_t new_size);

    // Check if realloc was successful
    if (arr2 == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr1);  // Don't forget to free arr1
        return 1;
    }

    // Display the values in arr2 after realloc (should show the original values and new uninitialized ones)
    printf("\narr2 after realloc (resized to hold 6 elements):\n");
    for(int i = 0; i < 6; i++){
        printf("arr2[%d] = %d\n", i, arr2[i]); 
    }

    // Free the allocated memory
    free(arr1);
    free(arr2);

    return 0;
}



