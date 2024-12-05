# Understanding Data Types in C++

This guide provides an overview of data types in C++ and demonstrates their usage through a simple code example.

---

## ⓘ What Are Data Types?
Data types in C++ specify the type of data that a variable can hold. Each data type determines the size and layout of the variable's memory, as well as the type of operations that can be performed on it.

### Common Data Types in C++
1. **`int` (Integer):**
   - Represents whole numbers.
   - Example: `int a = 3;`

2. **`double` (Double Precision Floating Point):**
   - Used for storing decimal numbers.
   - Example: `double b = 5.4;`

3. **`char` (Character):**
   - Represents a single character.
   - Example: `char c = 'A';`

4. **`bool` (Boolean):**
   - Represents a value that is either `true` or `false`.
   - Example: `bool d = true;`

5. **`string` (String):**
   - Represents a sequence of characters (text).
   - Example: `string e = "Hello friend";`

---

## ⏹ Example Code
Below is a simple C++ program that demonstrates the use of different data types:

```cpp
#include <iostream>
using namespace std;

int main() {

    // Data types in C++
    int a = 3; // Integer
    double b = 5.4; // Double
    char c = 'A'; // Character
    bool d = true; // Boolean
    string e = "Hello friend"; // String

    cout << "Your integer variable is: " << a << endl;
    cout << "Your double variable is: " << b << endl;
    cout << "Your character variable is: " << c << endl;
    cout << "Your boolean variable is: " << d << endl;
    cout << "Your string variable is: " << e << endl;
}
```

---

## ❝ Key Points:
- Each data type serves a specific purpose in C++.
- Use `int` for whole numbers, `double` for decimals, `char` for single characters, `bool` for true/false values, and `string` for sequences of characters.
- Proper use of data types ensures efficient memory use and prevents errors during runtime.

---

Feel free to use and adapt this example to experiment with data types in your own C++ projects!
