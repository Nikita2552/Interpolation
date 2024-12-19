
#include "Matrix/matrixOperations.h"

matrix createNullMatrix(unsigned int rowcount, unsigned int columncount){

    matrix temp;
    temp.head = malloc(rowcount*columncount*sizeof(int));
    temp.rowcount = columncount;
    temp.rowcount = columncount;

    memset(temp.head, 0, rowcount*columncount*sizeof(int));

    return temp;
}

void setElementtoMatrix(unsigned int row, unsigned int column, int number, matrix matrix1)
{
    matrix1.head[row, column] = number;
}

int detMatrix(matrix matrix1)
{

}

matrix detRecurseMatrix(matrix matrix1)
{

}

int detFourElemMatrix(matrix matrix1)
{
    return matrix1.head[0,0]*matrix1.head[1,1] - matrix1.head[0,1]*matrix1.head[1,0];
}

matrix minorMatrix(unsigned int row, unsigned int column, matrix matrix1)
{

}

matrix unionMatrix(matrix matrix1)
{

}

matrix reverseMatrix(matrix matrix1)
{

}
