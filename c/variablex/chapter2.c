#include <stdio.h>

// The `test()` function demonstrates the use of a static variable
// Static variables persist their values across function calls, 
// unlike regular local variables which are reinitialized each time the function is called.
void test() {
    static int counter = 0;  // Static variable initialization. It will retain its value between function calls.
    
    // Print the current value of `counter` each time `test()` is called.
    printf("Counter in test(): %d\n", counter);
    
    counter++;  // Increment the static variable `counter` by 1.
    // The value of `counter` is retained between calls, so it is not reinitialized to 0 each time.
}

// `main()` is the entry point of the program.
int main() {
    // Call `test()` three times to demonstrate how the static variable `counter` retains its value.
    
    test();  // First call to `test()`: counter is 0 initially, and after incrementing, it becomes 1.
    test();  // Second call to `test()`: counter was 1 previously, and after incrementing, it becomes 2.
    test();  // Third call to `test()`: counter was 2 previously, and after incrementing, it becomes 3.
    
    return 0;  // End of the program. No return value is required, so return 0 to indicate successful execution.
}

/*
    Key Concepts:
    1. **Static Variable**:
       - `static int counter = 0;`: The static keyword ensures that the variable `counter` is initialized only once.
       - The value of `counter` persists across multiple calls to the `test()` function. It is not reinitialized each time the function is called.
       - The value of `counter` is maintained throughout the entire lifetime of the program, unlike normal local variables.

    2. **Function Call Behavior**:
       - In the `main()` function, `test()` is called three times. Each time, `counter` retains its value from the previous call and increments by 1.
       - The output demonstrates how the static variable's value increases across calls.

    3. **Output**:
       - After the first call to `test()`, `counter` becomes 1.
       - After the second call, `counter` becomes 2.
       - After the third call, `counter` becomes 3.
*/
