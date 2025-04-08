#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *file;
    char line[256];  // Buffer to store each line

    // Open the file in read mode ("r")
    file = fopen("sample2.txt", "r");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1;  // Exit the program if the file couldn't be opened
    }

    // Read the file line by line
    while (fgets(line, sizeof(line), file) != NULL) {
        // Print the current line
        printf("Line: %s", line);
    }

    // Close the file after reading
    fclose(file);
    printf("\n");
    return 0;
}

/*
 * Logic Explanation:
 *
 * 1. **File Pointer (`file`)**:
 *    - The variable `file` is a pointer to the `FILE` structure. It represents an open file and is used to perform file operations (e.g., reading, writing).
 *
 * 2. **Opening the File (`fopen`)**:
 *    - The `fopen("sample2.txt", "r")` function opens the file `sample2.txt` in read mode (`"r"`). If the file doesn't exist or can't be opened, `fopen()` will return `NULL`.
 *    - The program checks if the file was opened successfully with the condition `if (file == NULL)`. If the file couldn't be opened, an error message is printed, and the program returns `1` to indicate failure.
 *
 * 3. **Buffer (`line`)**:
 *    - The `char line[256]` array is used to store each line of text that will be read from the file. The size of the array (256) determines the maximum number of characters `fgets()` can read in one call.
 *
 * 4. **The `while` Loop and `fgets`**:
 *    - The `fgets(line, sizeof(line), file)` function reads one line from the file into the `line` buffer.
 *    - `fgets()` will stop reading either when it encounters a newline (`\n`), when it reaches the maximum number of characters (which is `sizeof(line) - 1`), or when it reaches the end of the file (EOF).
 *    - The condition `while (fgets(line, sizeof(line), file) != NULL)` means the loop will continue as long as `fgets()` successfully reads a line from the file (i.e., it doesn't return `NULL`).
 *    - If `fgets()` returns `NULL`, it indicates that either the end of the file (EOF) has been reached or an error occurred during reading.
 *    - Inside the loop, `printf("Line: %s", line)` prints each line to the console, including the newline character (`\n`), if present in the file.
 *
 * 5. **File Closure (`fclose`)**:
 *    - Once all lines have been read, the file is closed using `fclose(file)` to release the resources associated with the file.
 *    - It's good practice to always close files when you're done working with them to ensure system resources are freed properly.
 *
 * 6. **Stopping Condition**:
 *    - The `while` loop stops when `fgets()` returns `NULL`. This happens when:
 *      1. The end of the file is reached.
 *      2. An error occurs while reading the file.
 *
 * 7. **Error Handling**:
 *    - If `fopen()` fails to open the file, the program prints an error message and exits with a failure status (`return 1`).
 *    - If `fgets()` fails while reading, it returns `NULL` and the loop terminates. Typically, you would want to handle errors (e.g., file corruption or permission issues), but for this simple case, the program assumes the file is well-formed.
 *
 * Summary:
 * - This program reads a file line by line using `fgets()`, prints each line to the console, and then closes the file. The `while` loop continues reading lines until `fgets()` returns `NULL`, which occurs when the end of the file is reached or an error occurs.
 */
