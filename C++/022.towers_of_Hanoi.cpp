#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

void towerOfHanoi(unsigned int, char, char, char);

int main(void) {
    clock_t tic = clock(); // initialize the clock
    unsigned int n = 15; // number of disks

    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    clock_t toc = clock(); // stop counting the time

    // print the results
    double exec_time = (double) (toc - tic) / CLOCKS_PER_SEC;
    printf("\nDuration: %.3f seconds\n", exec_time);

    return 0;
}

void towerOfHanoi(unsigned int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1) {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }

    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
