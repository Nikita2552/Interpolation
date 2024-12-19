#include "forkintergal.h"

float exampleFunction(float *tempX)
{
    return *tempX * *tempX;
}

float example2Derivative(float *tempX)
{
    return (*tempX * *tempX  * *tempX  * *tempX) / 12;
}

float example4Derivative(float *tempX)
{
    return (*tempX * *tempX  * *tempX  * *tempX  * *tempX  * *tempX) / 360;
}

float example4Derivative(float *tempX);

float integralTrapeze(float *tempA, float *tempB, float *step)
{
    float resultIntergral = 0;

    resultIntergral += exampleFunction(tempA);
    resultIntergral += exampleFunction(tempB);

    float resultSum = 0;
    float temp = *tempA + 1;
    while (temp < *tempB)
    {
        resultSum += exampleFunction(&temp);
        temp++;
    }

    float coefficient = (*tempB - *tempA)/(2 * *step);

    resultIntergral += 2 * resultSum;
    resultIntergral *= coefficient;

    return resultIntergral;
}

float errorTrapeze(float *tempA, float *tempB, float *step)
{
    float big = 0;

    float result = 0;
    float temp = *tempA;
    while (temp <= *tempB)
    {
        result = example2Derivative(&temp);
        if (result > big)
            big = result;
        temp++;
     }

   float resultSum = (big * (*tempB - *tempA) * (*tempB - *tempA) * (*tempB - *tempA))/(12 * *step * *step);

   return resultSum;
}

float integralSimpson(float *tempA, float *tempB, float *step)
{
    float resultIntergral = 0;

    resultIntergral += exampleFunction(tempA);
    resultIntergral += exampleFunction(tempB);

    float temp = *tempA + 1;
    while (temp < *tempB)
    {
        resultIntergral += exampleFunction(&temp) + 4*exampleFunction(&temp + 2) + exampleFunction(&temp + 3);
        temp++;
    }

    float coefficient = (*tempB - *tempA)/(6 * *step);
    resultIntergral *= coefficient;

    return resultIntergral;
}

float errorSimpson(float *tempA, float *tempB, float *step)
{
    float big = 0;

    float result = 0;
    float temp = *tempA;
    while (temp <= *tempB)
    {
        result = example4Derivative(&temp);
        if (result > big)
            big = result;
        temp++;
     }

   float resultSum = (big * (*tempB - *tempA) * (*tempB - *tempA) * (*tempB - *tempA) * (*tempB - *tempA) * (*tempB - *tempA))/(2880 * *step * *step * *step * *step);

   return resultSum;
}
