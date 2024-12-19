
char initNiyton(float *array, int number)
{
    char flag = 0;

    printf("Work of Niyton algorithm:\n");

    if (number)
    {
        printf("niyton: number > 0, start work\n");

        for (int i = 0; i < number*2; i+=2)
        {
            printf("niyton: X = %.0f, Y = %.2f;\n", array[i], array[i+1]);
        }
    }
    else
    {
        printf("niyton: Number of elements is nule\n");
    }

    return flag;
}
