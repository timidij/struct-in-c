#include<stdio.h>
#include<stdio.h>
typedef struct point{
float x;
float y;

}center_of_circle;
typedef struct circle_parameters{
center_of_circle center1;
float radius;
}circle;
int main()
{
    circle c1;
    c1.radius = 7.3;
c1.center1.x=65.8;
float area = 3.142*pow(c1.radius, 2);

   printf("result = %.2f",area);
}
