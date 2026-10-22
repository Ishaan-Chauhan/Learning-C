# Learning C

A collection of C programs I wrote while learning the language, from basic loops to menu-driven console apps that save data to files. I'm a first-year B.Tech CSE student, and this repo is my public learning log.

I started on Turbo C++ and have since moved to **VS Code + gcc**, so newer programs use standard C.

## Featured projects

| Project | What it does | Concepts used |
|---|---|---|
| [Student record system](05-mini-projects/student_records.c) | Add, display, search and delete student records by ID. Data persists between runs. | `struct`, array of structs, record deletion by shifting, binary file I/O |
| [Bank account simulation](05-mini-projects/bank_simulation.c) | Create accounts, deposit, withdraw, check balances and list all accounts. Saved to file on exit. | `struct`, array of structs, binary file I/O, menu-driven design |
| [Food ordering & billing](05-mini-projects/food_menu_billing.c) | Menu-driven app: pick items, set quantities, get a final bill. | loops, `switch`, functions, I/O |
| [Calculator](05-mini-projects/calculator.c) | Console calculator with a menu of operations. | loops, `switch`, arithmetic |

<!-- Add a screenshot or sample output for each project here -->

## Topics covered

| Folder | Topics |
|---|---|
| `01-basics/` | variables, data types, input/output |
| `02-conditionals/` | `if` / `else`, nested conditions |
| `03-loops/` | `for`, `while`, `do-while`, `break` / loop exit, pattern printing |
| `04-strings/` | string handling and formatting |
| `05-mini-projects/` | the projects above |

## Running a program

You need a C compiler such as [gcc](https://gcc.gnu.org/).

```bash
gcc -Wall -Wextra -o student_records 05-mini-projects/student_records.c
./student_records
```

On Windows (PowerShell), run `.\student_records.exe` instead.

## Currently learning

- Pointers
- Dynamic memory (`malloc` / `free`)
- Linked lists

## Roadmap

- [ ] Add input validation (negative amounts, duplicate IDs, bad input) to the record and bank programs
- [ ] Replace fixed-size arrays with dynamic memory so there is no 50-record limit
- [ ] Rebuild the student record system with a linked list
- [ ] Move on to data structures (stacks, queues) and algorithms

## Why this repo exists

To practice consistently, track my progress, and build a foundation for larger projects in software engineering.
