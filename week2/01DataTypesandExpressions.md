# Data Types and expressions
## 3 Fundamental Constructs of Programming Languages
* Data 
* Expressions
* Control Flow

### Examples
#### Data
* int
* float
* double
* char
* string
* bool
* vector
* program defined classes

#### Expressions
* input/output expressions
* arithmetic expressions
* boolean expressions

#### Control Flow
* Sequential
* Branching (if, if-else, else, switch)
* Iterative (while, for)
* Function calls
* Exceptions

## Data Types in C++
* C++ is strongly typed - each data must have a type.
* Data is stored either as variables or constants
* constants may be either built into the language (c++ literals) or user defined (ex: const int max = 5;)
* once the const is set, the value can't change.

### int
  * Kind of data - integers numbers
  * inner representation - each int uses 4 bytes (32 bits)
  * fized size data - all are the same size
  * 4 billion different numbers can be represented, but really big numbers don't fit.
  * The number is converted to binary, and zeros are filled in the beginning to fill all 32 bits.
```
6 base 10 = 110 base 2
stored as:
00000000 00000000 00000000 00000110
for negatives, the zeros become 1
-6 base 10 stored as:
11111111 11111111 11111111 11111010

```

#### arithmetic Operators
* Use values and operators to make expressions that represent a value.
* Arithmetic operators work with integers
* Ex. X + 2;
* can be printed out or assigned to variables
```
+
-
*
```
##### Divide is different
* 13 divided by 5 is 2 remainder 3.
* Div and Mod give us the 2 and the 3.
* 13 div 5 = 2
* 13 mod 5 = 3
* This way integers stay integers
```
13/5
13%5
```
equals is the assignment operator, it stores what's on the right in the variable to the left.


### float
### double
### char
### string
### bool


