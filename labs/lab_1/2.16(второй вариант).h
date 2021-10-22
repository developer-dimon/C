#include <stdio.h>


float degree(float x, int level, float x_l){
    if (level != 0)
        return degree(x,level - 1,x * x_l);
    return x_l;
}

float lab_2_16(){
    float x;
    scanf("%f",&x);
    return 2*degree(x,4,1)-3*degree(x,3,1)+4*degree(x,2,1)-5*x+6;


}
