#include <iostream>

using namespace std;

int main()
{
  int n, i, j, temp;

  cout << "Enter the number of elements in the array : ";
  cin >> n;

  int arr[n];

  cout << "Enter elements of the array : \n";
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  // Bubble sort for ascending order
  for (i = 0; i < n-1; i++)
    {
      for (j = 0; j < n-i-1; j++)
        {
          if(arr[j] > arr[j+1])
          {
            //Swap elements if they are in the wrong order
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
          }
        }
    }

  cout << "Array in ascending order : \n";
  for(i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  return 0;
}
