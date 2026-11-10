# Green Efficiency Analysis

## Measurement Methodology

The experiments were conducted using three C programs to investigate execution time, algorithmic efficiency, and the performance of individual processing phases. The programs used the `clock()` function from `<time.h>` to measure CPU time, with results converted into seconds using `CLOCKS_PER_SEC`.

In the baseline experiment, a loop performing 100,000,000 iterations was executed three consecutive times. The recorded execution times were 0.074081, 0.052745, and 0.052072 seconds.

The algorithm comparison experiment measured two implementations over a dataset of 50,000 elements. Each implementation was measured three times, and average execution times were calculated.

Finally, the instrumentation experiment measured the time spent building a dataset, processing its values, and calculating a checksum. These phases were timed separately, along with the total execution time.

## Observed Performance Differences

The baseline experiment produced an average execution time of approximately 0.059633 seconds. The first run was slower than the following two runs, demonstrating that execution times can vary even when the computation remains unchanged.

In the algorithm comparison experiment, the naive implementation recorded execution times of 0.790950, 0.770508, and 0.770237 seconds, averaging approximately 0.777232 seconds.

The single-pass implementation recorded 0.000031, 0.000032, and 0.000031 seconds, averaging approximately 0.00003133 seconds.

Based on these measurements, the naive implementation required approximately 24,805 times as much CPU time as the single-pass implementation. The naive algorithm uses nested loops with O(n²) complexity, while the single-pass algorithm uses one loop with O(n) complexity. However, the implementations produce different counts, meaning their outputs are not functionally equivalent.

The instrumentation experiment recorded a total execution time of 0.000283 seconds. Dataset construction took 0.000123 seconds, processing took 0.000109 seconds, and checksum reduction took 0.000051 seconds. Dataset construction accounted for the largest measured portion.

## Relation Between Runtime and Energy Consumption

Execution time is relevant to energy efficiency because programs require computational resources during execution. Reducing unnecessary operations may reduce the CPU time needed to complete a task.

The comparison experiment demonstrated a substantial difference in CPU time between the two implementations. This suggests that algorithm design is an important consideration when investigating computational efficiency.

However, the experiments did not directly measure electrical power or energy consumption. Therefore, the recorded execution times cannot establish actual energy savings. A shorter CPU execution time does not automatically prove lower total energy consumption.

## Limitations of the Experiment

Several limitations affect the interpretation of these measurements.

First, only three executions were recorded for the baseline and algorithm comparison experiments, while the instrumentation results represent one measured execution.

Second, the experiments used CPU timing rather than direct energy measurements. They therefore cannot quantify power consumption or energy savings.

Third, the single-pass execution times were extremely small, making their measurements sensitive to clock resolution and rounding.

Additionally, the two algorithm implementations do not produce equivalent results, limiting the conclusions that can be drawn about replacing one implementation with the other.

## Practical Engineering Takeaway

These experiments demonstrate the importance of measuring program performance rather than relying only on assumptions.

The algorithm comparison showed that different implementation structures can have dramatically different execution times. The instrumentation experiment also demonstrated how timing individual phases can identify where CPU time is spent.

For practical software engineering, developers should measure performance, verify functional correctness, and identify expensive operations before optimizing code.

Ultimately, runtime measurement provides useful evidence for performance decisions, but direct energy measurements are necessary before making claims about environmental or energy-efficiency improvements.

