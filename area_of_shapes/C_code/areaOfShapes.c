
#include <stdio.h>
#include <math.h>

void triangle();
void circle();
void rectangle();

int main() {
    char calculate_area = 'y';

    while (calculate_area == 'y') {
        printf("Select the type of shape you want to calculate area for from the numbers:\n");
        printf("Numbers:\n 1 - triangle\n 2 - circle\n 3 - rectangle\n");

        int choice;
        printf("Enter the number: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                triangle();
                break;
            case 2:
                circle();
                break;
            case 3:
                rectangle();
                break;
            default:
                printf("Invalid entry. Select choices from 1 to 3\n");
        }

        printf("Do you want to calculate area? (y/n): ");
        scanf(" %c", &calculate_area);
    }

    return 0;
}

void triangle() {
    printf("Calculate the area of the triangle.\n");
    int h, b;
    printf("Enter the height: ");
    scanf("%d", &h);
    printf("Enter base size: ");
    scanf("%d", &b);

    if (b <= 0 || h <= 0) {
        printf("Invalid entry. Values should be greater than 0\n");
    } else {
        float area = (1.0 / 2) * b * h;
        printf("Area of the triangle is: %.2f\n", area);
    }
}

void circle() {
    printf("This program calculates area of a circle\n");
    int radius;
    printf("Enter radius of a circle: ");
    scanf("%d", &radius);

    if (radius <= 0) {
        printf("Invalid input. Value should be greater than 0\n");
    } else {
        float area = M_PI * radius * radius;
        printf("Total area is: %.4f\n", area);
    }
}

void rectangle() {
    int length, width;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    if (length <= 0 || width <= 0) {
        printf("Invalid entry. Values should be greater than 0\n");
    } else {
        int area = length * width;
        printf("Total area is: %d\n", area);
    }
}
