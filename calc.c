#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func(double a,double b, double c){
    float discrim = b*b-4*a*c; 
    float x1,x2;
    if(discrim < 0){
        printf("Discriminant is less than 0. Enter another values\n");
        return;
    } 
    x1 = ((-1*b*b)+sqrt(discrim))/2*a;
    x2 = ((-1*b*b)-sqrt(discrim))/2*a;
    if(discrim == 0){
        printf("x1 = x2 = %f\n",x1);
        return;
    }
	printf("x1 = %f\t x2 = %f\n",x1,x2);
}

int main(int argc, char** argv){
    if(argc < 4){
        printf("Quadratic equations calculator\n");
        return 0;
    }
    float a,b,c;
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
    func(a,b,c);
    return 0;
}
