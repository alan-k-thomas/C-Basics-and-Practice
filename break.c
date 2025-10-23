//When a specific condition is met, the break statement immediately exits the loop.
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) 
    {
        if (i == 4) 
        {
            break; // Exits the loop when i is 4
        }
        printf("%d\n", i);
    }
    return 0;
}
