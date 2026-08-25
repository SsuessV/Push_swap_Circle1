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
  - Implemented input parsing, argument validation, and error handling.
  - Developed stack operations (swap, push).
  - Implemented Small Sort (2–5 inputs), Simple strategy (Selection Sort), and Complex strategy (Radix Sort).
  - Implemented benchmark data structures and operation counters.
  - Ensured 42 Norm/Norminette compliance and maintained code readability.
  - Wrote README file with the help of AI.
  - Performed extensive edge-case testing and debugging.


- Bea-Marie, Surilla (bsurilla)
  - Implemented stack initialization, dynamic memory allocation, and memory cleanup.
  - Developed stack operations (rotate, reverse-rotate).
  - Developed the Medium strategy (Chunk Sort).
  - Implemented ranking, disorder calculation, and strategy selection.
  - Implemented and integrated Benchmark mode.
  - Performed testing and debugging.

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
If no strategy is specified, the program uses the Adaptive strategy by default.  
The Adaptive strategy selects an algorithm based on the disorder of the input.  

You can also explicitly select a strategy:  
```
./push_swap --simple 4 67 3 87 12
./push_swap --medium 4 67 3 87 12
./push_swap --complex 4 67 3 87 12
./push_swap --adaptive 4 67 3 87 12
```
The program will output the sequence of operations required to sort the stack:  
```
pb
ra
sa
pa
```
To enable benchmark mode, add the --bench flag:  
`./push_swap --bench 4 67 3 87 12`  
The optional `--bench` flag enables performance reporting.  
Benchmark information is printed to **stderr**, while the Push_swap operations remain on **stdout**.  

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

**Small Sort — O(1) for a maximum of 5 elements:**  
Handles very small inputs of up to 5 elements using dedicated sorting functions for 2, 3, 4, and 5 elements.  
We use specialized methods for these cases because they can sort small inputs with fewer Push_swap operations than the general-purpose algorithms.  

**Simple — Selection Sort O(n²):**  
Finds the smallest element, moves it to the top of stack A, and pushes it to stack B.  
Once all elements have been processed, they are pushed back to A in sorted order.  
We chose Selection Sort because it is simple to implement and fits the required O(n²) complexity class.  

**Medium — Chunk Sort O(n√n):**  
Divides the input into approximately √n-sized chunks and processes the elements chunk by chunk using the two stacks.  
We chose this approach because it reduces the number of operations compared with the Simple strategy while meeting the required O(n√n) complexity class.  

**Complex — Radix Sort O(n log n):**  
Uses the ranked values and their binary representation to sort the stack bit by bit.  
Elements are repeatedly moved between the two stacks according to the current bit.  
We chose Radix Sort because it provides efficient sorting for large inputs and fits the required O(n log n) complexity class.

**Adaptive:**  
The program always calculates the disorder of the initial input before performing any sorting operations, as required by the subject.  
When the Adaptive strategy is selected (either explicitly with --adaptive or **by default** when no strategy flag is provided),  
the measured disorder determines which sorting method is used:  
```
Low disorder (< 0.2): Selection Sort — O(n²)  
Medium disorder (0.2 ≤ disorder < 0.5): Chunk Sort — O(n√n)  
High disorder (≥ 0.5): Radix Sort — O(n log n)  
```
When --simple, --medium, or --complex is explicitly selected, the disorder is still calculated as required, but it does not determine the selected strategy.  
The specified algorithm is used directly. This allows the Adaptive strategy to choose an appropriate sorting method based on the initial state of the data    
while ensuring that all four required strategies can also be selected explicitly.

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