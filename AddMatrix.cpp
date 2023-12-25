#include <iostream>

using namespace std;

int main()
{
  int rows, columns;

  // INput dimenstions of the matrices
  cout << "Enter the number of rows for the matrices : ";
  cin >> rows;

  cout << "Enter the number of columns for the matrices : ";
  cin >> columns;

  int matrix1[rows][columns], matrix2[rows][columns], sumMatrix[rows][columns];

  // Input elements for the first matrix
  cout << "Enter elements for first matrix : \n";
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < columns; j++)
        {
          cout << "Enter element at position (" << i + 1 << "," << j + 1 << ") : ";
          cin >> matrix1[i][j];
        }
    }

  
  // Input elements for the second matrix
  cout << "Enter elements for second matrix : \n";
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < columns; j++)
        {
          cout << "Enter element at position (" << i + 1 << "," << j + 1 << ") : ";
          cin >> matrix2[i][j];
        }
    }
  

  // Adding the two matrix
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < columns; j++)
        {
          sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

  
  // Displaying the result
  for(int i = 0; i < rows; i++)
    {
      for(int j = 0; j < columns; j++)
        {
          cout << sumMatrix[i][j] << " ";
        }
      cout << endl;
    }

  return 0;
}
