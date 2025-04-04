#include <stdio.h>

// `myFunction()` demonstrates the use of the `register` storage class.
// The `register` keyword is a storage class specifier that suggests storing a variable 
// in a CPU register rather than RAM for faster access. However, the compiler is free 
// to ignore this suggestion and choose where to store the variable.
void myFunction() {
    register int i;  // Declare a register variable `i` to potentially store it in a CPU register for faster access.

    // The `for` loop iterates from 0 to 4, printing the value of `i` in each iteration.
    for (i = 0; i < 5; i++) {
        // Print the current value of the register variable `i`.
        printf("i = %d\n", i);
    }
}

// The `main()` function is the entry point of the program.
// It calls `myFunction()` to demonstrate how the `register` variable `i` behaves.
int main() {
    myFunction();  // Call `myFunction()` to execute the loop and print values of `i` from 0 to 4.
    return 0;  // Return 0 to indicate successful execution of the program.
}

/*
    Key Concepts:

    1. **register Storage Class**:
       - The `register` storage class is used to suggest that a variable should be stored in a CPU register, 
         instead of memory (RAM), for faster access. However, this is only a suggestion to the compiler, and 
         the compiler may choose not to follow this suggestion based on available CPU registers and other optimizations.
       - `register` variables are typically used in performance-critical loops or calculations, such as the loop counter `i` here.
       - **Limitation**: You cannot take the address of a `register` variable (i.e., using `&`), because CPU registers do not have memory addresses.

    2. **Function Behavior**:
       - `myFunction()` contains a simple `for` loop where the register variable `i` is incremented from 0 to 4.
       - After each increment, the current value of `i` is printed. The loop runs five times, printing the values from 0 to 4.

    3. **Program Flow**:
       - In the `main()` function, `myFunction()` is called to execute the loop and print the values of `i`.
       - After the loop finishes, the program ends with `return 0;` indicating successful execution.

    4. **Example Output**:
       ```
       i = 0
       i = 1
       i = 2
       i = 3
       i = 4
       ```

    5. **Note on Optimization**:
       - Modern compilers are typically good at optimizing variables for performance, and the `register` keyword is mostly redundant in modern programming.
       - The `register` keyword can still be useful as a hint in some cases, but compilers now generally make their own decisions about variable storage optimization.

*/

