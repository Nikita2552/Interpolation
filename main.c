#include <stdio.h>
#include <stdlib.h>

#include "./Interpolation/lagrange.h"
#include "./Aproximate/forkroot.h"
#include "./Aproximate/forkintergal.h"
#include "./Graphs/graphOperations.h"
#include "./Matrix/matrixOperations.h"
#include "./Vectors/vectorOperations.h"

#define NUMBER 10

float array[] =
{ /*X, Y*/
    1, 1.23,
    2, 1.59,
    3, 1.65,
    4, 1.86,
    5, 2.01,
    6, 2.34,
    7, 2.55,
    8, 2.25,
    9, 2.13,
    10, 2.04
};

int main()
{
    printf("Hello World!\n");

//    initClassic(array, NUMBER);
//    initNiyton(array, NUMBER);
//    if (initLagrange(array, NUMBER))
//    {
//        interpolateLagrange(1.5);
//        interpolateLagrange(2.5);
//        interpolateLagrange(3.5);
//    }

//    float A = -3;
//    float B = 40;
//    int n = 20;

//    Aproximate(&A, &B, n);

    return 0;
}
