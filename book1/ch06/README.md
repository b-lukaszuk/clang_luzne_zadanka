# Description

Selected bits/tasks from ["How to Think Like a Computer Scientist](https://github.com/tscheffl/ThinkC/tree/master). C Version" by Thomas Scheffler based on previous work by Allen B. Downey.

Written at a whim, maybe modified, used for educational purposes.

The book is available freely under [CC-BY-NC-4.0](https://creativecommons.org/licenses/by-nc/4.0/) on T. Scheffler's [github](https://github.com/tscheffl/ThinkC/tree/master).

# Chapter 6. Iteration

## Task 1

Original exercise number: 6.2

Write a function named `Power()` that rises integer to the n-th power using loops.

## Task 2

Original exercise number: 6.3

Write a function for finding square root of a number (`a`):

1. Start with a guess `x0` (`a/2`),
2. If the guess squared is equal to `a` (absolute difference no greater than
   0.0001) then return `x0`,
3. Else get new guess `x1` based on formula:

$x_1 = (x_0 + a/x_0)/2$

Repeat the points 1-3 until you find a satisfactory guess for the square root.

## Task 3

Original exercise number: 6.4

One way to evaluate $e^{-x^2}$ is to use the infinite series expansion:

$e^{-x^2} = 1 - 2x + 3x^{2}/2! - 4x^{3}/3! + 5x^{4}/4! - ...$

In other words, we need to add up a series of terms where the $i$-th term is equal to $(-1)^{i}(i+1)x^{i}/i!$. Write a function named `Gauss` that takes `x` and `n` as arguments and returns the sum of the first `n` terms of the series.

**Note**. Not sure, but it is possible that the author gave incorrect expansion for the infinite series. Wikipedia's [the Taylor series](https://en.wikipedia.org/wiki/Taylor_series) gives:

$e^x = \sum\limits_{i=0}^{\infty} \frac{x^n}{n!}$

Where we need to replace $x$ with $-x^2$.

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
