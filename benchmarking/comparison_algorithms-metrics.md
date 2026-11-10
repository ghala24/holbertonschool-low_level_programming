# Algorithmic Efficiency Comparison

## Execution Results

| Run | Naive (seconds) | Single-pass (seconds) |
|---|---:|---:|
| 1 | 0.790950 | 0.000031 |
| 2 | 0.770508 | 0.000032 |
| 3 | 0.770237 | 0.000031 |

## Average Execution Time

- Naive algorithm: 0.777232 seconds
- Single-pass algorithm: 0.000031 seconds

## Relative Difference

Naive algorithm is approximately 24805.27 times slower than single-pass.

## Analysis

The naive implementation uses nested loops and has O(n^2) time complexity.
The single-pass implementation uses one loop and has O(n) time complexity.
Note: The implementations produce different counts, so this is a timing comparison, not a correctness-equivalent benchmark.
