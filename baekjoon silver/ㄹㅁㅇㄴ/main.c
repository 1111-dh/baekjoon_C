#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define AREA(r) (PI*(r)*(r))
typedef struct
{
    double x;
    double y;
}point;
typedef struct
{
    point d;
    double radius;
}circle;
int main()
{
    circle * c = (circle*)malloc(sizeof(circle));
    c->d.x= 1.24;
    c->d.y= 3.82;
    c->radius = 4.93;
    printf("원 중심좌표(%.2lf, %.2lf), 반지름: %.2lf\n", c->d.x, c->d.y, c->radius);
    printf("원면적: %.2lf\n",AREA(c->radius));
}
