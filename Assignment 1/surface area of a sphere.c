#include <stdio.h>

int main() {
    float radius, surface_area;

    //input radius from user
    printf("Enter the radius of the sphere");
    scanf("%f",&radius);

    // calculte surface area
    surface_area = 4*3.142*radius*radius;

    printf("surface area of the sphere: %.2f\n", surface_area);

    return 0;

}
