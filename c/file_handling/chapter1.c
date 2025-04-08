#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;  // Declare a file pointer

    // Open the file in write mode ("w")
    fp = fopen("sample1.txt", "w");

    // Check if the file was successfully opened
    if (fp == NULL) {
        printf("Error opening the file!\n");
        return 1;  // Exit the program with an error code if the file couldn't be opened
    }

    // Write text to the file
    fprintf(fp, "Hello C Programmers..\n");

    // Close the file after writing
    fclose(fp);

    return 0;  // Indicate successful execution
}

/*
File Modes in C:

1. "r"  - Open for reading. The file must exist.
2. "w"  - Open for writing. Creates a new file or overwrites an existing file.
3. "a"  - Open for appending. Data is written at the end of the file without modifying the existing content.
4. "r+" - Open for reading and writing. The file must exist.
5. "w+" - Open for reading and writing. Creates a new file or overwrites an existing file.
6. "a+" - Open for reading and appending. Data is written at the end of the file, but you can also read from it.
7. "rb" - Open a file for reading in binary mode.
8. "wb" - Open a file for writing in binary mode.
9. "ab" - Open a file for appending in binary mode.
10. "r+b" - Open a file for reading and writing in binary mode.
11. "w+b" - Open a file for reading and writing in binary mode, creating a new file or overwriting an existing file.
12. "a+b" - Open a file for reading and appending in binary mode.

When using file modes:
- `"r"` mode is used when you need to read from an existing file.
- `"w"` mode is used when you want to create a new file or overwrite an existing one for writing.
- `"a"` mode is used to append data to an existing file, preserving its contents.

It's important to check whether the file was successfully opened by verifying if the `FILE*` returned by `fopen()` is `NULL`. If `fopen()` fails to open a file, it will return `NULL`.
*/

