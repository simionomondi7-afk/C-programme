/* NAME: OMONDI MAKIRI SIMION
   REG NO. :PA106/G/28766/25
   DESCRIPTION:A 3D ARRAY FOR MULTIPLE BRANCHES */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(0));

    // Assign random occupancy and count total occupied rooms
    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total number of occupied rooms across all 3 branches = %d\n", totalOccupied);

    return 0;
}
