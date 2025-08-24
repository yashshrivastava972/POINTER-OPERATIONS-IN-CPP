# Aim: To Study and Implement Pointer Operations (Call by Value and Call by Reference).

# Tool: VS CODE.

# Theory:
<img width="957" height="343" alt="image" src="https://github.com/user-attachments/assets/94853a5a-1717-473c-a9bf-62ea70493cfd" />



1. Pointer Basics in C++

A pointer is a variable that stores the address of another variable.
Declaration:
int x = 10;
int *ptr = &x;   // ptr stores the address of x
*ptr → dereferencing operator → accesses the value stored at the address.
&x → address-of operator → gives the memory address of variable x.

2. Function Calls in C++

When we pass variables to a function, we can do it in two main ways:
(a) Call by Value
A copy of the actual value is passed to the function.
Any changes inside the function do not affect the original variable.

Example:

#include <iostream>
using namespace std;

void callByValue(int a) {
    a = a + 10;   // changes only local copy
}

int main() {
    int x = 5;
    callByValue(x);
    cout << "Value of x after callByValue: " << x << endl; // Still 5
    return 0;
}

Here, x remains unchanged because only a copy was modified.

(b) Call by Reference (using pointers or references)
Instead of passing a copy, we pass the address (reference) of the variable.
Any change in the function directly affects the original variable.

Method 1: Using Pointers

#include <iostream>
using namespace std;

void callByReference(int *a) {
    *a = *a + 10;   // modifies the original value
}

int main() {
    int x = 5;
    callByReference(&x);
    cout << "Value of x after callByReference: " << x << endl; // Now 15
    return 0;
}
Here, &x passes the address, and *a modifies the actual variable.

Method 2: Using References (preferred in modern C++)

#include <iostream>
using namespace std;

void callByReference(int &a) {
    a = a + 10;   // directly modifies original
}

int main() {
    int x = 5;
    callByReference(x);
    cout << "Value of x after callByReference: " << x << endl; // Now 15
    return 0;
}

3. Key Differences

   
| Feature            | Call by Value                | Call by Reference              |
| ------------------ | ---------------------------- | ------------------------------ |
| What is passed?    | Copy of variable value       | Address (pointer) or reference |
| Effect on variable | No change in original        | Changes original variable      |
| Memory usage       | Requires extra memory (copy) | No extra copy (efficient)      |
| Safety             | Safer (original unaffected)  | Needs care (original modified) |


Summary:
Call by Value → safe, doesn’t modify original data.
Call by Reference (with pointers/references) → efficient, allows modifying original data.
Pointers are crucial for reference passing, dynamic memory, and data structures (linked lists, trees, etc.).

# Algorithms :

1. Algorithm for Call by Value Swap
   
Step 1: Start

Step 2: Declare two integers a and b (here a=27, b=67).

Step 3: Call the function swapValues(a, b).

Step 4: Inside the function:

Copy a into x, and b into y.

Use a temporary variable temp to swap x and y.

Since only copies are swapped, the originals remain unchanged.

Step 5: Return to main().

Step 6: Print values of a and b.

Step 7: End.

2. Algorithm for Call by Reference Swap
   
Step 1: Start

Step 2: Declare two integers a=27, b=67.

Step 3: Call the function swapValues(&a, &b) and pass addresses.

Step 4: Inside swapValues:

Access the values at those addresses using *x and *y.

Use a temporary variable temp to swap them:

temp = *x

*x = *y

*y = temp

This directly changes the values of a and b in main().

Step 5: Return to main().

Step 6: Print updated values of a and b.

Step 7: End.

3. Algorithm practical implementation of Call by Reference (using pointers) to update salary
   
Step 1: Start

Step 2: Input employee’s salary, years of service, profit, research, and pipeline.

Step 3: Initialize count = 0.

Step 4: Check each condition:

If years > 1, increment count.

If profit > 100000, increment count.

If research == 1, increment count.

If pipeline == 1, increment count.

Step 5: If count >= 3, call calculateSalary(&salary) to update salary by 20%.

Step 6: Display whether employee is eligible or not.

Step 7: Print final salary.

Step 8: End.

# Conclusion
From the study and implementation of pointer operations in C++, the following conclusions can be drawn:

Call by Value
Only a copy of the actual parameter is passed to the function.
Any changes made inside the function do not affect the original variable.
It is safer since the original data remains unchanged, but less efficient when working with large data.

Call by Reference (using Pointers/References)
The address of the actual parameter is passed, allowing the function to directly modify the original variable.
Any changes inside the function are reflected in the original variable.
It is more efficient and useful for operations like swapping values, updating records, and handling large data structures.

Pointers play a crucial role in implementing call by reference because they allow direct access to memory addresses.

Overall, Call by Value is suitable when original data should remain unchanged, while Call by Reference is preferred when the function must update or manipulate the original data.
