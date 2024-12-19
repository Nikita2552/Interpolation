
char initClassic(float *array, int number)
{
    char flag = 0;

    printf("Work of classic algorithm:\n");

    if (number)
    {
        printf("classic: number > 0, start work\n");

        for (int i = 0; i < number*2; i+=2)
        {
            printf("classic: X = %.0f, Y = %.2f;\n", array[i], array[i+1]);
        }
    }
    else
    {
        printf("classic: Number of elements is nule\n");
    }

    return flag;
}

