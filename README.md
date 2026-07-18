*This project has been created as part of the 42 curriculum by suyoun, bsurilla.*

# Push_Swap

## Description

**Push_swap** is a sorting algorithm project from the 42 curriculum.  
The **objective** is to sort a stack of integers using two stacks (`A` and `B`) and a limited set of operations.   
The program must calculate and output the smallest possible sequence of instructions needed to sort the stack.

The available operations include:
- Swap (`sa`, `sb`, `ss`)
- Push (`pa`, `pb`)
- Rotate (`ra`, `rb`, `rr`)
- Reverse rotate (`rra`, `rrb`, `rrr`)

The project focuses on algorithm design, data structures, optimization, and efficient manipulation of stacks.

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
pb
ra
sa
pa

---

## Resources

### References

* Online references for the C Standard Library (cppreference.com, Cplusplus.com)
* Manual pages
* Harvard CS50 Lectures, YouTube tutorials on variadic functions, 
* Assistance and discussions with 42 students

### AI Usage

AI tools (such as ChatGPT and Claude) were used as learning and review aids during the development of this project.

They were used to:
- Explain the behavior and requirements of the `printf` function.
- Clarify the use of variadic functions and the `stdarg.h` macros.
- Discuss edge cases and expected outputs for different format specifiers.
- Review implementation ideas and assist with debugging.
- Help structure and refine the project documentation (README).

All source code, design decisions, and final implementations were written and validated manually by the author.

---

### Algorithm and Data Structure Choices

---

## Notes

This project focuses on: