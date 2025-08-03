# To-Do-List-DSA-
DSA project
# Simple To-Do List (Vector Based)

## Description

Yeh ek bahut hi simple command-line To-Do List application hai jo C++ mein likha gaya hai. Isme sirf `vector` use hota hai tasks ko store karne ke liye. Aap tasks add, remove aur display kar sakte ho.

## Features

* Add a task
* Remove a task by index (0-based)
* Display current tasks
* Simple input commands, no complex UI

## Requirements

* C++ compiler (like g++, clang++)
* Terminal / Command prompt

## Compilation

```bash
# Using g++
g++ -std=c++17 -O2 todo.cpp -o todo
```

(`todo.cpp` mein aap code rakho, output binary `todo` banega)

## Usage

Start the program:

```bash
./todo
```

Phir commands daalo:

### Commands

* `add <task>`: Naya task add kare. (Bina spaces: use underscore `_` ya quotes agar modify karo)
* `remove <index>`: Us index ka task hatao. (0 se start)
* `display`: Saare current tasks dikhaye.
* `exit`: Program se bahar niklo.

### Example session

```
add Buy_milk
add Study_DS
display
remove 0
display
exit
```

Output:

```
0: Buy_milk
1: Study_DS
0: Study_DS
```

## Code structure (simple idea)

* `vector<string> todos;` stores tasks
* Commands are read in a loop
* `add` pushes back into vector
* `remove` erases by index with boundary check
* `display` loops and prints





hota, seedha aur basic hai—agar chahiye toh main iska GitHub-style version, `.gitignore`, aur sample input file bhi bana sakta hoon.*
