*This project has been created as part of the 42 curriculum by gmateus-.*

# 🔄 Push_swap

A sorting algorithm project that uses only two stacks and a limited set of operations to sort integers efficiently.

---

## 📖 Description

**Push_swap** is an algorithm project that challenges you to sort data using the most efficient method possible, with constraints on available operations and data structures.

### Goal

Sort a list of random integers using only **two stacks** (A and B) and a **limited set of operations** in the smallest number of moves possible.

### Brief Overview

The program receives a list of integers as arguments and outputs the optimal sequence of operations to sort them in ascending order on stack A. The project implements:

- **Small Sort Algorithm**: Optimized for 2-5 numbers with hardcoded optimal solutions
- **Radix Sort Algorithm**: Efficient bit-manipulation sorting for larger datasets (6+ numbers)
- **Input Validation**: Comprehensive error handling for duplicates, non-integers, and out-of-range values
- **Normalization**: Converts values to indices (0 to N-1) to enable efficient binary operations

### Available Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap first 2 elements of stack A |
| `sb` | Swap first 2 elements of stack B |
| `ss` | `sa` and `sb` simultaneously |
| `pa` | Push top of B to A |
| `pb` | Push top of A to B |
| `ra` | Rotate A (first becomes last) |
| `rb` | Rotate B (first becomes last) |
| `rr` | `ra` and `rb` simultaneously |
| `rra` | Reverse rotate A (last becomes first) |
| `rrb` | Reverse rotate B (last becomes first) |
| `rrr` | `rra` and `rrb` simultaneously |

---

## 🛠️ Instructions

### Prerequisites

- **GCC** or **Clang** or **cc** compiler
- **Make** build tool
- **Linux** or **macOS** operating system

### Compilation

Clone the repository and compile the project:

```bash
git clone https://github.com/GerbsonJr/push_swap.git
cd push_swap
make
```

This will create the `push_swap` executable.

### Usage

#### Basic Usage

```bash
./push_swap <list of integers>
```

**Examples:**

```bash
# Simple example
./push_swap 3 2 1
# Output:
# sa
# rra

# With positive and negative numbers
./push_swap 5 -2 8 1 -9

# Numbers as a single string (spaces will be parsed)
./push_swap "5 2 8 1"
```

#### With Checker (if available)

```bash
# Test if the output correctly sorts the list
./push_swap 5 2 8 1 | ./checker_linux 5 2 8 1
# Output: OK (if sorted correctly)
#         KO (if not sorted)
#         Error (if invalid input)
```

### Error Handling

The program outputs `Error` to stderr and exits with status 1 for:
- Non-integer arguments
- Numbers outside `INT_MIN` to `INT_MAX` range
- Duplicate numbers
- Invalid characters

```bash
./push_swap 1 2 2    # Error (duplicate)
./push_swap 1 a 3    # Error (non-integer)
./push_swap          # (no output, exits normally)
```

### Testing

```bash
# Test with 3 numbers
./push_swap 3 2 1 | wc -l

# Test with 5 numbers
./push_swap 5 4 3 2 1 | wc -l

# Test with 10 numbers
./push_swap 10 9 8 7 6 5 4 3 2 1 | wc -l
```

---

## 📚 Resources

### Documentation & References

- [42 Push_swap Subject](https://cdn.intra.42.fr/pdf/pdf/xxxxx/en.subject.pdf)
- [Sorting Algorithms Visualization](https://push-swap-visualizer.vercel.app/)
- [Radix Sort Algorithm](https://en.wikipedia.org/wiki/Radix_sort)
- [Stack Data Structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))

### Articles & Tutorials

- [Algorithm Complexity Analysis](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Bit Manipulation in C](https://www.geeksforgeeks.org/bits-manipulation-important-tactics/)

### AI Usage

**GitHub Copilot** was used for the following tasks:

1. **README**
   
2. **Documentation & Explanation**

3. **NOT Used For**
   - ❌ Writing core algorithm implementations (Radix Sort, Small Sort)
   - ❌ Generating the main sorting logic
   - ❌ Creating the project structure or Makefile

**Disclaimer**: All core logic, algorithm design, and problem-solving were done independently. AI was used as a supplementary tool for code quality improvements and learning enhancements.

---

## 🏗️ Project Structure

```
push_swap/
├── Libft/              # Custom C library
├── src/
│   ├── main.c          # Entry point, argument parsing
│   ├── nodes.c         # Stack creation and manipulation
│   ├── operations1.c   # Operations: sa, sb, pa, pb, ss
│   ├── operations2.c   # Operations: ra, rb, rr, rra, rrb
│   ├── parsing.c       # Input validation
│   ├── radix.c         # Radix sort algorithm
│   ├── small_sort.c    # Optimized sort for ≤5 numbers
│   └── utils.c         # Helper functions
├── push_swap.h         # Header file
├── Makefile            # Build configuration
└── README.md           # This file
```

---

## 🧠 Algorithm Explanation

### Normalization

Converts input values to indices (0 to N-1) based on their relative order:

```
Input:  [100, 50, 200, 25]
         ↓
Indices: [2,   1,   3,   0]
```

**Why?** Enables efficient binary operations in Radix Sort.

### Small Sort (≤5 numbers)

Uses hardcoded optimal solutions:
- **2 numbers**: Maximum 1 operation (`sa` if needed)
- **3 numbers**: Maximum 3 operations
- **4 numbers**: Push smallest to B, sort 3, push back
- **5 numbers**: Push 2 smallest to B, sort 3, push back

### Radix Sort (6+ numbers)

Sorts by binary digits (bits) from least to most significant:

```
Example: [3, 1, 2, 0]
Binary:  [11, 01, 10, 00]

Bit 0: Separate by rightmost bit (0→B, 1→A)
Bit 1: Separate by second bit (0→B, 1→A)
Result: [0, 1, 2, 3] ✅
```

**Complexity**: O(n × k) where k = number of bits ≈ O(n log n)

---

## ⚙️ Technical Choices

- **Data Structure**: Doubly linked list for O(1) operations at both ends
- **Memory Management**: Dynamic allocation with proper cleanup
- **Error Handling**: All errors output to stderr, clean exit
- **Normalization**: Simplifies comparison logic and enables bit manipulation
- **Algorithm Selection**: Conditional based on input size for optimal performance

---

## 📊 Features

- ✅ Handles positive and negative integers
- ✅ Accepts arguments as separate strings or space-separated single string
- ✅ Validates input (duplicates, non-integers, overflow)
- ✅ Optimized for small datasets (2-5 numbers)
- ✅ Efficient for large datasets (100-500 numbers)
- ✅ Memory leak-free (validated with Valgrind)
- ✅ Norm-compliant code (42 coding standards)

---

## 🐛 Known Issues

None currently. If you find any bugs, please open an issue!

---

## 📝 License

This project is part of the 42 School curriculum and follows its academic integrity policies.

---

## 👤 Author

**Gerbson Mateus** (gmateus-)
- 42 Intra: [@gmateus-](https://profile.intra.42.fr/users/gmateus-)
- GitHub: [@GerbsonJr](https://github.com/GerbsonJr)

---

## 🙏 Acknowledgments

- 42 Lisboa for the project subject and learning environment
- Peers for code reviews and testing assistance
- The 42 community for shared knowledge and resources

---

**Made with ☕ at 42 Lisboa**

## Valgrind

```bash
   valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes
```