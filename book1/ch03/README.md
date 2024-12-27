# Description

Selected bits/tasks from ["How to Think Like a Computer Scientist](https://github.com/tscheffl/ThinkC/tree/master). C Version" by Thomas Scheffler based on previous work by Allen B. Downey.

Written at a whim, maybe modified, used for educational purposes.

The book is available freely under [CC-BY-NC-4.0](https://creativecommons.org/licenses/by-nc/4.0/) on T. Scheffler's [github](https://github.com/tscheffl/ThinkC/tree/master).

# Chapter 3. Function

## Task 1

Original exercise number: 3.4

Many computations can be expressed concisely using the "multadd" operation (a\*b+c):

Write a function `Multadd()` that prints multadditionizaiton.<br>
Invoke it in `main()` with a few parameters, like 1.0, 2.0, 3.0 (returns 5).<br>
Use `Multadd()` to compute the following value:<br>
$sin\ \frac{\pi}{4} + \frac{cos\ \frac{\pi}{4}}{2}$<br>
Write a function called `Yikes()` that takes a double as a parameter and that uses `Multadd()` to calculate and print:<br>
$xe^{-x} + \sqrt{1 - e^{-x}}$<br>

HINT: the Math function for raising `e` to a power is `double exp(double x)`.

# Usage example

## Compilation

```bash
gcc hello.c # compilation
./a.out # execution
```

or (when using `#include <math.h>`)

```bash
gcc hello.c -lm # compilation
./a.out # execution
```

## Caution note

**The content of this folder may be incorrect, erroneous and/or harmful. Use it at Your own risk.**

**Zawartość niniejszego katalogu może być nieprawidłowa, błędna czy szkodliwa. Używaj na własne ryzyko.**
