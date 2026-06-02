# ⚡ Algorithms & Systems

<div align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++"/>
  <img src="https://img.shields.io/badge/Concurrency-Parallelism-blueviolet?style=for-the-badge" alt="Concurrency"/>
</div>

Welcome to the **Algorithms & Systems** repository. This project serves as an organized collection of advanced C++ implementations, focusing heavily on system-level programming, competitive programming algorithms, and modern C++ concurrency mechanisms.

## 🚀 Systems & Concurrency Module (`Learning/Random/`)

The core highlight of this repository is the deep dive into system operations, memory management, and multithreading available under the `Learning/Random/` directory.

### Key Concepts Implemented:
- **Multithreading & Synchronization (`multithreading.cpp`, `thread_sync.cpp`)**: Implementation of multi-threaded architectures showing how to effectively spawn and join threads, utilizing hardware concurrency.
- **Mutexes & Locks (`mutex.cpp`, `recursive_mutex.cpp`, `timed_mutex.cpp`)**: Advanced locking mechanisms to prevent data races in shared resources. Covers standard `std::mutex`, `std::unique_lock`, `std::lock_guard`, and timed variations.
- **Condition Variables (`condition_variable.cpp`)**: Event-driven thread synchronization allowing threads to efficiently wait for complex state changes.
- **Producer-Consumer Pattern (`prod_con.cpp`)**: A robust implementation of the classic Producer-Consumer problem using bounded buffers, threads, and condition variables.
- **Asynchronous Execution (`async.cpp`, `future.cpp`)**: Deferred and asynchronous function execution leveraging `std::async`, `std::promise`, and `std::future` to retrieve values from worker threads.
- **Smart Pointers (`shared_ptr.cpp`, `unique_ptr.cpp`, `weak_ptr.cpp`)**: Safe and automatic memory management to completely prevent memory leaks and dangling pointers in complex systems.
- **Advanced C++ Features (`lambdas.cpp`, `function_pointers.cpp`)**: Exploiting modern C++11/C++14/C++17 functional paradigms to write modular, high-performance callback systems.

## 🧠 Usage & Compilation

Since this repository contains pure system-level C++ code, you will need a compiler that supports at least C++11 (preferably C++17) and the pthread library on Unix systems.

```bash
# Example: Compiling the multithreading implementation
g++ -std=c++17 -pthread Learning/Random/multithreading.cpp -o multithreading
./multithreading
```

## 🎯 About

Created by **[Arihant Kumar Jain](https://github.com/Arihant-Kumar-Jain)** as a repository for continuous system-level programming exploration and advanced algorithmic competitive programming.
