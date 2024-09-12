# Push Swap

## Overview

**Push Swap** is a sorting algorithm project developed as part of the curriculum at 42 Heilbronn. The objective of the project is to sort a stack of integers with the least number of operations, using two stacks and a limited set of operations. The project serves as an exercise in algorithmic optimization, data structure manipulation, and problem-solving.

## Features

- Implements an optimized sorting algorithm using two stacks.
- Includes a set of custom operations to perform sorting.
- Designed to handle various edge cases and sort a stack efficiently.

## Operations

The following operations are supported:

- `sa`: Swap the first two elements at the top of stack A.
- `sb`: Swap the first two elements at the top of stack B.
- `ss`: `sa` and `sb` simultaneously.
- `pa`: Push the top element from stack B onto stack A.
- `pb`: Push the top element from stack A onto stack B.
- `ra`: Rotate stack A (all elements shift up by one, and the first element becomes the last).
- `rb`: Rotate stack B.
- `rr`: `ra` and `rb` simultaneously.
- `rra`: Reverse rotate stack A (all elements shift down by one, and the last element becomes the first).
- `rrb`: Reverse rotate stack B.
- `rrr`: `rra` and `rrb` simultaneously.

## Prerequisites

To build and run this project, ensure you have the following installed:

- GCC or any other C compiler
- Make

## Installation

Follow these steps to set up the project locally:

1. **Clone the repository:**
    ```bash
    git clone https://github.com/sshahary/pushswap.git
    cd push_swap
    ```

2. **Compile the project:**
    ```bash
    make
    ```

## Usage

Once compiled, you can use the `push_swap` program to sort a stack of integers. 

### Example:

```bash
./push_swap 4 67 3 87 23
