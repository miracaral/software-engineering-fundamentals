# Software Engineering Fundamentals

Code I wrote while building my programming foundations during my Computer Engineering studies at Süleyman Demirel University (Türkiye) and my Erasmus+ semester at the Czech Technical University in Prague (FIT ČVUT). It covers C, C++, Java, Scala and Python, organised by topic.

This is a learning archive, so most programs are short exercises. Variable names, prompts and comments are often in Turkish.

## Layout

| Folder | What is inside |
| --- | --- |
| [`c/`](c) | 375 C programs from my first-year programming courses, grouped by topic: basics, conditionals, loops, functions, arrays, strings, pointers, dynamic memory, recursion, structs/unions, file I/O, sorting and searching. Also includes exam practice, small management-system projects, and code I followed along with from Harvard's CS50x lectures. |
| [`cpp/`](cpp) | My C++ solutions from the **algoleague Algorithm Competition Winter Camp 2025** (BFS on grids, dynamic programming, greedy, shortest paths, counting modulo 1e9+7), plus a hash table and a small CLI program. |
| [`java/`](java) | Java lesson exercises (methods, arrays, matrices, random number games) and exam practice. |
| [`scala/`](scala) | Functional programming labs from FIT ČVUT (FizzBuzz; functional and object-oriented set implementations with tests). |
| [`python/`](python) | Python basics, CS50 exercises, and webcam hand-tracking experiments with OpenCV and MediaPipe (hand landmarks, finger counter, gesture detector). |

### C topics

```
c/
├── 00-first-steps/            Code::Blocks first programs
├── 01-basics/                 I/O, data types, arithmetic
├── 02-conditionals/
├── 03-loops/
├── 04-patterns/               pyramids, diamonds, Floyd's triangle
├── 05-functions/
├── 06-arrays-and-matrices/
├── 07-strings/
├── 08-pointers/
├── 09-dynamic-memory/         malloc / calloc / realloc / free
├── 10-recursion/
├── 11-structs-unions-enums/
├── 12-file-io/
├── 13-preprocessor/
├── 14-sorting-and-searching/  bubble, insertion, selection, quick sort; linear and binary search
├── 15-number-problems/        primes, GCD/LCM, Fibonacci, Armstrong, Newton's square root
├── 16-mini-projects/          employee, hospital and library management, store chain, rock-paper-scissors
├── competitive-programming/   HackerRank-style problems
├── cs50-lectures/             programs from Harvard CS50x lectures (need libcs50)
└── exam-practice/
```

## Building and running

```bash
# C
gcc c/14-sorting-and-searching/quick_sort.c -o quick_sort && ./quick_sort

# CS50 lecture programs need the CS50 library: https://github.com/cs50/libcs50
gcc c/cs50-lectures/compare_strings.c -lcs50 -o compare && ./compare

# C++
g++ -std=c++17 -O2 cpp/algoleague/grid_tools_bfs.cpp -o grid && ./grid < input.txt

# Java
javac java/lessons/PrimeCheck.java && java -cp java/lessons PrimeCheck

# Scala (sbt)
cd scala/lab2-sets && sbt run

# Python hand tracking
pip install opencv-python mediapipe
python python/computer-vision/finger_counter.py
```

## Notes

- Graded homework is not published here, to respect academic integrity rules.
- The `cs50-lectures` and `python/basics` folders follow along with course material (CS50x, and a Python crash-course tutorial). They are included as study notes, not as original work.
