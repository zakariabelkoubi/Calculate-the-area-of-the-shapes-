#include <stdio.h>

int main()
{
    //EXEMPLE-->CALCULATE THE AREA OF SHAPES
    //EXEMPLE-->RECTANGLE :
    printf("RECTANGLE\n");
    int width , height , area;

    //the width of rect
    printf("enter the width:");
    scanf("%d", &width);

    //the height of the rect
    printf("enter the height:");
    scanf("%d", &height);

    //the area of the rect
    area= width*height;
    printf("the area is %d\n" ,area);



    //EXEMPLE-->CIRCLE
    printf("CIRCLE\n");
    const float x=3.14;
    float y;
    float res;
    printf ("the constant value of radius of the circle is %f\n" , x);
    //THE AREA OF THE CIRCLE
    printf ("enter the radius area\n");
    scanf("%f" , &y);
    //THE RESULT
    res = x*y*y;
    printf("the result is %f\n" , res);


    //EXEMPLE-->TRIANGLE
    printf("TRIANGLE\n");
    float z;
    float b;
    float resu;
    //THE HEIGHT OF THE BASE
    printf("enter the height of the base:\n");
    scanf("%f", &z);
    //THE HEIGHT OF THE TRIANGLE
    printf("enter the height of the triangle :\n");
    scanf("%f", &b);
    //THE RESULT
    resu=z*b*1/2;
    printf("the result is %f\n", resu);

    return 0;
}
