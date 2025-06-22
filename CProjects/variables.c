#include <stdio.h>


double rectangle_area(double width, double height) {
    return width * height;
}

double rectangle_perimeter(double width, double height) {
    return 2 * (width + height);
}

int main(){
    double rectangle_width = 0;
    double rectangle_height = 0;
    double rectangle_area = 0;
    double rectangle_perimeter = 0;

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &rectangle_width);
    printf("Enter the height of the rectangle: ");
    scanf("%lf", &rectangle_height);
    printf("Width: %.2lf, Height: %.2lf\n", rectangle_width, rectangle_height);
    return 0;
}