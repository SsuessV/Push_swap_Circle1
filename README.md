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
  - Implemented sorting algorithms (selection sort & radix sort) and handles small inputs upto 5 numbers
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

We chose arrays because the input already comes as a fixed number of arguments through argc and argv. Arrays are straightforward to allocate, easy to index, and we were already comfortable working with them from previous projects. We were aware that operations such as removing the first element may require shifting values, but we felt the simpler implementation outweighed that cost for our first approach.

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