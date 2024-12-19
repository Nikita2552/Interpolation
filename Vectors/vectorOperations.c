
#include "Vectors/vectorOperations.h"

vector coordVector(dot start, dot finish)
{
    vector temp;
    temp.middle.x = finish.x - start.x;
    temp.middle.y = finish.y - start.y;

    return temp;
}

vector sumVectors(vector vector1, vector vector2)
{
    vector temp;
    temp.middle.x = vector1.middle.x + vector2.middle.y;
    temp.middle.y = vector1.middle.x + vector2.middle.y;

    return temp;
}

vector diffVectors(vector vector1, vector vector2)
{
    vector temp;
    temp.middle.x = vector2.middle.x - vector1.middle.x;
    temp.middle.y = vector2.middle.x - vector1.middle.y;

    return temp;
}

vector multVector(vector vector1, int number)
{
    vector temp;
    temp.middle.x = number*vector1.middle.x;
    temp.middle.y = number*vector1.middle.y;

    return temp;
}

int moduleVector(vector vector1)
{
    return sqrt(pow(vector1.middle.x, 2) + pow(vector1.middle.x, 2));
}

int scalarmultVectors(vector vector1, vector vector2)
{
    return vector1.middle.x * vector2.middle.x + vector1.middle.y * vector2.middle.y;
}

vector vectormultVectors(vector vector1, vector vector2)
{

}

vector mixedmultVectors(vector vector1, vector vector2, vector vector3)
{

}

vector inNewBasisFromOldBasis(vector vector1)
{

}

vector inOldBasisFromNewBasis(vector vector1)
{

}

vector divSegment(vector vector1, vector vector2, int number)
{
    vector temp;
    temp.middle.x = (vector1.middle.x + number*vector2.middle.x)/(1+number);
    temp.middle.y = (vector1.middle.y + number*vector2.middle.y)/(1+number);

    return temp;
}

int cosCornerBetweenVectors(vector vector1, vector vector2)
{
    int top = scalarmultVectors(vector1, vector2);
    int bottom = moduleVector(vector1) * moduleVector(vector2);

    return top/bottom;
}

int proectionVector1(vector vector1, vector vector2)
{
     int top = scalarmultVectors(vector1, vector2);
     int bottom = moduleVector(vector2);

     return top/bottom;
}
