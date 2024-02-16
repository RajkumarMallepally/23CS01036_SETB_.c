#include <stdio.h>

int main() {

    float x,y,x1,y1,r,a;
    printf("enter the x coordinate of centre of circle: ");
    printf("enter the radius of circle: ");
    printf("enter the y coordinate of centre of circle: ");
    printf("enter the x coordinate of the point: ");
    printf("enter the y coordinate of the point: ");

    a=((x-x1)*(x-x1))+((y-y1)*(y-y1));
    if r((r*r==a)){
        printf("the point lies on the circle");
    } else if ((r*r<a)) {
        printf("the point lies outside");
    } else ((r*r>a)) {
        printf("the point lies inside the circle");
    }
    return 0;

}