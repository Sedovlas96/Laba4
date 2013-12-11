#include <iostream>
#include "functions.h"

//Условие В массиве А(N,М) найти сумму элементов тех столбцов, все элементы которых кратны заданному числу р.

using namespace std;


int main()
{
    const int Rows = 5, Value = 10, p = 2;
    int Matrix[Rows][Columns], SumOfColumnsElem = 0;
    InputMatrix( Matrix, Rows, Value );
    OutputMatrix( Matrix, Rows );
    for( int j = 0; j < Columns; ++j)
    {
        if( CheckOfDivasion( Matrix, Rows, j, p ) )
        {
            SumOfColumnsElem += SumOfColumn( Matrix, Rows , j);
        }
    }
    cout<< " Sum of columns elements = "<< SumOfColumnsElem<< endl;

    return 0;
}


