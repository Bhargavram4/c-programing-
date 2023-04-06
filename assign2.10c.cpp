#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n) {
    int jumps[n]; // jumps[i] stores the minimum number of jumps needed to reach arr[n-1] from arr[i]
    int i, j;
    jumps[0] = 0; // the minimum number of jumps needed to reach the first element is 0

    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX; // initialize jumps[i] to a very large value
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) { // if i is reachable from j
                jumps[i] = jumps[j] + 1; // update the minimum number of jumps needed
                break; // break out of the loop since we found the minimum number of jumps for i
            }
        }
    }

    return jumps[n-1] != INT_MAX ? jumps[n-1] : -1; // if arr[n-1] is reachable, return the minimum number of jumps needed; otherwise, return -1
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum number of jumps to reach the end of the array: %d", minJumps(arr, n));
    return 0;
}
