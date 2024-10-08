# 🚀 Merge Sort in C++ (Linked List Implementation)

Welcome to the **Merge Sort** implementation in C++! This repository showcases an efficient Merge Sort algorithm using a **Linked List**. Whether you're learning sorting algorithms or need a linked list-based sorting solution, this project is a great resource.

[![View Repository](https://img.shields.io/badge/View-Repository-blue.svg)](https://github.com/sjd-1214/Sorting.git)

## 📖 Table of Contents
1. [Introduction](#-introduction)
2. [Features](#-features)
3. [How Merge Sort Works](#-how-merge-sort-works)
4. [Code Overview](#-code-overview)
5. [How to Run](#-how-to-run)
6. [Contributing](#-contributing)
7. [Contact](#-contact)
8. [License](#-license)

---

## 📝 Introduction

Merge Sort is one of the most efficient sorting algorithms, following the **divide and conquer** approach. This project implements the Merge Sort algorithm using a **Linked List** in C++, focusing on dynamic memory management, which adds flexibility and demonstrates real-world applications.

---

## ✨ Features

- **Efficient Performance**: Runs in O(n log n) time, optimal for large datasets.
- **Linked List Based**: Implements the sorting algorithm using linked lists instead of arrays.
- **Structured Code**: Modular design with separate functions like `findMiddle`, `merge`, and `sortList`.
- **Dynamic Memory Handling**: Demonstrates effective usage of dynamic memory allocation and deallocation in C++.
- **Documentation**: Includes comments and explanations to make the code easy to understand and modify.

---

## 💡 How Merge Sort Works

Merge Sort recursively breaks down the list into smaller parts, sorts them, and then merges them back together. The process is straightforward and follows these steps:

1. **Divide**: Split the list into two halves.
2. **Conquer**: Recursively sort both halves.
3. **Combine**: Merge the two sorted halves back into one.

### **Step-by-step Visualization:**

```text
Original List:  [38, 27, 43, 3, 9, 82, 10]
Split into:     [38, 27, 43, 3]  [9, 82, 10]
Split further:  [38, 27] [43, 3] [9] [82, 10]
Sorted halves:  [27, 38] [3, 43] [9] [10, 82]
Merged List:    [3, 27, 38, 43, 9, 10, 82]
Final Sorted:   [3, 9, 10, 27, 38, 43, 82]

```
## 💻 Code Overview

This implementation consists of the following key functions:

- `findMiddle(Node* head)`: Finds the middle node of the linked list to split it into two halves.
- `merge(Node* left, Node* right)`: Merges two sorted linked lists into one.
- `sortList(Node* head)`: The recursive function that sorts the linked list using Merge Sort.

### Key Components:
```cpp
Node* findMiddle(Node* head);
Node* merge(Node* left, Node* right);
Node* sortList(Node* head);
```
## 🚀 How to Run

### Prerequisites

Ensure you have a C++ compiler set up on your system (e.g., GCC or Clang).

### Steps to Run:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/merge-sort-cpp.git
   cd merge-sort-cpp

2. Compile the code using C++ compiler:
    ```bash
    g++ -o mergesort merge_sort.cpp

3. Run the executable:
    ```bash
    ./mergesort

## 🤝 Contributing

Contributions are always welcome! Whether it's fixing bugs, improving documentation, or adding new features, feel free to open a **pull request** or submit an **issue**.

### To Contribute:

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/my-feature`).
3. Commit your changes (`git commit -am 'Add my feature'`).
4. Push to the branch (`git push origin feature/my-feature`).
5. Create a new **Pull Request**.

You can view the repository here: [Merge Sort in C++](https://github.com/sjd-1214/Sorting.git).

---

## 📧 Contact

If you need personal assistance, further explanation, or a deep dive into the project, feel free to contact me at **[sjdgithub1214@gmail.com](mailto:sjdgithub1214@gmail.com)**. For extensive support, consultation may be subject to a fee.

---

## 📜 License

This project is licensed under the MIT License. You are free to use, modify, and distribute this project in accordance with the terms of the license.

---

Happy Coding! 🎉
