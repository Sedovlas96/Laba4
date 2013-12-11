#include "functions.h"
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <iostream>

using namespace std;

void InputMatrix( int Matrix[][Columns], int Rows, int Value )
{
    srand(time(NULL));
    for( int i = 0; i < Rows; ++i )
    {
        for( int j = 0; j < Columns; ++j )
        {
            Matrix[i][j] = rand( ) % Value;
        }
    }
}

void OutputMatrix( int Matrix[][Columns], int Rows )
{
    cout << endl;
    for( int i = 0; i < Rows; ++i )
    {
        for( int j = 0; j < Columns; ++j )
        {
            printf( " % 3d ", Matrix[i][j] );
            if ( j == Columns - 1)
            {
                cout<< endl<< endl;
            }
        }
    }
}

int SumOfColumn(int Matrix[][Columns], int Rows , int NumColumn)
{
    int Sum = 0;
    for( int i = 0; i < Rows; ++i )
    {
        Sum += Matrix[i][NumColumn];
    }
    return Sum;
}

bool CheckOfDivasion(int Matrix[][Columns], int Rows, int NumColumn, int p)
{
    for( int i = 0; i < Rows; ++i )
    {
        if( Matrix[i][NumColumn ] % p )
        {
            return 0;
        }
    }
    return 1;
}

