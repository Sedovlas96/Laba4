#ifndef FUNCTIONS_H
#define FUNCTIONS_H

const int Columns = 6;

void InputMatrix( int Matrix[][Columns], int Rows, int Value );
void OutputMatrix( int Matrix[][Columns], int Rows );
int SumOfColumn(int Matrix[][Columns], int Rows , int NumColumn);
bool CheckOfDivasion(int Matrix[][Columns], int Rows, int NumColumn, int p);


#endif // FUNCTIONS_H
