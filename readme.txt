Question:
Concurrent Merge Sort
● Given a number n and n numbers, sort the numbers using Merge Sort.
● Recursively make two child threads, one for the left half, one for the right half.
If the number of elements in the array for a thread is less than 5, perform a
selection sort.
● The parent of the two children then merges the result and returns back to the
parent and so on.
● Compare the performance of the merge sort with a normal merge sort
implementation and make a report.
● You must use the shmget, shmat function.

Size  Concurrent Merge Sort     Normal Merge Sort  Thread Merge Sort
1000  0.016s                    0.006s              0.012s
10000 0.102s                    0.012s              0.148s

Clearly, we can see that normal merge sort is faster than concurrent merge sort. This is could be due to transferring the thread variables
from parent thread to child thread. This overhead outweighs any performance improvement due to the concurrency. Also the in the normal merge
sort, the OS optimises some things so that it could get faster. 
 
Ideally, thread merge sort should be faster than concurrent merge sort cause accessing the shared memory using threads is faster but due to some macOS optimisations 
concurrent merge sort is faster than thread merge sort. 



Running the code:
gcc -pthread test.c
./a.out

