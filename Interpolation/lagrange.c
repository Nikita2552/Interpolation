#include "lagrange.h"

#include <time.h>

float *lagArray;
int lagNumber = 0;

float *koef;

double time_spent;
clock_t begin;
clock_t end;

char initLagrange(float *array, int number)
{
    char flag = 0;

    printf("Work of lagrange init algorithm:\n");

    #ifdef TIME
        startTime();
    #endif TIME

    if (number)
    {
        printf("lagrange: number > 0, start work\n");

        lagNumber = number;
        lagArray = array;
        koef = malloc(lagNumber*sizeof(float));

        for (int i = 0; i < lagNumber*2; i+=2)
        {
            #ifdef DEBUG
                printf("lagrange: X = %.0f, Y = %.2f;\n", array[i], array[i+1]);
            #endif

            float temp = 1;

            for (int j = 0; j < i; j+=2)
            {
                temp *= tempIJ(i, j);
            }

            for (int j = i+2; j < lagNumber*2; j+=2)
            {
                temp *= tempIJ(i, j);
            }

            koef[i/2] = lagArray[i+1]/temp;

            #ifdef DEBUG
                printf("lagArray[(i+1)%d] = %.2f, temp = %.0f, koef[%d] = %.10f\n", i+1, lagArray[i+1], temp, i/2, koef[i/2]);
            #endif
        }
    }
    else
    {
        printf("lagrange: Number of elements is null\n");
    }

    #ifdef TIME
        stopTime();
    #endif

    return flag;
}

float interpolateLagrange(float lagX)
{
    float lagY = 0;

    printf("Work of lagrange interpolate algorithm:\n");

    #ifdef TIME
        startTime();
    #endif TIME

    printf("x = %.1f\n", lagX);

    for (int i = 0; i < lagNumber*2; i+=2)
    {
        float temp = 1;

        for (int j = 0; j < i; j+=2)
        {
            temp *= tempXJ(lagX, j);
        }

        for (int j = i+2; j < lagNumber*2; j+=2)
        {
            temp *= tempXJ(lagX, j);
        }

        lagY += temp*koef[i/2];

        #ifdef DEBUG
            printf("y = %.2f, temp = %.0f, koef[%d] = %.10f\n", lagY, temp, i/2, koef[i/2]);
        #endif
    }

    printf(" y = %.2f\n", lagY);

    #ifdef TIME
        stopTime();
    #endif

    return lagY;
}

float tempIJ(int i, int j)
{
    float temp = lagArray[i] - lagArray[j];

    #ifdef DEBUG
        printf("lagArray[(i)%d] = %.0f, lagArray[(j)%d] = %.0f, temp = %.0f\n", i, lagArray[i], j, lagArray[j], temp);
    #endif

    return temp;
}

float tempXJ(float tempX, int j)
{
    float temp = tempX - lagArray[j];

    #ifdef DEBUG
        printf("x = %.1f, lagArray[(j)%d] = %.0f, temp = %.0f\n", tempX, j, lagArray[j], temp);
    #endif

    return temp;
}

void startTime()
{
    // для хранения времени выполнения кода
    time_spent = 0.0;
    begin = clock();
}

void stopTime()
{
    end = clock();
    // рассчитать прошедшее время, найдя разницу (end - begin) и
    // деление разницы на CLOCKS_PER_SEC для перевода в секунды
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("lagrange: the elapsed time is %f seconds\n", time_spent);
}
