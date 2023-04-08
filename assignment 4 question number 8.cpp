#include <stdio.h>

union my_union {
    int i;
    float f;
};

int main() {
    union my_union data;
    printf("Enter a value (integer or float): ");

    if (scanf("%d", &data.i) == 1) {
        
        printf("You entered an integer: %d\n", data.i);
    } else if (scanf("%f", &data.f) == 1) {
 
        printf("You entered a float: %f\n", data.f);
    } else {
     
        printf("Error: Invalid input\n");
    }

    return 0;
}
