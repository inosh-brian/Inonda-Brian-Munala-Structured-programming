1. Difference Between Normal Variable and Pointer
Normal Variable:
      What it stores: Stores the actual value (data)
      
      Memory access: Direct access to its own memory location
      
      Value reading: Reads the stored value directly
      
      Value modification: Changes the value stored in its own memory

Pointer Variable:
  What it stores: Stores a memory address (location of another variable)
  
  Memory access: Indirect access - points to another memory location
  
  Value reading: Accesses the value at the stored memory address
  
  Value modification: Changes the value at the pointed-to memory location

Example:
int x = 10;        // Normal variable storing value 10
int *ptr = &x;     // Pointer storing address of x
// ptr contains memory address 
// *ptr accesses the value 10 at that address




2. Variable vs Pointer Declaration/Definition
Normal Variable:
      
      // Declaration (in header file)
      int count;
      
      // Definition (in source file)
      int count = 0;      // Allocates memory and stores value 0

   
 Pointer Variable:
  // Declaration
  int *pointer;
  
  // Definition
  int value = 42;
  int *pointer = &value;  // Stores address of 'value'
  
Role of Operators:
& (Address-of operator): Gets memory address of a variable
              int x = 5;
              int *ptr = &x;  // ptr now contains address of x
* (Dereference operator): Accesses value at stored address
              int y = *ptr;   // y gets value 5 (value at address stored in ptr)




  
3. Dereferencing a Pointer
Dereferencing means accessing the value stored at the memory address a pointer contains.

Example:

#include <stdio.h>

int main() {
    int number = 25;        // Normal variable
    int *ptr = &number;     // Pointer storing address of number
    
    printf("Value of number: %d\n", number);      // Direct: 25
    printf("Address of number: %p\n", &number);   // Memory address
    printf("Value via pointer: %d\n", *ptr);      // Dereferencing: 25
    
    // Modifying value through dereferencing
    *ptr = 100;             // Changes 'number' to 100
    printf("New value: %d\n", number);            // Now 100
    
    return 0;
}

How it works:

  ptr contains memory address of number 
  
  *ptr goes to address 0x1000 and accesses the integer stored there
  
  *ptr = new_value writes to that memory location






4. Scenarios Where Pointers Are Preferred Over Normal Variables

Pointers are preferred when direct memory access, efficiency, or data sharing is required.

Example 1: Modifying Variables Inside a Function

Pointers allow a function to modify the original variable.

  void update(int *x) {
      *x = 50;
  }

Example 2: Working with Large Data Structures

Passing large arrays or structures by pointer avoids copying data, improving performance.

void process(int *arr) {
    arr[0] = 100;
}





5. Limitations and Risks of Using Pointers

Memory leaks if allocated memory is not freed

Dangling pointers pointing to deallocated memory

Segmentation faults due to invalid memory access

Complexity compared to normal variables

Security risks if misused



6.Call by Value vs Call by Reference
a) Call by Value

A copy of the variable is passed to the function.
Changes made inside the function do not affect the original variable.

void change(int x) {
    x = 20;
}

b) Call by Reference

The address of the variable is passed using pointers.
Changes inside the function affect the original variable.

void change(int *x) {
    *x = 20;
}



7.Practical Scenarios
When Call by Value Is Preferred

  Data should not be modified
  
  Working with small variables
  
  Safer program behavior
  
  Example: Calculations

When Call by Reference Is Preferred

  Original data must be changed
  
  Working with arrays or structures
  
  Better memory usage
  
  Example: Swapping values, updating records
# Inonda-Brian-Munala-Structured-programming
