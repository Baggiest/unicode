#include <stdio.h>

int main()
{
    int height, radius;
    printf("Enter the height: ");
    scanf("%d", &height);
    printf("Enter the radius: ");
    scanf("%d", &radius);

    sphere(radius, height);
}

int sphere(int radius, int height)
{
    int area, volume, surfaceArea;

    area = 2 * 3.14 * radius * (radius + height);
    volume = 3.14 * radius * radius * height;
    surfaceArea = 2 * 3.14 * radius * (radius + height);

    printf("The area of the sphere is: %d \n", area);
    printf("The volume of the sphere is: %d \n", volume);
    printf("The surface area of the sphere is: %d \n", surfaceArea);
}