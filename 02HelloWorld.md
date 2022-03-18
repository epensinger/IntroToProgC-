# Process of Executing a Program
## 3 Main Components inside the computer
* CPU
* RAM
* Secondary Memory
* Both memories contain data made up of 0s and 1s.  
* Each collection of 8 bits is called a byte.
* Each byte is stored in a physical location in the memory with an index (0 through however many)
* A program or application is a set of instructions.  This is also stored in the memory.
## When you launch an application 
1. The program is copied into the main memory (RAM) to allow for faster access to the instructions.
2. The CPU begins executing the processes one by one, with the place being tracked by the CPU program counter register
3. The fetch-decode-execute cycle begins
4. Fetched from memory into CPU
5. CPU decodes the instruction
6. The CPU executes the instruction
7. This repeats millions of times each second and the program runs.


## Compilation
Example of a program in machine language.
```
01101011
10100010
10011100
...
0101001
```
Machine languages are low level
C++ is high level.
Ex:
```C++
#include <iostream>
using namespace std;

int main() {
  cout<<"Hello World"<<endl;
  return 0;
}
```
Compilation - aka the build process - is the process of converting the high level language to machine language so it can run.
* This is an automated process

# First C++ Program
Write a program that reads from the user two numbers, and prints their sum.

```
/* This program reads two integers from the user and prints their sum */

#include <iostream>
using namespace std;

int main()
{
  int num1;  //will hold the first input
  int num2;  //will hold the second input
  int sum;  //will hold the sum
  
  cout<<"Please enter two numbers separated by a space:"<<endl;
  cin>>num1>>num2;
  
  sum = num1 + num2;
  
  cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
  
  return 0;
}
```

* 2 types of comments - either ```/**/ or //``` the first can be multi-line.
* The top 2 lines are essential, just do that.
* int main() {}  //Always set the program up this way.  Again, just do it.
* End the program with return 0;  
* Lines of code (statements) end with ;
* The compiler doesn't care if we put it on one long line, it's the semicolons that end each statement, we add new lines for humans.
* Variables must be declared before they can be used, and the type must be declared.



