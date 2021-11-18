![image](https://github.com/Imanolasolo/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/IMAGES/CODE%20CODIX%20logo%20final.png) 

## C - Bit manipulation

In this project, I learned about to how manipulate bits and use bitwise operators.

**Author: Imanol Asolo**

![pngwing com (2)](https://user-images.githubusercontent.com/86312558/142048668-4bec0f80-8112-4f3d-b898-9d8a9ba532b4.png) @jjusturi71 ![pngwing com (3)](https://user-images.githubusercontent.com/86312558/142048993-28de7d8c-df86-4f2f-bb08-f46a1ab35076.png) @jjusturi
## Header File :file_folder:

* [main.h]: Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File                  |         Definition/Prototype                                                     |
| -------------------------- | -------------------------------------------------------------------------------- |
| `binary_to_uint`           | `unsigned int binary_to_uint(const char *b);`                                    |
| `get_bit`                  | `get_bit(unsigned long int n, unsigned int index);                               |
| `set_bit`                  | `int set_bit(unsigned long int *n, unsigned int index);`                         |
| `clear_bit`                | `int clear_bit(unsigned long int *n, unsigned int index);`                       |
| `flip_bits`                | `unsigned int flip_bits(unsigned long int n, unsigned long int m);`              |
| `get_endianness`           | `int get_endianness(void);`                                                      |


## Files:

* **0. 0**
  * [0-binary_to_uint.c]: Function that converts a binary number to an unsigned int.
  
    * where b is pointing to a string of 0 and 1 chars

    * Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1

    * b is NULL

* **1. 1**
  * [1-print_binary.c]: Function that prints the binary representation of a number.
   *Format: see example
   *You are not allowed to use arrays
   *You are not allowed to use malloc
   *You are not allowed to use the % or / operators

* **2. 10**
  * [2-get_bit.c]: Function that returns the value of a bit at a given index
    * where index is the index, starting from 0 of the bit you want to get
    *Returns: the value of the bit at index index or -1 if an error occured

* **3. 11**
  * [3-set_bit.c]:  Function that sets the value of a bit to 1 at a given index.
    * Where index is the index, starting from 0 of the bit you want to set
    * Returns: 1 if it worked, or -1 if an error occurred

* **4. 100**
  * [4-clear_bit.c]: Function that sets the value of a bit to 0 at a given index.
    * Where index is the index, starting from 0 of the bit you want to set
    * Returns: 1 if it worked, or -1 if an error occurred

* **5. 101**
  * [5-flip_bits.c]:  Function that returns the number of bits you would need to flip to get from one number to another.
    * You are not allowed to use the % or / operators
    

