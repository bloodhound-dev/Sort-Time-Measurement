Write a program that allows you to examine the effects of array size and initial data order by measuring the time of the program when your favorite sort operates on an array of integers. Tests 10 arrays each time with three different array sizes (n = 100,000, n = 1,000,000, and n = 10,000,000) and three different array orderings (random order, ascending order, and inverse 
order). Three test results (random time, ordered time, reverse time) should be produced for each array in a well-formatted fashion. A table may be used for each array size where columns represent the 10 arrays and rows represent the three tests. Ultimately, tables are printed one after another separated by a line indicating the size of the arrays. The C++ function rand() may be helpful in building the randomly ordered arrays. If you don’t have a favorite sort, use function sort defined in the header <algorithm>. 