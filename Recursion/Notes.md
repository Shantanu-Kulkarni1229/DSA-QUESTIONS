# 📌 **Recursion in C++ - Complete Guide**

## 1. 🔄 **Understanding Recursion**

### 🔹 What is Recursion?
A function calling **itself** directly/indirectly to solve smaller instances of the same problem.

```cpp
void recurse() {
    recurse();  // Infinite recursion (crash!)
}
```

### 🔹 Key Components
| Component         | Description                                                                 |
|-------------------|-----------------------------------------------------------------------------|
| **Base Condition**| Stopping condition to prevent infinite recursion (MOST CRUCIAL)             |
| **Recursive Case**| Where function calls itself with modified parameters                        |
| **Processing**    | Operations done before/after recursive call (`pre`/`post` processing)       |

### 📊 Recursion Flow Diagram
```
       +---------------+
       |  Function Call |
       +-------┬-------+
               |
+--------------v------------------+
| Base Condition Check:           |
| if (condition) return value;    |
+--------------+------------------+
               |
       +-------v-------+
       |  Processing   |  (Optional: print, calculations)
       +-------┬-------+
               |
       +-------v-------+
       | Recursive Call|  (with modified parameters)
       +---------------+
```

---

## 2. 🧩 **Recursion Problem Solving**

### 🔹 1. Factorial Calculation
```cpp
int factorial(int n) {
    // Base case
    if (n == 0) return 1;
    
    // Recursive case + processing
    return n * factorial(n-1);
}
```
**Call Stack Visualization** (for `factorial(3)`):
```
factorial(3)
  3 * factorial(2)
    2 * factorial(1)
      1 * factorial(0)
        returns 1
      returns 1
    returns 2
  returns 6
```

### 🔹 2. Power of a Number
```cpp
double power(double x, int n) {
    if (n == 0) return 1;          // Base case
    return x * power(x, n-1);      // Recursive case
}
```
**Optimized Version** (logarithmic time):
```cpp
double power(double x, int n) {
    if (n == 0) return 1;
    
    double temp = power(x, n/2);
    if (n % 2 == 0) return temp * temp;
    else return x * temp * temp;
}
```

### 🔹 3. Fibonacci Series
```cpp
int fib(int n) {
    if (n == 0) return 0;       // Base cases
    if (n == 1) return 1;
    
    return fib(n-1) + fib(n-2); // Recursive case
}
```
**Recursion Tree** (for `fib(4)`):
```
        fib(4)
       /      \
    fib(3)    fib(2)
    /   \     /   \
fib(2) fib(1) fib(1) fib(0)
/   \
fib(1) fib(0)
```

### 🔹 4. Walking Game (Count Paths)
Problem: Count ways to reach end of path (n steps) with 1/2 step moves.
```cpp
int countPaths(int n) {
    if (n < 0) return 0;        // Invalid path
    if (n == 0) return 1;       // Reached destination
    
    return countPaths(n-1) + countPaths(n-2);
}
```

### 🔹 5. Say Digits (Spell Numbers)
```cpp
void sayDigit(int n) {
    string digits[10] = {"Zero", "One", ..., "Nine"};
    
    // Base case
    if (n == 0) return;
    
    int lastDigit = n % 10;
    sayDigit(n/10);  // Recursive call first (to print in order)
    cout << digits[lastDigit] << " ";
}
```
**Execution Flow** (for `sayDigit(412)`):
```
sayDigit(412)
  sayDigit(41)
    sayDigit(4)
      sayDigit(0) → returns
    prints "Four"
  prints "One"
prints "Two"
Output: "Four One Two"
```

---

## 3. ⚠️ **Recursion Pitfalls & Optimization**

### 🔹 Common Mistakes
1. **Missing Base Case**: Infinite recursion → stack overflow
2. **Wrong Recursive Formula**: Incorrect problem breakdown
3. **Redundant Calculations**: Seen in Fibonacci (solved via memoization)

### 🔹 Optimization Techniques
| Technique       | Description                          | Example           |
|-----------------|--------------------------------------|-------------------|
| **Memoization** | Cache results to avoid recomputation | Fibonacci with DP |
| **Tail Recursion** | Recursive call is last operation | Convert to loop   |

**Tail-Recursive Factorial**:
```cpp
int factorial(int n, int accumulator = 1) {
    if (n == 0) return accumulator;
    return factorial(n-1, n * accumulator); // Tail call
}
```

---

## 4. 📊 **Recursion vs Iteration**

| Aspect          | Recursion                          | Iteration                    |
|-----------------|------------------------------------|------------------------------|
| **Code Size**   | Compact                            | More lines                   |
| **Memory**      | Uses call stack (risk of overflow) | Minimal (fixed variables)    |
| **Speed**       | Slower (function call overhead)    | Faster                       |
| **Use Case**    | Tree/graph problems, divide-conquer| Simple loops, linear processing |

---

## 5. 🧠 **How Recursion Works Internally**
1. **Call Stack**: Each call pushes a stack frame (parameters, return address)
2. **Stack Overflow**: ~10,000-100,000 nested calls (compiler-dependent)
3. **Memory Layout**:
```
+-------------------+
|   Stack (LIFO)    |
|-------------------|
| factorial(3)      |
| factorial(2)      |
| factorial(1)      |
| factorial(0)      |
+-------------------+
|       Heap        |
+-------------------+
```

---

## 6. 🛠️ **When to Use Recursion?**
✅ **Good For**:
- Problems with recursive nature (trees, graphs)
- Divide-and-conquer algorithms (merge sort)
- Backtracking problems

❌ **Avoid When**:
- Simple loops suffice
- Performance is critical
- Deep recursion depth expected

---

## 7. 📝 **Practice Problems**
1. **Sum of Digits**: `sumDigits(n) = n%10 + sumDigits(n/10)`
2. **Palindrome Check**: Compare first/last chars recursively
3. **Tower of Hanoi**: Classic recursion problem
4. **Binary Search**: Recursive divide-and-conquer

```cpp
// Binary Search Example
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}
```

---

## 🎯 **Key Takeaways**
1. Always define a **base case** first
2. Ensure parameters move toward base case
3. Consider **stack overflow** for deep recursion
4. Use recursion for **elegant solutions** to complex problems
5. **Optimize** with memoization/tail recursion when needed

---

