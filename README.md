*This project has been created as part of the 42 curriculum by suyoun, bsurilla.*

# Push_Swap

## Description

**Push_swap** is a sorting algorithm project from the 42 curriculum, completed as a two-person group project.
The **objective** is to sort a stack of integers using two stacks (`A` and `B`) and a limited set of operations.   
The program must calculate and output the smallest possible sequence of instructions needed to sort the stack.

The available operations include:
- Swap (`sa`, `sb`, `ss`)
- Push (`pa`, `pb`)
- Rotate (`ra`, `rb`, `rr`)
- Reverse rotate (`rra`, `rrb`, `rrr`)

The project focuses on algorithm design, data structures, optimization, and efficient manipulation of stacks.

## Contributors

This project was developed by:

- Su Jung, Youn (suyoun)
  - Implemented input parsing (flags handling, )
  - Handled argument validation and error checking
  - Integrated parsing with stack initialization
  - Developed stack manipulation operations (sa, sb, ss & pa, pb)
  - Implemented sorting algorithms (selection sort & radix sort & small sort)
  -	Ensuring the code is up to Norm
  - Ensuring readability and transparency for simple and coherent design
  - Implemented struct for Benchmark mode
  - Tested with edge cases


- Bea-Marie, Surilla (bsurilla)
  - Designed and implemented stack structures
  - Implemented stack creation and memory management
  - Developed stack manipulation operations (ra, rb, rr, rra, rrb, rrr)
  - Implemented the medium strategy (chunk sort)
  - Handled the ranking of the input and the disorder calculation
  - Implemented the sorting strategies including the handeling of the flags
  - Implemented Benchmark mode
  - Ensuring uniformity and consistancy in code through constant testing and debugging with the help of AI. 

---

## Instructions

### Compilation

To compile the project, run:  
`make`  
This will create the executable:  
`./push_swap`  
To remove object and dependency files:  
`make clean`    
To remove all generated files:  
`make fclean`   
To recompile everything from scratch:    
`make re`  

### Usage

Compile the project using the provided Makefile:  
`make`  
Run the program by passing a list of integers as arguments:  
`./push_swap 4 67 3 87 12`  
The program will output the sequence of operations required to sort the stack:  
```
pb
ra
sa
pa
```
To use the project with your own code, include the Push_swap header:  
`#include "push_swap.h"`  
The Makefile will automatically compile the required source files and link the Libft library.  

---

## Resources

### References

* 42 Push_swap subject and project guidelines
* Online references for the C Standard Library (cppreference.com, C documentation)
* Manual pages (`man malloc`, `man free`, `man write`, `man exit`)
* Grokking Algorithms_ An illustrated guide for programmers and other curious people-Manning Publications (2016) by Aditya Bhargava 
* Resources about sorting algorithms and stack data structures
* Tutorials and discussions about Push_swap strategies
* Assistance and discussions with 42 students

### AI Usage

AI tools (such as ChatGPT and Claude) were used as learning and review aids during the development of this project.

They were used to:
- Explain Push_swap requirements and the allowed operations.
- Clarify concepts related to parsing, stacks, and memory management.
- Discuss different sorting strategies and algorithm optimizations.
- Review implementation approaches and help identify potential edge cases.
- Assist with debugging and understanding compilation errors.
- Help structure and refine the project documentation (README).

All source code, algorithm choices, design decisions, and final implementations were written, tested, and validated manually by the authors.

---

### Algorithm and Data Structure Choices

## Algorithms

Small Sort — O(1) for a maximum of 5 elements:
Handles small inputs of up to 5 elements using dedicated sorting functions for 2, 3, and 5 elements.  
We use this because small inputs can be sorted with fewer operations than running the general sorting algorithms.

**Simple — Selection Sort O(n²):**
Finds the smallest element, moves it to the top of stack A, and pushes it to stack B.  
Once all elements are processed, they are pushed back to A in sorted order. We chose it because it is simple and fits the required O(n²) complexity.  

**Medium — Chunk Sort O(n√n):**
Divides the input into √n-sized chunks and processes the elements chunk by chunk using the two stacks.  
This reduces the number of operations compared to the simple algorithm while meeting the required O(n√n) complexity.

**Complex — Radix Sort O(n log n):**
Uses the binary representation of the ranked values to sort the stack bit by bit. It repeatedly pushes elements between the stacks based on each bit.  
We chose it because it provides efficient sorting for large inputs and fits the required O(n log n) complexity.

**Adaptive:**
Calculates the disorder of the input before sorting and selects an algorithm based on it.  
Low disorder uses Selection Sort, medium disorder uses Chunk Sort, and high disorder uses Radix Sort.
This allows the program to adapt the sorting strategy to the initial state of the data.

## Data structure
We chose a dynamically allocated array to store the stack elements. The t_stack structure keeps track of the array, its current size, and its capacity.
Arrays provide simple indexing and allow us to access elements efficiently by position.  
We chose this approach because we were already comfortable working with arrays from previous projects and it made the implementation easier to manage.

---

## Notes

This project focuses on:

- Designing and implementing efficient sorting algorithms under strict constraints.
- Understanding and manipulating stack-based data structures.
- Managing dynamic memory allocation and preventing memory leaks.
- Working with linked lists and creating reusable data structures.
- Handling input validation and edge cases, such as duplicates, invalid arguments, and integer overflow.
- Optimizing the number of operations required to sort a stack.
- Improving problem-solving skills through algorithm design and performance analysis.