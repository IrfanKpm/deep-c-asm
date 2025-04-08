#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory for 3 integers (equivalent to an array of 3 integers)
    // We use sizeof(int) to calculate the memory required for each integer and then multiply by 3 for 3 integers.
    int *ptr = (int*)malloc(sizeof(int) * 3);  // Dynamically allocate memory for 3 integers

    // Checking if memory allocation was successful
    if (ptr == NULL) {  // If malloc fails, ptr will be NULL
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with error code 1 if allocation fails
    }

    // Printing the memory addresses of the 3 integers allocated by malloc
    // We use the address-of operator (&) to print the memory addresses of the elements
    printf("Memory address of ptr[0]: %p\n", (void*)&ptr[0]);  // Address of the first element (ptr[0])
    printf("Memory address of ptr[1]: %p\n", (void*)&ptr[1]);  // Address of the second element (ptr[1])
    printf("Memory address of ptr[2]: %p\n", (void*)&ptr[2]);  // Address of the third element (ptr[2])

    // Assigning values to the dynamically allocated memory
    ptr[0] = 24;  // Store 24 in the first allocated integer
    ptr[1] = 37;  // Store 37 in the second allocated integer
    ptr[2] = 48;  // Store 48 in the third allocated integer

    // Printing the values stored in the allocated memory
    printf("\nValues stored in the allocated memory:\n");
    printf("ptr[0] = %d\n", ptr[0]);  // Print the value stored at ptr[0]
    printf("ptr[1] = %d\n", ptr[1]);  // Print the value stored at ptr[1]
    printf("ptr[2] = %d\n", ptr[2]);  // Print the value stored at ptr[2]

    // Demonstrating pointer arithmetic: 
    // Accessing elements using pointer arithmetic (equivalent to ptr[index])
    printf("\nUsing pointer arithmetic (ptr + index) to access values:\n");
    printf("*(ptr + 0) = %d\n", *(ptr + 0));  // *(ptr + 0) Equivalent to ptr[0]
    printf("*(ptr + 1) = %d\n", *(ptr + 1));  // *(ptr + 1) Equivalent to ptr[1]
    printf("*(ptr + 2) = %d\n", *(ptr + 2));  // *(ptr + 2) Equivalent to ptr[2]

    // Freeing the allocated memory to avoid memory leaks
    free(ptr);  // Deallocate the memory block that was previously allocated by malloc
    printf("\nMemory has been freed.\n");

    return 0;  // Return 0 to indicate successful program execution
}
