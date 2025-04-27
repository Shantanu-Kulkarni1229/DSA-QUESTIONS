# 📌 **Recursion with Arrays in C++ - Complete Guide**

## 1. 🔄 **Recursive Thinking with Arrays**

### 🔹 Key Concepts
- **Divide & Conquer**: Break array into smaller subproblems
- **Base Case**: Typically empty/single-element array
- **Recursive Case**: Process current element + recurse on remaining array

### 📊 Recursive Array Processing Flow
```
+-----------------------+
| Check Base Case       | → Array size 0/1?
+-----------+-----------+
            |
+-----------v-----------+
| Process Current Element| → Check/Modify first/last element
+-----------+-----------+
            |
+-----------v-----------+
| Recurse on Sub-array  | → Array + 1 or size - 1
+-----------------------+
```

## 2. 🧩 **Solved Problems**

### 🔹 1. Check if Array is Sorted
**Approach**: Compare first two elements → recurse on remaining array

```cpp
bool isSorted(int arr[], int n) {
    // Base case
    if (n == 0 || n == 1) return true;
    
    // Processing + Recursive case
    if (arr[0] > arr[1]) return false;
    return isSorted(arr + 1, n - 1);
}
```

**Execution Flow** (for `[2,4,5,8]`):
```
isSorted([2,4,5,8],4)
  2 < 4 → isSorted([4,5,8],3)
    4 < 5 → isSorted([5,8],2)
      5 < 8 → isSorted([8],1)
        returns true
```

### 🔹 2. Sum of Array Elements
**Approach**: First element + sum of remaining array

```cpp
int arraySum(int arr[], int n) {
    // Base case
    if (n == 0) return 0;
    
    // Recursive case
    return arr[0] + arraySum(arr + 1, n - 1);
}
```

**Call Stack Visualization** (for `[1,3,5]`):
```
arraySum([1,3,5],3)
  1 + arraySum([3,5],2)
    3 + arraySum([5],1)
      5 + arraySum([],0)
        0
      returns 5
    returns 8
  returns 9
```

### 🔹 3. Linear Search
**Approach**: Check current element → recurse if not found

```cpp
int linearSearch(int arr[], int n, int key) {
    // Base cases
    if (n == 0) return -1;
    if (arr[0] == key) return 0;
    
    // Recursive case
    int idx = linearSearch(arr + 1, n - 1, key);
    return (idx == -1) ? -1 : idx + 1;
}
```

### 🔹 4. Binary Search (Recursive)
**Approach**: Divide array in halves → recurse on relevant half

```cpp
int binarySearch(int arr[], int low, int high, int key) {
    // Base case
    if (low > high) return -1;
    
    int mid = low + (high - low)/2;
    
    // Processing
    if (arr[mid] == key) return mid;
    
    // Recursive cases
    if (arr[mid] < key) 
        return binarySearch(arr, mid + 1, high, key);
    else 
        return binarySearch(arr, low, mid - 1, key);
}
```

**Execution Tree** (for `[2,4,6,8,10]` searching 8):
```
binarySearch(0,4)
mid=2 (6 < 8) → binarySearch(3,4)
  mid=3 (8 == 8) → return 3
```

## 3. 🛠️ **Patterns for Array Recursion**

### 🔹 Forward Traversal
```cpp
void processForward(int arr[], int n, int i = 0) {
    if (i == n) return;          // Base case
    cout << arr[i] << " ";       // Process current
    processForward(arr, n, i+1); // Recurse forward
}
```

### 🔹 Backward Traversal
```cpp
void processBackward(int arr[], int n) {
    if (n == 0) return;         // Base case
    processBackward(arr + 1, n - 1); // Recurse first
    cout << arr[0] << " ";      // Process later (reverse)
}
```

## 4. ⚠️ **Common Mistakes & Solutions**

| Mistake | Example | Fix |
|---------|---------|-----|
| Forgetting base case | Infinite recursion | Always check array size |
| Incorrect pointer math | `arr++` instead of `arr + 1` | Use pointer arithmetic carefully |
| Off-by-one errors | Processing n elements instead of n-1 | Double-check indices |

## 5. 📝 **Practice Problems**

1. **Find Maximum**: Compare first element with max of remaining array
```cpp
int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[0], findMax(arr + 1, n - 1));
}
```

2. **Reverse Array**: Swap first/last → recurse on middle
```cpp
void reverse(int arr[], int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    reverse(arr, start + 1, end - 1);
}
```

3. **Count Occurrences**: Check first element → recurse
```cpp
int countX(int arr[], int n, int x) {
    if (n == 0) return 0;
    return (arr[0] == x) + countX(arr + 1, n - 1, x);
}
```

## 6. 🎯 **Key Takeaways**

1. **Base Case Matters**: Typically empty/single-element array
2. **Pointer Arithmetic**: `arr + 1` moves to next element
3. **Efficiency**: Binary search (O(log n)) vs linear (O(n))
4. **Multiple Approaches**: Can process first/last/middle elements
5. **Stack Usage**: Deep recursion may cause overflow for large arrays

---

