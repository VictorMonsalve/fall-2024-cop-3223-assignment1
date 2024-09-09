#include <stdio.h>
#include <math.h>

#define PI_CONSTANT 3.14159

double calculate_distance_between_points();
double calculate_perimeter_of_city();
double calculate_area_of_city();
double calculate_width_of_city();
double calculate_height_of_city();
double ask_for_user_input();
void display_point_info(const char* point, double x, double y);

int main(int argc, char **argv) {
    calculate_distance_between_points();
    calculate_perimeter_of_city();
    calculate_area_of_city();
    calculate_width_of_city();
    calculate_height_of_city();

return 0;
}

double calculate_distance_between_points() {
    double x1,y1,x2,y2;

    printf("Enter the x coordinate for point #1: ");
    x1=ask_for_user_input();
    printf("Enter the y coordinate for point #1: ");
    y1=ask_for_user_input();
    printf("Enter the x coordinate for point #2: ");
    x2=ask_for_user_input();
    printf("Enter the y coordinate for point #2: ");
    y2=ask_for_user_input();

    double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    display_point_info("Point #1",x1,y1);
    display_point_info("Point #2",x2,y2);
    printf("The distance between the two points is %.2f\n",distance);

    return distance;
}

double calculate_perimeter_of_city() {
    double width = calculate_width_of_city();
    double height = calculate_height_of_city();

    double perimeter = 2 * (width+height);

    printf("The perimeter of the city is %.2f\n", perimeter);

    return 3.0;
}

double calculate_area_of_city() {
    double width = calculate_width_of_city();
    double height = calculate_height_of_city();

    double area = width * height;

    printf("The area of the city is %.2f\n", area);

    return 2.0;
}

double calculate_width_of_city() {
    double x1,x2,y1,y2;

    printf("Enter the x coordinate for point #1: ");
    x1=ask_for_user_input();
    printf("Enter the x coordinate for point #2: ");
    x2=ask_for_user_input();

    double width = fabs(x2-x1);

    y1=ask_for_user_input();
    y2=ask_for_user_input();
    display_point_info("Point #1",x1,y1);
    display_point_info("Point #2",x2,y2);
    printf("The width of the city is %.2f\n", width);

    return width;
}

double calculate_height_of_city() {
    double x1,x2,y1,y2;

    printf("Enter the y coordinate for point #1: ");
    y1=ask_for_user_input();
    printf("Enter the y coordinate for point #2: ");
    y2=ask_for_user_input();

    double height = fabs(y2-y1);

    x1=ask_for_user_input();
    x2=ask_for_user_input();
    display_point_info("Point #1",x1,y1);
    display_point_info("Point #2",x2,y2);
    printf("The height of the city is %.2f\n", height);

    return height;
}

double ask_for_user_input() {
    double value;
    scanf("%lf", &value);
    return value;
}

void display_point_info(const char* point, double x, double y) {
    printf("%s entered: x=%.2f; y=%.2f\n", point,x,y);
}