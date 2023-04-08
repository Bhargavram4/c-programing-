#include <stdio.h>

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;

    char shape_type;
    printf("Enter the type of shape you want to calculate (c for circle, r for rectangle): ");
    scanf("%c", &shape_type);

    if (shape_type == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);

        float area = 3.14 * s.radius * s.radius;
        printf("The area of the circle is: %.2f\n", area);
    } else if (shape_type == 'r') {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &s.rectangle.length);

        printf("Enter the width of the rectangle: ");
        scanf("%f", &s.rectangle.width);

        float area = s.rectangle.length * s.rectangle.width;
        printf("The area of the rectangle is: %.2f\n", area);
    } else {
  
        printf("Error: Invalid shape type\n");
    }

    return 0;
}
