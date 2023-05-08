C - File I/O :file_folder:

This repository contains C programs for performing file I/O operations, such as reading from a text file, creating a file, appending text to a file, and copying the contents of one file to another. Additionally, there is a program to display the information contained in the ELF header of an ELF file.
Files and Prototypes
File	Prototype
0-read_textfile.c	ssize_t read_textfile(const char *filename, size_t letters);
1-create_file.c	int create_file(const char *filename, char *text_content);
2-append_text_to_file.c	int append_text_to_file(const char *filename, char *text_content);
3-cp.c	N/A
100-elf_header.c	N/A
Tasks :page_with_curl:

    0. Tread lightly, she is near
        0-read_textfile.c: C function that reads a text file and prints it to the POSIX standard output.
        The parameter letters is the number of letters the function should read and print.
        If the file is NULL or cannot be opened or read - returns 0.
        If the write call fails or does not write the expected number of bytes - returns 0.
        Otherwise - returns the actual number of bytes the function can read and print.

    1. Under the snow
        1-create_file.c: C function that creates a file.
        The parameter filename is the name of the file to create.
        The parameter text_content is a null-terminated string to write to the file.
        If text_content is NULL, the function creates an empty file.
        The created file has the permissions rw-------.
        If the file already exists, the existing permissions are not changed.
        Existing files are truncated.
        If filename is NULL or the function fails - returns -1.
        Otherwise - returns 1 on success.

    2. Speak gently, she can hear
        2-append_text_to_file.c: C function that appends text at the end of a file.
        The parameter filename is the name of the file.
        The parameter text_content is a null-terminated string to append to the file.
        The function does not create the file if it does not exist.
        If text_content is NULL, nothing is added to the file.
        If the function fails or filename is NULL - returns -1.
        If the file does not exist or the user lacks write permissions on the file - returns -1.
        Otherwise - returns 1.

    3. cp
        3-cp.c: C program that copies the contents of a file to another file.
        Usage: cp file_from file_to
        If file_to already exists, it is truncated.
        The created file has the permissions rw-rw-r--.
        If the number of arguments is incorrect, the function prints Usage: cp file_from file_to, followed by a new line on the POSIX standard error and exits with code 97.
        If file_from does not exist or the user lacks
File Descriptions :page_facing_up:

    0-read_textfile.c: This file contains the implementation of the read_textfile() function which reads a text file and prints it to the POSIX standard output.

    1-create_file.c: This file contains the implementation of the create_file() function which creates a file with the given name and writes the given text content to it.

    2-append_text_to_file.c: This file contains the implementation of the append_text_to_file() function which appends text to the end of a file with the given name.

    3-cp.c: This file contains the implementation of the cp program which copies the contents of one file to another file.

    100-elf_header.c: This file contains the implementation of the elf_header program which displays the information contained in the ELF header at the start of an ELF file.
