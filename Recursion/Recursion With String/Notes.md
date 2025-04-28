# 📌 **Recursion with Strings in C++ - Complete Guide**

## 1. 🔄 **Recursive String Processing Fundamentals**

### 🔹 Key Concepts
- **String as Char Array**: Treat strings as null-terminated character sequences
- **Base Case**: Typically empty string or single character
- **Recursive Case**: Process first/last character + recurse on substring

### 📊 Recursive String Processing Flow
```
+-----------------------+
| Check Base Case       | → String length 0/1?
+-----------+-----------+
            |
+-----------v-----------+
| Process Current Char  | → First/last character operations
+-----------+-----------+
            |
+-----------v-----------+
| Recurse on Substring  | → s.substr(1) or s.erase(-1)
+-----------------------+
```

## 2. 🧩 **Solved String Problems**

### 🔹 1. Reverse a String
**Approach**: Take last character + reverse remaining string

```cpp
string reverseString(string s) {
    // Base case
    if (s.length() <= 1) return s;
    
    // Get last character + reverse substring
    return s.back() + reverseString(s.substr(0, s.length()-1));
}
```

**Execution Flow** (for "hello"):
```
reverse("hello")
  'o' + reverse("hell")
    'l' + reverse("hel")
      'l' + reverse("he")
        'e' + reverse("h")
          returns "h"
        returns "eh"
      returns "leh"
    returns "lleh"
  returns "olleh"
```

### 🔹 2. Check Palindrome
**Approach**: Compare first/last chars → recurse on middle

```cpp
bool isPalindrome(string s) {
    // Base cases
    if (s.length() <= 1) return true;
    if (s[0] != s.back()) return false;
    
    // Recurse on substring without first/last chars
    return isPalindrome(s.substr(1, s.length()-2));
}
```

**Call Stack Visualization** (for "madam"):
```
isPalindrome("madam")
  'm' == 'm' → isPalindrome("ada")
    'a' == 'a' → isPalindrome("d")
      returns true
```

### 🔹 3. Calculate Exponent (xⁿ)
**Approach**: x * xⁿ⁻¹ (linear) or (xⁿ/²)² (logarithmic)

```cpp
// Linear version
double power(double x, int n) {
    if (n == 0) return 1;          // Base case
    return x * power(x, n-1);      // Recursive case
}

// Optimized logarithmic version
double powerFast(double x, int n) {
    if (n == 0) return 1;
    
    double half = powerFast(x, n/2);
    if (n % 2 == 0) return half * half;
    else return x * half * half;
}
```

### 🔹 4. Remove All Occurrences
**Remove specific character from string**:

```cpp
string removeChar(string s, char c) {
    if (s.empty()) return "";  // Base case
    
    // Check first character
    string rest = removeChar(s.substr(1), c);
    return (s[0] == c) ? rest : s[0] + rest;
}
```

### 🔹 5. Count Character Occurrences
```cpp
int countChar(string s, char c) {
    if (s.empty()) return 0;  // Base case
    return (s[0] == c) + countChar(s.substr(1), c);
}
```

## 3. 🛠️ **String Recursion Patterns**

### 🔹 Prefix Processing
```cpp
void printPrefix(string s) {
    if (s.empty()) return;
    cout << s[0];           // Process first char
    printPrefix(s.substr(1)); // Recurse
}
```

### 🔹 Suffix Processing
```cpp
void printSuffix(string s) {
    if (s.empty()) return;
    printSuffix(s.substr(1)); // Recurse first
    cout << s[0];             // Process later (reverse)
}
```

### 🔹 Subsequence Generation
```cpp
void printSubsequences(string s, string current = "") {
    if (s.empty()) {
        cout << current << " ";
        return;
    }
    // Include first character
    printSubsequences(s.substr(1), current + s[0]);
    // Exclude first character
    printSubsequences(s.substr(1), current);
}
```

## 4. ⚠️ **Common Mistakes & Solutions**

| Mistake | Example | Fix |
|---------|---------|-----|
| Forgetting base case | Infinite recursion | Check `s.empty()` or `s.length()` |
| Inefficient substring ops | Creating many temp strings | Use index parameters |
| Case sensitivity issues | 'A' vs 'a' comparisons | Convert to uniform case first |

## 5. 📝 **Advanced String Problems**

### Permutations of String
```cpp
void permute(string s, int l, int r) {
    if (l == r) cout << s << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);
            permute(s, l+1, r);
            swap(s[l], s[i]); // backtrack
        }
    }
}
```

### Remove Duplicates
```cpp
string removeDup(string s) {
    if (s.length() <= 1) return s;
    if (s[0] == s[1]) return removeDup(s.substr(1));
    return s[0] + removeDup(s.substr(1));
}
```

## 6. 🎯 **Key Takeaways**

1. **String as Recursive Structure**: First character + remaining substring
2. **Multiple Approaches**: Can process from start or end
3. **Efficiency Considerations**: Avoid excessive substring copies
4. **Character Operations**: Case conversion often needed
5. **Complex Problems**: Permutations, subsets etc. solvable via recursion
