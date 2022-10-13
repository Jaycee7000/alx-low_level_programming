0x0F. C - Function pointers

0 - Write a function that prints a name.

1 - Write a function that executes a function given as a parameter on each element of an array.

2 - Write a function that searches for an integer.

3 - Write a program that performs simple operations.

3a - This file should contain all the function prototypes and data structures used by the program. You can use this structure:



/**

 * struct op - Struct op

 *

 * @op: The operator

 * @f: The function associated

 */

typedef struct op

{

    char *op;

    int (*f)(int a, int b);

} op_t;

3b - This file should contain the 5 following functions (not more):



op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);

op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);

op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);

op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);

op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3c - This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

3d - This file should contain your main function only.

