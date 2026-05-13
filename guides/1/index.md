# CPE C++ Exam Study Guide

**Total Exam Items: 30 | Total Weight: 100%**

---

## Table of Contents
1. [Block 1: Syntax, Literals, and Operators (28%)](#block-1)
2. [Block 2: Flow Control and Functions (28%)](#block-2)
3. [Block 3: Vectors and Pointers (24%)](#block-3)
4. [Block 4: Structures and Strings (20%)](#block-4)
5. [Quick Reference](#quick-reference)
6. [Exam Preparation Checklist](#checklist)

---

## Block 1: Syntax, Literals, and Operators (28%)

### 1.1 Valid C++ Syntax Elements, Keywords, and Code Structures

**Keywords to Know:**
- Control flow: `if`, `else`, `switch`, `case`, `for`, `while`, `do`
- Data types: `int`, `float`, `double`, `char`, `bool`, `void`
- Modifiers: `const`, `static`, `extern`, `volatile`
- Other: `return`, `break`, `continue`, `goto`, `namespace`, `using`

**Valid Code Structure:**
```cpp
#include <iostream>
using namespace std;

int main() {
    // Code here
    return 0;
}
```

**Key Points:**
- Every statement ends with a semicolon (`;`)
- Blocks are enclosed in curly braces (`{}`)
- Comments: `//` (single line) or `/* */` (multi-line)
- Identifiers are case-sensitive

---

### 1.2 Built-in Data Types and Literals

**Primitive Data Types:**

| Type | Size | Literals | Range |
|------|------|----------|-------|
| `char` | 1 byte | `'a'`, `'\n'` | -128 to 127 |
| `short` | 2 bytes | `100` | -32,768 to 32,767 |
| `int` | 4 bytes | `42`, `-5` | -2.1B to 2.1B |
| `long` | 4+ bytes | `42L`, `100000L` | Platform dependent |
| `float` | 4 bytes | `3.14f`, `2.0f` | ~±3.4e38 |
| `double` | 8 bytes | `3.14`, `2.0` | ~±1.7e308 |
| `bool` | 1 byte | `true`, `false` | Boolean values |

**Literal Examples:**
```cpp
int decimal = 42;           // Decimal literal
int octal = 052;            // Octal (0 prefix)
int hexadecimal = 0x2A;     // Hexadecimal (0x prefix)
int binary = 0b101010;      // Binary (0b prefix, C++14+)

float floatVal = 3.14f;     // Float literal (f suffix)
double doubleVal = 3.14;    // Double literal (default)
double scientific = 1.5e-3; // Scientific notation

char ch = 'A';              // Character literal
string str = "Hello";       // String literal (requires #include <string>)
bool flag = true;           // Boolean literal
```

---

### 1.3 Structure and Declaration of main() Function

**Standard main() Declarations:**

```cpp
// Most common - returns int to OS
int main() {
    return 0;
}

// With command-line arguments
int main(int argc, char* argv[]) {
    // argc = argument count
    // argv = array of argument pointers
    return 0;
}

// Alternative with vector of strings (C++11+)
#include <vector>
#include <string>
int main(int argc, char* argv[]) {
    vector<string> args(argv, argv + argc);
    return 0;
}
```

**Key Points:**
- `main()` must return `int` (exit status to OS)
- Return `0` indicates success
- Non-zero values indicate errors
- `argc`: number of command-line arguments (always ≥ 1, includes program name)
- `argv[0]`: program name
- `argv[1]` to `argv[argc-1]`: actual arguments

---

### 1.4 Apply Operators

**Arithmetic Operators:**
```cpp
int a = 10, b = 3;
int sum = a + b;           // 13
int diff = a - b;          // 7
int product = a * b;       // 30
int quotient = a / b;      // 3 (integer division)
int remainder = a % b;     // 1 (modulo)
int power = 2 << 3;        // 16 (left shift - multiply by 2^3)
```

**Relational Operators:**
```cpp
bool result1 = (a == b);   // Equal to (false)
bool result2 = (a != b);   // Not equal to (true)
bool result3 = (a > b);    // Greater than (true)
bool result4 = (a < b);    // Less than (false)
bool result5 = (a >= b);   // Greater than or equal (true)
bool result6 = (a <= b);   // Less than or equal (false)
```

**Logical Operators:**
```cpp
bool x = true, y = false;
bool and_result = x && y;  // Logical AND (false)
bool or_result = x || y;   // Logical OR (true)
bool not_result = !x;      // Logical NOT (false)
```

**Bitwise Operators:**
```cpp
int a = 5;      // 0101
int b = 3;      // 0011

int and_bit = a & b;       // 0001 = 1
int or_bit = a | b;        // 0111 = 7
int xor_bit = a ^ b;       // 0110 = 6
int not_bit = ~a;          // ...1010 (platform dependent)
int left_shift = a << 1;   // 1010 = 10
int right_shift = a >> 1;  // 0010 = 2
```

**Assignment Operators:**
```cpp
int x = 10;
x += 5;         // x = 15 (x = x + 5)
x -= 3;         // x = 12 (x = x - 3)
x *= 2;         // x = 24 (x = x * 2)
x /= 4;         // x = 6  (x = x / 4)
x %= 5;         // x = 1  (x = x % 5)
x &= 3;         // x = 1  (x = x & 3)
x |= 2;         // x = 3  (x = x | 2)
x ^= 1;         // x = 2  (x = x ^ 1)
x <<= 2;        // x = 8  (x = x << 2)
x >>= 1;        // x = 4  (x = x >> 1)
```

**Increment/Decrement:**
```cpp
int x = 5;
x++;            // Post-increment: returns 5, then x becomes 6
++x;            // Pre-increment: x becomes 7, then returns 7
x--;            // Post-decrement: returns 7, then x becomes 6
--x;            // Pre-decrement: x becomes 5, then returns 5
```

**Ternary Operator:**
```cpp
int max = (a > b) ? a : b;  // If a > b, max = a; else max = b
```

---

### 1.5 Operator Precedence and Associativity

**Precedence Order (Highest to Lowest):**

| Precedence | Operators | Associativity |
|-----------|-----------|---------------|
| 1 | `()` `[]` `.` `->` | Left-to-right |
| 2 | `!` `~` `++` `--` `+` `-` `*` `&` | Right-to-left |
| 3 | `*` `/` `%` | Left-to-right |
| 4 | `+` `-` | Left-to-right |
| 5 | `<<` `>>` | Left-to-right |
| 6 | `<` `<=` `>` `>=` | Left-to-right |
| 7 | `==` `!=` | Left-to-right |
| 8 | `&` | Left-to-right |
| 9 | `^` | Left-to-right |
| 10 | `\|` | Left-to-right |
| 11 | `&&` | Left-to-right |
| 12 | `\|\|` | Left-to-right |
| 13 | `?:` | Right-to-left |
| 14 | `=` `+=` `-=` etc. | Right-to-left |

**Examples:**
```cpp
int result = 2 + 3 * 4;     // 14 (multiplication first)
int result2 = (2 + 3) * 4;  // 20 (parentheses override)
int result3 = 10 - 5 - 2;   // 3 (left-to-right: (10-5)-2)
bool b = 5 > 3 && 2 < 4;    // true (comparison before logical AND)
```

---

### 1.6 Short-Circuit Logic

**AND Short-Circuit (`&&`):**
```cpp
if (x != 0 && y / x > 5) {  // If x == 0, second part NOT evaluated
    // Prevents division by zero
}
```

**OR Short-Circuit (`||`):**
```cpp
if (x == 0 || y / x > 5) {  // If x == 0, short-circuits to true
    // Second part not evaluated
}
```

**Key Points:**
- `&&`: If left operand is `false`, right operand is never evaluated
- `||`: If left operand is `true`, right operand is never evaluated
- **Bitwise operators** (`&`, `|`) do NOT short-circuit

---

### 1.7 Input/Output Streams and Manipulators

**Basic I/O:**
```cpp
#include <iostream>
using namespace std;

// Output
cout << "Hello, World!" << endl;        // Print with newline
cout << "Value: " << 42 << endl;        // Multiple outputs
cerr << "Error message" << endl;        // Error stream

// Input
int x;
cin >> x;                               // Read single integer
string name;
cin >> name;                            // Read single word

string line;
getline(cin, line);                     // Read entire line including spaces
```

**Manipulators:**
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

// Spacing and alignment
cout << setw(10) << "Value" << endl;    // Width of 10 characters
cout << left << setw(10) << "Left" << endl;     // Left-aligned
cout << right << setw(10) << "Right" << endl;   // Right-aligned

// Number formatting
cout << fixed << setprecision(2) << 3.14159 << endl;  // 3.14
cout << scientific << 1234.5 << endl;   // 1.23e+03

// Base formatting
cout << hex << 255 << endl;             // ff (hexadecimal)
cout << oct << 64 << endl;              // 100 (octal)
cout << dec << 42 << endl;              // 42 (decimal)

// Boolean
cout << boolalpha << true << endl;      // "true" instead of "1"

// Spacing
cout << "A" << setw(5) << "B" << endl;  // "    B"
```

**Common Manipulator Functions:**

| Manipulator | Effect |
|-----------|--------|
| `endl` | Insert newline and flush buffer |
| `setw(n)` | Set field width to n |
| `setprecision(n)` | Set decimal precision to n |
| `fixed` | Fixed-point notation |
| `scientific` | Scientific notation |
| `left` / `right` | Left/right alignment |
| `hex` / `oct` / `dec` | Hexadecimal/octal/decimal |
| `boolalpha` | Print booleans as "true"/"false" |

---

## Block 2: Flow Control and Functions (28%)

### 2.1 Conditional Statements (if, else)

**Basic if Statement:**
```cpp
if (condition) {
    // Executed if condition is true
}

if (condition) {
    // Executed if condition is true
} else {
    // Executed if condition is false
}

if (condition1) {
    // First condition
} else if (condition2) {
    // Second condition
} else {
    // Default case
}
```

**Example:**
```cpp
int age = 18;
if (age >= 18) {
    cout << "Adult" << endl;
} else if (age >= 13) {
    cout << "Teenager" << endl;
} else {
    cout << "Child" << endl;
}
```

---

### 2.2 Loop Constructs and Control Statements

**while Loop:**
```cpp
int count = 0;
while (count < 5) {
    cout << count << endl;
    count++;
}
```

**do-while Loop (executes at least once):**
```cpp
int count = 0;
do {
    cout << count << endl;
    count++;
} while (count < 5);
```

**for Loop:**
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}

// With multiple initializers/increments
for (int i = 0, j = 10; i < 5; i++, j--) {
    cout << i << " " << j << endl;
}

// Range-based for loop (C++11+)
vector<int> nums = {1, 2, 3, 4, 5};
for (int num : nums) {
    cout << num << endl;
}
```

**break and continue:**
```cpp
for (int i = 0; i < 10; i++) {
    if (i == 3) {
        continue;   // Skip iteration when i == 3
    }
    if (i == 7) {
        break;      // Exit loop when i == 7
    }
    cout << i << endl;  // Prints 0,1,2,4,5,6
}
```

---

### 2.3 goto and Labeled Statements

```cpp
int x = 0;
goto skipCode;
x = 5;          // This is skipped

skipCode:       // Label
cout << x << endl;  // Prints 0

// Another example with loop
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        goto endLoop;
    }
    cout << i << endl;
}

endLoop:
cout << "Loop ended" << endl;
```

**Note:** `goto` is generally discouraged in modern C++ due to readability concerns.

---

### 2.4 switch, case, and default

```cpp
int choice = 2;
switch (choice) {
    case 1:
        cout << "Option 1" << endl;
        break;      // Important! Without break, falls through
    case 2:
        cout << "Option 2" << endl;
        break;
    case 3:
    case 4:
        cout << "Option 3 or 4" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
}

// With fallthrough (intentional)
int level = 2;
switch (level) {
    case 1:
        cout << "Level 1" << endl;
        // Falls through to case 2
    case 2:
        cout << "Level 2" << endl;
        break;
}
```

---

### 2.5 Define, Declare, and Invoke Functions

**Function Declaration (Prototype):**
```cpp
int add(int a, int b);              // Declaration
double multiply(double x, double y); // Declaration
```

**Function Definition:**
```cpp
int add(int a, int b) {
    return a + b;
}

// Forward declaration often used (define later)
int subtract(int a, int b);

// ... other code ...

int subtract(int a, int b) {
    return a - b;
}
```

**Function Invocation:**
```cpp
int result = add(5, 3);         // result = 8
double product = multiply(2.5, 4.0);  // product = 10.0
```

**Default Parameters:**
```cpp
int power(int base, int exp = 2) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int x = power(5);       // Uses default exp = 2, result = 25
int y = power(5, 3);    // exp = 3, result = 125
```

---

### 2.6 Return Statements

**Typed Functions:**
```cpp
int getMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Multiple return paths (valid)
double getAbsoluteValue(double x) {
    if (x < 0) {
        return -x;
    }
    return x;
}
```

**void Functions:**
```cpp
void printMessage(string msg) {
    cout << msg << endl;
    return;         // Optional in void functions
    // or simply: }
}

void greet() {
    cout << "Hello!" << endl;
    // return; is implicit
}
```

**Early Returns:**
```cpp
int validateAge(int age) {
    if (age < 0) {
        return -1;  // Error code
    }
    if (age > 150) {
        return -2;  // Another error
    }
    return age;     // Valid age
}
```

---

### 2.7 Pass Arguments: By Value, By Reference, By Pointer

**Pass by Value (default - copies data):**
```cpp
void increment(int x) {
    x++;            // Changes only local copy
}

int main() {
    int num = 5;
    increment(num);
    cout << num << endl;    // Still 5
}
```

**Pass by Reference (& - alias to original):**
```cpp
void increment(int &x) {
    x++;            // Changes original variable
}

int main() {
    int num = 5;
    increment(num);
    cout << num << endl;    // Now 6
}
```

**Pass by Pointer (pointer to data):**
```cpp
void increment(int *x) {
    (*x)++;         // Dereference and increment
}

int main() {
    int num = 5;
    increment(&num);        // Pass address
    cout << num << endl;    // Now 6
}
```

**Comparison:**
```cpp
// Value: Safe but slower for large objects
void processValue(vector<int> v);

// Reference: Fast, direct modification (use const for read-only)
void processReference(vector<int> &v);
void readReference(const vector<int> &v);

// Pointer: Explicit, allows nullptr checks
void processPointer(vector<int> *v);
```

---

### 2.8 Basic Recursion

**Simple Recursion - Factorial:**
```cpp
int factorial(int n) {
    if (n <= 1) {
        return 1;   // Base case
    }
    return n * factorial(n - 1);    // Recursive case
}

int main() {
    cout << factorial(5) << endl;   // 120
}
```

**Fibonacci:**
```cpp
int fibonacci(int n) {
    if (n <= 1) {
        return n;   // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << fibonacci(7) << endl;   // 13
}
```

**String Reversal (using recursion):**
```cpp
void reverseString(string s, int index = 0) {
    if (index == s.length()) {
        return;     // Base case
    }
    reverseString(s, index + 1);    // Recursive call
    cout << s[index];               // Print on return
}

int main() {
    reverseString("Hello");         // Prints "olleH"
}
```

**Key Points:**
- Every recursive function needs a **base case** (termination condition)
- Avoid infinite recursion (stack overflow)
- Consider performance implications

---

## Block 3: Vectors and Pointers (24%)

### 3.1 Declare, Initialize, and Manipulate Vectors and Arrays

**1D Arrays:**
```cpp
int arr[5];                             // Uninitialized array
int arr2[5] = {1, 2, 3, 4, 5};         // Initialized
int arr3[] = {10, 20, 30};             // Size inferred (3)
int arr4[5] = {};                      // All zeros

// Access elements
arr[0] = 100;
cout << arr[2] << endl;

// Array size
cout << sizeof(arr) / sizeof(arr[0]) << endl;
```

**Vectors:**
```cpp
#include <vector>
using namespace std;

vector<int> v1;                         // Empty vector
vector<int> v2(5);                      // 5 elements, initialized to 0
vector<int> v3(5, 10);                  // 5 elements, all = 10
vector<int> v4 = {1, 2, 3, 4, 5};      // Initialize with list

// Add elements
v1.push_back(10);
v1.push_back(20);

// Access
cout << v1[0] << endl;                  // 10
cout << v1.at(1) << endl;               // 20 (bounds checking)

// Remove
v1.pop_back();                          // Removes last element

// Size
cout << v1.size() << endl;              // 1

// Clear
v1.clear();                             // Remove all elements

// Iterate
for (int i = 0; i < v1.size(); i++) {
    cout << v1[i] << endl;
}

for (int val : v1) {
    cout << val << endl;
}
```

**Multidimensional Arrays:**
```cpp
// 2D array
int matrix[3][4];                       // 3 rows, 4 columns
int matrix2[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

cout << matrix2[0][2] << endl;          // 3

// 3D array
int cube[2][3][4];                      // 2x3x4
cube[0][1][2] = 42;
```

**Vectors of Vectors (2D):**
```cpp
vector<vector<int>> matrix(3, vector<int>(4));  // 3x4 matrix
vector<vector<int>> matrix2 = {
    {1, 2, 3},
    {4, 5, 6}
};

cout << matrix2[1][2] << endl;          // 6

// Add row
matrix.push_back({10, 11, 12, 13});
```

---

### 3.2 Access Vector Data Using data() Method

```cpp
#include <vector>
using namespace std;

vector<int> v = {1, 2, 3, 4, 5};

// Get pointer to underlying array
int* ptr = v.data();

// Use like C-style array
cout << ptr[0] << endl;         // 1
cout << *(ptr + 2) << endl;     // 3

// Pass to C functions
void processArray(int* arr, int size);
processArray(v.data(), v.size());

// Iterate using pointer
for (int i = 0; i < v.size(); i++) {
    cout << *(ptr + i) << endl;
}
```

---

### 3.3 Declare and Initialize Pointers

**Pointer Declaration:**
```cpp
int x = 42;
int* ptr;               // Pointer to int
ptr = &x;               // Address-of operator

double* dptr;           // Pointer to double
char* cptr;             // Pointer to char
int** pptr;             // Pointer to pointer

// Initialize to nullptr
int* null_ptr = nullptr;
int* null_ptr2 = NULL;   // Old style
```

**Pointer Initialization:**
```cpp
int a = 10;
int* p1 = &a;           // Initialized at declaration

int* p2;
p2 = &a;                // Initialized after declaration

// Null pointer
int* p3 = nullptr;      // Safe null pointer (C++11+)
if (p3 == nullptr) {
    cout << "Null pointer" << endl;
}

// Uninitialized pointer (DANGEROUS!)
int* dangling;          // Contains garbage address
```

---

### 3.4 Dereference Pointers and Address-of Operator

**Dereference Operator (*):**
```cpp
int x = 42;
int* ptr = &x;

cout << *ptr << endl;           // 42 (dereference)
*ptr = 100;                     // Modify through pointer
cout << x << endl;              // 100

// Dereference for function calls
struct Node {
    int value;
    void print() { cout << value << endl; }
};

Node node;
Node* nodePtr = &node;
nodePtr->value = 5;             // Arrow operator (equivalent to (*nodePtr).value)
nodePtr->print();
```

**Address-of Operator (&):**
```cpp
int x = 42;
int* ptr = &x;                  // Get address of x
cout << &x << endl;             // Address (e.g., 0x7fff5fbff8ac)
cout << ptr << endl;            // Same address

string str = "hello";
string* strPtr = &str;          // Address of string

// In function parameters
void modify(int* ptr) {
    *ptr = 50;
}

int main() {
    int num = 10;
    modify(&num);               // Pass address
    cout << num << endl;        // 50
}
```

---

### 3.5 Pointer Conversions Using static_cast and dynamic_cast

**static_cast (Compile-time Conversion):**
```cpp
// Numeric conversions
double d = 3.14;
int i = static_cast<int>(d);    // i = 3

// Pointer conversions (base class to derived)
class Animal {};
class Dog : public Animal {};

Dog dog;
Animal* animalPtr = static_cast<Animal*>(&dog);  // Upcast (safe)

Animal animal;
Dog* dogPtr = static_cast<Dog*>(&animal);        // Downcast (unsafe, use dynamic_cast)

// void pointer conversions
int x = 42;
void* voidPtr = static_cast<void*>(&x);
int* intPtr = static_cast<int*>(voidPtr);
```

**dynamic_cast (Runtime Conversion with Type Checking):**
```cpp
// Requires virtual functions (polymorphic types)
class Animal {
public:
    virtual ~Animal() {}
};

class Dog : public Animal {};
class Cat : public Animal {};

Animal* animal = new Dog();

// Safe downcast - returns nullptr if not a Dog
Dog* dog = dynamic_cast<Dog*>(animal);
if (dog != nullptr) {
    cout << "It's a dog!" << endl;
} else {
    cout << "Not a dog" << endl;
}

// Dangerous without checking
Cat* cat = dynamic_cast<Cat*>(animal);
if (cat == nullptr) {
    cout << "Not a cat" << endl;
}

// With references (throws exception if invalid)
try {
    Dog& dogRef = dynamic_cast<Dog&>(*animal);
    cout << "Cast successful" << endl;
} catch (bad_cast) {
    cout << "Cast failed" << endl;
}
```

**Comparison:**
- `static_cast`: Checked at compile-time, faster, programmer responsible for correctness
- `dynamic_cast`: Checked at runtime, safer for polymorphic types, slight overhead

---

### 3.6 Manage Dynamic Memory with new, delete, and delete[]

**Single Object - new/delete:**
```cpp
// Allocate
int* ptr = new int;             // Uninitialized
int* ptr2 = new int(42);        // Initialize to 42
int* ptr3 = new int{100};       // C++11+ syntax

string* strPtr = new string("hello");

// Use
cout << *ptr2 << endl;
strPtr->length();

// Deallocate
delete ptr;
delete ptr2;
delete strPtr;

// Avoid use-after-delete (DANGEROUS)
delete ptr;
cout << *ptr << endl;          // Undefined behavior!

// Best practice: set to nullptr after delete
ptr = nullptr;
if (ptr != nullptr) {           // Safe check
    cout << *ptr << endl;
}
```

**Arrays - new[]/delete[]:**
```cpp
// Allocate array
int* arr = new int[5];          // Uninitialized
int* arr2 = new int[5]{1, 2, 3, 4, 5};  // Initialize

// Use
arr[0] = 10;
cout << *(arr + 1) << endl;

// Deallocate - MUST use delete[]
delete[] arr;
delete[] arr2;

// NOT delete arr;  // MEMORY LEAK!
```

**Memory Leak Example:**
```cpp
void leaky() {
    int* ptr = new int(42);
    if (someCondition) {
        return;             // Memory not freed!
    }
    delete ptr;
}

// Correct version
void notLeaky() {
    int* ptr = new int(42);
    if (someCondition) {
        delete ptr;
        return;
    }
    delete ptr;
}
```

**Smart Pointers (Modern C++11+, preferred):**
```cpp
#include <memory>

// unique_ptr - exclusive ownership
unique_ptr<int> uptr(new int(42));
cout << *uptr << endl;
// Automatically deleted when uptr goes out of scope

// shared_ptr - shared ownership
shared_ptr<int> sptr1(new int(42));
shared_ptr<int> sptr2 = sptr1;  // Reference count = 2
// Deleted when all shared_ptrs are destroyed

// make_unique / make_shared (preferred)
auto ptr = make_unique<int>(42);
auto sPtr = make_shared<string>("hello");
```

---

## Block 4: Structures and Strings (20%)

### 4.1 Declare and Define Structures

**Basic Structure:**
```cpp
struct Person {
    string name;
    int age;
    double height;
};

struct Point {
    int x;
    int y;
};

struct Node {
    int value;
    Node* next;      // Self-referential (for linked lists)
};
```

**Structure with Functions (Methods):**
```cpp
struct Rectangle {
    double width;
    double height;
    
    double area() {
        return width * height;
    }
    
    void print() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};
```

**Structure Initialization:**
```cpp
Person p1;              // Default initialization
p1.name = "Alice";
p1.age = 30;

Person p2 = {"Bob", 25, 5.9};     // Member initialization
Person p3{"Charlie", 35, 6.1};    // C++11+ uniform initialization

// Aggregate initialization
Rectangle rect = {10.5, 20.3};
```

---

### 4.2 Access Structure Members Using Dot Operator

**Direct Member Access:**
```cpp
struct Point {
    int x, y;
};

Point p;
p.x = 10;               // Assign
p.y = 20;
cout << p.x << endl;    // Access

int sum = p.x + p.y;
```

**Function Members:**
```cpp
struct Student {
    string name;
    int gpa;
    
    void displayInfo() {
        cout << "Name: " << name << ", GPA: " << gpa << endl;
    }
};

Student s;
s.name = "Alice";
s.displayInfo();        // Call member function
```

**Nested Structures:**
```cpp
struct Address {
    string street;
    string city;
};

struct Person {
    string name;
    Address addr;       // Nested struct
};

Person p;
p.name = "Bob";
p.addr.street = "123 Main St";  // Access nested member
p.addr.city = "NYC";
```

---

### 4.3 Declare Vectors of Structures and Access Fields

**Vector of Structures:**
```cpp
struct Employee {
    string name;
    int id;
    double salary;
};

vector<Employee> employees;

// Add elements
Employee e1 = {"Alice", 101, 50000};
employees.push_back(e1);

Employee e2{"Bob", 102, 55000};
employees.push_back(e2);

employees.push_back({"Charlie", 103, 60000});

// Access elements
cout << employees[0].name << endl;      // Alice
cout << employees[1].salary << endl;    // 55000

// Modify
employees[2].salary = 62000;

// Iterate
for (int i = 0; i < employees.size(); i++) {
    cout << employees[i].name << " - " << employees[i].id << endl;
}

// Range-based for loop
for (Employee& emp : employees) {
    cout << emp.name << " earns " << emp.salary << endl;
}

for (const Employee& emp : employees) {
    cout << emp.id << endl;             // Read-only
}
```

**Pointers to Structures:**
```cpp
vector<Employee> emps;
emps.push_back({"Alice", 101, 50000});

// Pointer to element
Employee* ptr = &emps[0];
cout << ptr->name << endl;              // Arrow operator
cout << (*ptr).name << endl;            // Equivalent

// Modify through pointer
ptr->salary = 51000;
```

---

### 4.4 Declare, Initialize, and Manipulate std::string Objects

**Declaration and Initialization:**
```cpp
#include <string>
using namespace std;

string s1;                              // Empty string
string s2 = "Hello";                    // Initialize from C-string
string s3("World");                     // Constructor syntax
string s4(5, 'a');                      // 5 'a' characters: "aaaaa"
string s5(s2);                          // Copy from another string
string s6 = s2;                         // Copy assignment

// C++11+
string s7{"C++ String"};
```

**Common Operations:**
```cpp
string str = "Hello";

// Length
cout << str.length() << endl;           // 5
cout << str.size() << endl;             // Same as length()

// Access characters
cout << str[0] << endl;                 // 'H'
cout << str.at(1) << endl;              // 'e' (with bounds checking)

// Concatenation
string result = str + " World";         // "Hello World"
str += "!";                             // "Hello!"

// Append
str.append(" How are you?");

// Insert
str.insert(5, " beautiful");            // Insert at position 5

// Replace
str.replace(0, 5, "Goodbye");           // Replace "Hello" with "Goodbye"

// Substring
string sub = str.substr(0, 5);          // First 5 characters
string sub2 = str.substr(5);            // From position 5 to end

// Find
int pos = str.find("World");            // Position of "World"
if (pos != string::npos) {
    cout << "Found at position " << pos << endl;
}

// Erase
str.erase(0, 5);                        // Remove first 5 characters
str.erase();                            // Clear entire string

// Empty check
if (str.empty()) {
    cout << "String is empty" << endl;
}

// Clear
str.clear();                            // Remove all characters
```

---

### 4.5 Perform Basic String Operations and Comparisons

**String Comparisons:**
```cpp
string s1 = "Apple";
string s2 = "apple";
string s3 = "Apple";

// Equality
if (s1 == s3) {
    cout << "Strings are equal" << endl;
}

// Inequality
if (s1 != s2) {
    cout << "Case matters!" << endl;
}

// Lexicographic comparison
if (s1 < s2) {
    cout << "s1 comes before s2" << endl;  // 'A' < 'a' in ASCII
}

if (s1 > s2) {
    cout << "s1 comes after s2" << endl;
}

// compare() method
if (s1.compare(s3) == 0) {
    cout << "Strings are equal" << endl;
}

int result = s1.compare(s2);  // Returns negative, 0, or positive

// Case-insensitive comparison
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
if (s1 == s2) {
    cout << "Equal (ignoring case)" << endl;
}
```

**Common String Operations:**
```cpp
string str = "  Hello World  ";

// Trim (remove leading/trailing spaces)
str.erase(0, str.find_first_not_of(" "));
str.erase(str.find_last_not_of(" ") + 1);

// Reverse
reverse(str.begin(), str.end());

// Upper/Lower case
string upper = str;
transform(upper.begin(), upper.end(), upper.begin(), ::toupper);

string lower = str;
transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

// Split string (find delimiter)
string sentence = "The quick brown fox";
vector<string> words;
stringstream ss(sentence);
string word;
while (ss >> word) {
    words.push_back(word);
}

// Replace character
replace(str.begin(), str.end(), ' ', '_');  // Replace spaces with underscores

// Count occurrences
int count = 0;
for (char c : str) {
    if (c == 'o') count++;
}
```

---

## Quick Reference

### Keywords Summary
| Category | Keywords |
|----------|----------|
| Data Types | `int`, `float`, `double`, `char`, `bool`, `void`, `string` |
| Control Flow | `if`, `else`, `switch`, `case`, `default` |
| Loops | `for`, `while`, `do` |
| Loop Control | `break`, `continue`, `goto` |
| Functions | `return` |
| Modifiers | `const`, `static`, `extern`, `volatile` |
| Other | `using`, `namespace`, `nullptr` |

### Operators Quick Lookup
- **Arithmetic:** `+`, `-`, `*`, `/`, `%`
- **Relational:** `==`, `!=`, `<`, `>`, `<=`, `>=`
- **Logical:** `&&`, `||`, `!`
- **Bitwise:** `&`, `|`, `^`, `~`, `<<`, `>>`
- **Assignment:** `=`, `+=`, `-=`, `*=`, `/=`, `%=`
- **Increment/Decrement:** `++`, `--`
- **Other:** `?:` (ternary), `&` (address-of), `*` (dereference), `->` (member access via pointer)

### Common Headers
```cpp
#include <iostream>    // Input/output
#include <vector>      // Dynamic arrays
#include <string>      // String handling
#include <iomanip>     // Output manipulators
#include <algorithm>   // Algorithms (sort, reverse, etc.)
#include <memory>      // Smart pointers
#include <sstream>     // String streams
#include <cmath>       // Math functions
#include <cstdlib>     // Standard library functions
```

---

## Exam Preparation Checklist

### Block 1: Syntax, Literals, and Operators (28%)
- [ ] Understand all C++ keywords and their usage
- [ ] Know all primitive data types and their ranges
- [ ] Be able to write valid main() functions with parameters
- [ ] Master all operator types (arithmetic, logical, bitwise)
- [ ] Memorize operator precedence and associativity
- [ ] Understand short-circuit logic evaluation
- [ ] Practice cin, cout, cerr with manipulators
- [ ] Complete all 9 exam items related to this block

### Block 2: Flow Control and Functions (28%)
- [ ] Write conditional statements (if/else) correctly
- [ ] Use all loop constructs (for, while, do-while)
- [ ] Apply break and continue appropriately
- [ ] Understand goto and labeled statements
- [ ] Use switch-case statements with proper break statements
- [ ] Define and declare functions with proper syntax
- [ ] Use return statements in typed and void functions
- [ ] Master pass-by-value, pass-by-reference, and pass-by-pointer
- [ ] Write and debug recursive functions
- [ ] Complete all 8 exam items related to this block

### Block 3: Vectors and Pointers (24%)
- [ ] Declare and initialize arrays and vectors
- [ ] Work with multidimensional arrays and vectors
- [ ] Use vector.data() method correctly
- [ ] Declare pointers and use nullptr
- [ ] Dereference pointers and use address-of operator
- [ ] Perform static_cast and dynamic_cast conversions
- [ ] Manage memory with new, delete, and delete[]
- [ ] Understand and prevent memory leaks
- [ ] Complete all 7 exam items related to this block

### Block 4: Structures and Strings (20%)
- [ ] Declare and define structures
- [ ] Access structure members with dot operator
- [ ] Create vectors of structures
- [ ] Declare and initialize strings
- [ ] Perform string operations (append, substr, find)
- [ ] Compare strings correctly
- [ ] Complete all 6 exam items related to this block

### General Tips
- [ ] Practice writing code for each concept
- [ ] Review operator precedence multiple times
- [ ] Test pointer and memory management thoroughly
- [ ] Understand the difference between arrays and vectors
- [ ] Know when to use pass-by-reference vs pass-by-pointer
- [ ] Review short-circuit logic with examples
- [ ] Practice string manipulation operations
- [ ] Be comfortable with both C-style and modern C++ syntax
- [ ] Take practice exams to assess readiness

---

## Additional Resources

**Topics to Practice:**
1. Write programs using all loop types
2. Create and manipulate structures with data
3. Implement recursive functions
4. Practice dynamic memory allocation
5. Work with vector and string operations
6. Solve problems requiring multiple concepts

**Debugging Tips:**
- Use `cout` to trace program execution
- Check pointer validity before dereferencing
- Verify loop conditions and termination
- Test edge cases (empty containers, nullptr, etc.)
- Understand the difference between output and error streams

**Common Mistakes to Avoid:**
- Forgetting `break;` in switch cases
- Mixing `delete` with `delete[]`
- Using uninitialized variables
- Off-by-one errors in loops
- Accessing out-of-bounds array indices
- Memory leaks from forgotten `delete` calls
- Incorrect operator precedence assumptions
- Confusion between reference and pointer parameters

---

**Good luck on your CPE C++ exam! Practice consistently and master the fundamentals.**
