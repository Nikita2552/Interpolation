
typedef struct
{
    int *head;
    unsigned int rowcount;
    unsigned int columncount;
} matrix;

matrix createNullMatrix(unsigned int rowcount, unsigned int columncount);

void setElementtoMatrix(unsigned int row, unsigned int column, int number, matrix matrix1);

int detMatrix(matrix matrix1);

matrix detRecurseMatrix(matrix matrix1);

int detFourElemMatrix(matrix matrix1);

matrix minorMatrix(unsigned int row, unsigned int column, matrix matrix1);

matrix unionMatrix(matrix matrix1);

matrix reverseMatrix(matrix matrix1);
