
# 📌 Reference Variables & Dynamic Memory Allocation in C++

## 1. 🔄 **Reference Variables**

### 🔹 What is a Reference Variable?
A **reference** is an alias (another name) for an existing variable.  
- Must be initialized when declared.
- Cannot be reassigned to refer to another variable.
- Syntax: `dataType &ref = originalVar;`

```cpp
int num = 10;
int &ref = num;  // 'ref' is now an alias for 'num'
```

### 🔹 Why Were References Introduced?
1. **Simpler Syntax**: Cleaner than pointers for pass-by-reference.
2. **Safety**: Cannot be null or reassigned.
3. **Mandatory Initialization**: Prevents uninitialized use.

### 🔹 Key Properties
| Property          | Reference (`&`)       | Pointer (`*`)          |
|-------------------|-----------------------|------------------------|
| **Reassignment**  | ❌ Not allowed        | ✅ Allowed             |
| **Null Value**    | ❌ Impossible         | ✅ Possible            |
| **Syntax**        | `int &ref = x;`       | `int* ptr = &x;`       |

### 🔹 Use Case: Function Parameters
```cpp
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);  // x=10, y=5 (original values modified)
}
```

### 📊 Memory Diagram
```
+-----+     +-----+
| num | <-- | ref |  
| 10  |     +-----+
+-----+
```

---

## 2. 💾 **Dynamic Memory Allocation**

### 🔹 Stack vs. Heap Memory
| Feature          | Stack Memory                     | Heap Memory                      |
|------------------|----------------------------------|----------------------------------|
| **Lifetime**     | Automatic (scope-bound)          | Manual (`new`/`delete`)          |
| **Speed**        | Faster                           | Slower                           |
| **Size Limit**   | Small (OS-dependent)             | Large (limited by system RAM)    |
| **Management**   | Compiler-managed                 | Programmer-managed               |

### 🔹 The `new` Keyword
Allocates memory in the **heap** and returns a pointer to it.

```cpp
int* ptr = new int;      // Allocates 1 integer
*ptr = 42;               // Stores value 42
delete ptr;              // Frees memory
```

### 🔹 Dynamic Arrays (Runtime Size)
```cpp
int size;
cout << "Enter array size: ";
cin >> size;

int* arr = new int[size]; // Heap allocation

for (int i = 0; i < size; i++) {
    arr[i] = i * 10;
}

delete[] arr; // Must use delete[] for arrays
```

### 🔹 Why Use Heap for Arrays?
- **Flexibility**: Size determined at runtime.
- **Large Data**: Avoids stack overflow for big arrays.

### 📊 Memory Layout (ASCII)
```
Stack:
+------+
| arr  | --> Heap: [0][10][20][...][size-1]
+------+
```

---

## 🧩 **Key Differences: Reference vs. Pointer**
```cpp
int num = 10;
int &ref = num;  // Reference
int* ptr = &num; // Pointer

// Reassignment
ptr = nullptr;   // ✅ Allowed
// &ref = y;     // ❌ Compile Error (references are fixed)
```

---

## ⚠️ **Common Pitfalls**
1. **Memory Leaks**:
   ```cpp
   int* p = new int(100);
   // Forgot delete p; → Memory leak!
   ```
2. **Dangling References**:
   ```cpp
   int& func() {
       int x = 5;
       return x; // ❌ Returns reference to local variable
   }
   ```
3. **Double Deletion**:
   ```cpp
   int* p = new int;
   delete p;
   delete p; // ❌ Undefined behavior!
   ```

---

## 🛠️ **Practical Example: Resizable Array**
```cpp
int* resizeArray(int* oldArr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    for (int i = 0; i < min(oldSize, newSize); i++) {
        newArr[i] = oldArr[i];
    }
    delete[] oldArr;
    return newArr;
}
```

---

## 📝 **Summary**
1. **References**:
   - Aliases for variables.
   - Must be initialized, cannot be null.
   - Used for clean pass-by-reference.

2. **Dynamic Memory**:
   - Heap allocation via `new`/`delete`.
   - Enables runtime-sized arrays.
   - Manual management required (avoid leaks).

---

❓ **Need clarification?** Ask for diagrams/code walkthroughs!  
```