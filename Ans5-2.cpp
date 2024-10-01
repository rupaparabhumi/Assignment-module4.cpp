#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int arr[] = {20, 17, 32, 44};
  int size = sizeof(arr) / sizeof(arr[0]);
  int num;

  cout << "Before sorting:" << endl;
  for (int num : arr)
    cout << num << "" << endl;
  cout << endl;

  sortArray(arr, size);

  cout << "After sorting:" << endl;
  for (int num : arr)
    cout << num << "" << endl;
  cout << endl;

  return 0;
}
