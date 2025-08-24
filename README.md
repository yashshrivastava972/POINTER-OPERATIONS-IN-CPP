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
