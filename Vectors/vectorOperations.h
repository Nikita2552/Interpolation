
#include <math.h>

typedef struct
{
    int x;
    int y;
} dot;

typedef struct
{
    dot middle;
} vector;

vector coordVector(dot start, dot finish);

vector sumVectors(vector vector1, vector vector2);

vector diffVectors(vector vector1, vector vector2);

vector multVector(vector vector1, int number);

int moduleVector(vector vector1);

int scalarmultVectors(vector vector1, vector vector2);

vector vectormultVectors(vector vector1, vector vector2);

vector mixedmultVectors(vector vector1, vector vector2, vector vector3);

vector inNewBasisFromOldBasis(vector vector1);

vector inOldBasisFromNewBasis(vector vector1);

vector divSegment(vector vector1, vector vector2, int number);

int cosCornerBetweenVectors(vector vector1, vector vector2);

int proectionVector1(vector vector1, vector vector2);
