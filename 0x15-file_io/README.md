![image](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/IMAGES/CODE%20CODIX%20logo%20final.png) 

## C- File I/O

In this project, I learned about to

* How to `create`, `open`, `close`, `read` and `write` files

* What are file descriptors

* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names

* How to use the I/O system calls *open*, *close*, *read* and *write*

* What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`

* What are file permissions, and how to set them when creating a file with the open system call

* What is a system call

* What is the difference between a function and a system call

**Author: Imanol Asolo**

![pngwing com (2)](https://user-images.githubusercontent.com/86312558/142048668-4bec0f80-8112-4f3d-b898-9d8a9ba532b4.png) @jjusturi71 ![pngwing com (3)](https://user-images.githubusercontent.com/86312558/142048993-28de7d8c-df86-4f2f-bb08-f46a1ab35076.png) @jjusturi
## Header File :file_folder:

* [main.h](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x15-file_io/main.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File                  |         Definition/Prototype                                                     |
| -------------------------- | -------------------------------------------------------------------------------- |
| `read_textfile`            | `ssize_t read_textfile(const char *filename, size_t letters);`                   |
| `create_file`              | `int create_file(const char *filename, char *text_content);`                     |  
| `append_text_to_file`      | `int append_text_to_file(const char *filename, char *text_content);`             |


## Files:

* **0. Tread lightly, she is near**
  * [0-read_textfile.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x15-file_io/0-read_textfile.c): Function that reads a text file and prints it to the POSIX standard output.
  
    * where letters is the number of letters it should read and print

    * returns the actual number of letters it could read and print

    * if the file can not be opened or read, return 0

    * if filename is NULL return 0

    * if write fails or does not write the expected amount of bytes, return 0

* **1. Under the snow**
  * [1-create_file.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x15-file_io/1-create_file.c): Create a function that creates a file..

     * where filename is the name of the file to create and text_content is a NULL terminated string to write to the file

     * Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)

     * The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.

     * if the file already exists, truncate it

     * if filename is NULL return -1

     * if text_content is NULL create an empty file

* **Speak gently, she can hear**

  * [2-append_text_to_file.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x15-file_io/2-append_text_to_file.c): Function that appends text at the end of a file.

    * where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file

    * Return: 1 on success and -1 on failure

    * Do not create the file if it does not exist

    * If filename is NULL return -1

    * If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

* **cp**

  * [3-cp.c](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x15-file_io/3-cp.c):  Write a program that copies the content of a file to another file.

    * Usage: cp file_from file_to

    * if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error

    * if file_to already exists, truncate it

    * if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error

     * where NAME_OF_THE_FILE is the first argument passed to your program
   
   * if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
    
     * where NAME_OF_THE_FILE is the second argument passed to your program
   
   * if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error

     * where FD_VALUE is the value of the file descriptor

   * Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions

   * You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer

   * You are allowed to use dprintf

You can watch the different pseudocodes used to build the programs here. [Pseudocodes](https://github.com/Imanolasolo/holbertonschool-low_level_programming/tree/main/0x15-file_io/Pseudocodes)
