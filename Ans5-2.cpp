#include <iostream>
using namespace std;

#define N 5
template <class T>

void sort<T arr,int size>
{
  for(int i=0;i<size;i++)
 {
  for(int j=i+1;j<size;i++)
  {
  if(arr[i]>arr[j])
   {
    T temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
}

int main()
{
  int array[N];

cout<<"Enter your sort array:";
for(int i=0;i<N;i++)
{
  cin>>array[i];
}

sort(array,N);

cout<<"sort the array:";
for(int i=0;i<N;i++)
{
  cout<<array[i]<<",";
}

return 0;
}
