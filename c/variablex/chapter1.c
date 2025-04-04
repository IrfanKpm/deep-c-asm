#include <stdio.h>

// Global variable declaration and initialization.
// This variable can be accessed and modified by all functions in the program.
int global_x = 12;

/* 
    The `test` function demonstrates the modification of a global variable.
    - The function accesses the global variable `global_x`, prints its current value, 
    - and then increments it.
*/
void test() {
    printf("call from test() : %d \n", global_x);  // Print the current value of the global variable
    global_x++;  // Increment the global variable (global_x becomes 13 after this function call)
}

/* 
    The `test2` function demonstrates variable shadowing.
    - A local variable named `global_x` is declared within the function, which 
    - "shadows" the global `global_x` inside this function's scope. The global 
    - `global_x` is not affected by this local declaration.
    - The local `global_x` is initialized to 26 and its value is printed.
*/
void test2() {
    int global_x = 26;  // Local variable shadowing the global variable
    printf("call from test2() : %d \n", global_x);  // Print the local variable value (26)
}

/* 
    The `main` function serves as the entry point for the program.
    - It first prints the value of the global variable `global_x`.
    - Then, it calls the `test` function, which modifies the global variable.
    - After that, it calls the `test2` function, which uses a local variable with the same name.
    - Finally, it prints the global variable value again, showing the changes made by `test`.
*/
int main() {
    printf("call from main() : %d \n", global_x);  // Initial global variable value: 12
    test();  // Calls test() and increments the global_x (global_x becomes 13)
    test2();  // Calls test2() where a local variable shadows global_x, but doesn't modify it
    printf("call from main() : %d \n", global_x);  // After test2(), global_x remains 13
    return 0;
}

/*
    Key Takeaways:
    - `global_x` is a global variable, meaning it is accessible and modifiable from any function.
    - Inside `test()`, the global `global_x` is modified.
    - Inside `test2()`, a new local variable `global_x` is created, which shadows the global variable within the scope of `test2()`. This does not affect the global variable.
    - The value of the global variable `global_x` is printed at different stages in `main()` to demonstrate how it is modified and accessed.
*/
