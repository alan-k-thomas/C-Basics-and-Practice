//When a specific condition occurs, the continue statement skips the rest of the current loop iteration and moves to the next one.
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // Skips the loop’s current iteration when i is 4
        }
        printf("%d\n", i);
    }
    return 0;
}
