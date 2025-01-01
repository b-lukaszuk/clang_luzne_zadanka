# Description

Selected bits/tasks from ["How to Think Like a Computer Scientist](https://github.com/tscheffl/ThinkC/tree/master). C Version" by Thomas Scheffler based on previous work by Allen B. Downey.

Written at a whim, maybe modified, used for educational purposes.

The book is available freely under [CC-BY-NC-4.0](https://creativecommons.org/licenses/by-nc/4.0/) on T. Scheffler's [github](https://github.com/tscheffl/ThinkC/tree/master).

# Chapter 5. Fruitful functions

## Task 1

Original exercise number: 5.1

Write a function named `IsTriangle()` that takes three integers as arguments and returns `TRUE` if you can build a triangle from the sides of that length or `FALSE` if you cannot do that.

Hint: if any of the three lengths is greater than the sum of the other two then you cannot build a triangle. Otherwise, you can

## Task 2

Original exercise number: 5.5

Implement a recursive function for `gcd` (greatest common divisor) using [Euclidean algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm):

$$
\begin{align*}
gcd(a, b) = \left\{
    \begin {aligned}
         & a \quad & \text{if }\ b = 0 \\
         & gcd(b, r) \quad & \text{otherwise}
    \end{aligned}
\right.
\end{align*}
$$

where:<br>
`a` and `b` are some two integers<br>
`r` is a reminder when `a` is divided by `b`<br>

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
