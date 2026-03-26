# Power of Two Check (Bit Manipulation)

This repository contains a highly optimized C++ solution to determine if a given integer is a power of two using bitwise operations.

---

## 💡 The Logic

A number that is a power of 2 (like 2, 4, 8, 16) has exactly **one bit set to 1** in its binary representation.

* **Example (n = 8):** `1000`
* **Example (n - 1 = 7):** `0111`

When you perform a bitwise `AND` (`&`) between `n` and `n-1`, the result will always be `0` if `n` is a power of two because there are no overlapping `1` bits.

## 📊 Complexity Analysis

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(1)$ | The check happens in a single CPU cycle regardless of how large the number is. |
| **Space Complexity** | $O(1)$ | No extra memory is used. |

---

## 💻 Code Overview

The implementation uses a single conditional check:

```cpp
if (n > 0 && (n & (n-1)) == 0 ) {
    cout << "The N is power of 2!";
}

```
## 📝 Example Output
```
Enter N : 16
The N is power of 2 !
```
##  🛠️ How to Run 
Compile:
```
g++ main.cpp -o power_check
```
Execute: 
```
./power_check
```
