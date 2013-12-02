#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

//Условие В массиве А(N,М) найти сумму элементов тех столбцов, все элементы которых кратны заданному числу р.

using namespace std;

const int Columns = 5;
void InputMatrix( int Matrix[][Columns], int Rows, int Value );
void OutputMatrix( int Matrix[][Columns], int Rows );
int SumOfColumn(int Matrix[][Columns], int Rows , int NumColumn);
bool CheckOfDivasion(int Matrix[][Columns], int Rows, int NumColumn, int p);


int main()
{
    const int Rows = 4, Value = 10, p = 2 ;
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
    cout<< " Sum of columns elements ="<< SumOfColumnsElem;

    return 0;
}

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
                cout<< endl<< endl<< endl;
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

