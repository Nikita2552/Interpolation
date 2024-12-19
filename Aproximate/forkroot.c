#include <stdlib.h>

#include "forkroot.h"

float getY(float *tempX)
{
    return pow(*tempX, 3) - pow (*tempX, 2);
}

void Aproximate(float *tempA, float *tempB, int n)
{
    while(n)
    {
        printf("*** n = %d ***\n", n);

        float delta = (*tempB - *tempA)/2;
        float half = *tempA + delta;

        #ifdef DEBUG            
            printf("half = %0.4f\n", half);
        #endif

        float AY = getY(tempA);
        float BY = getY(tempB);
        float halfY = getY(&half);

        #ifdef DEBUG
            printf("A = %0.4f, B = %0.4f, half = %0.4f,\n", *tempA, *tempB, half);
            printf("AY = %0.4f, BY = %0.4f, halfY = %0.4f,\n", AY, BY, halfY);
        #endif

        if (((AY > 0) && (halfY < 0)) || ((AY < 0) && (halfY > 0)))
        {
            #ifdef DEBUG
                printf("B=%.4f, half=%.4f\n", *tempB, half);
            #endif

            *tempB = half;

            printf("A=%.4f, B=%.4f\n", *tempA, *tempB);

        }
        else //if (((halfY > 0) && (BY < 0)) || ((halfY < 0) && (BY > 0)))
        {
            #ifdef DEBUG
                printf("A=%.4f, half=%.4f\n", *tempA, half);
            #endif

            *tempA = half;

            printf("A=%.4f, B=%.4f\n", *tempA, *tempB);

        }

        n--;
     }

}
