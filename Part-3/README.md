# Understanding Comments in C++

This repository provides a simple example to demonstrate the use of comments in C++ programming. Comments are a vital part of writing clean, maintainable code, as they allow programmers to annotate and explain their code for better understanding.

---

## 📖 What are Comments?
Comments are lines in a program that are ignored by the compiler. They serve as notes or explanations for the code, helping developers and collaborators understand the purpose and functionality of various code sections. Comments are not executed during runtime.

### Types of Comments in C++
1. **Single-line Comments:**
   - Start with `//`. Everything after `//` on the same line is treated as a comment.
   - Example:
     ```cpp
     int age = 25; // This is a single-line comment
     ```

2. **Multi-line Comments:**
   - Start with `/*` and end with `*/`. Useful for writing longer explanations or disabling multiple lines of code.
   - Example:
     ```cpp
     /*
     This is a multi-line comment.
     It spans across multiple lines.
     */
     ```

---

## 🛠️ Example Code
Below is an example demonstrating both types of comments:

```cpp
#include <iostream>
using namespace std;

int main() {

  // This is a single-line comment
  int age = 25; // Declare and initialize age

  /* This is a multi-line comment
     explaining that the following line
     will print the age variable to the console. */
  cout << "Age: " << age << endl;

  return 0; // End of the program
}
```

---

## 💡 Why Use Comments?
- **Clarity:** Explain the purpose of code to other developers or your future self.
- **Documentation:** Provide context for complex algorithms or logic.
- **Debugging:** Temporarily disable sections of code without deleting them.

---

## 📜 Best Practices for Writing Comments
1. **Be concise:** Comments should be short and to the point.
2. **Avoid redundancy:** Don’t describe what is already obvious from the code.
3. **Keep them updated:** Ensure comments are accurate and reflect the current state of the code.
4. **Use meaningful explanations:** Focus on the "why" rather than the "how."
