#include<iostream>
using namespace std;
int Find(int arr[], const int& low, const int& high, const int& x)
{
  if (high >= low)
  {
    int mid = low + (high - low)/2;
    if (arr[mid] == x)
    {
      return mid;
    }
    if (arr[mid] < x)
    {
      int low = mid + 1;
      return Find(arr, low, high, x);
    }
    else
    {
      int high = mid - 1;
      return Find(arr, low, high, x);
    }
  }
  return -1;
}

int main()
{
  int n; int x;
    cin>>n>>x;
  int arr[100];
  for(int i=0;i<n;++i){
      cin>>arr[i];
  }
  int ret1 = Find(arr, 0, n-1, x);

  if (ret1 != -1)
    cout << "YES"; 
  else 
    cout << "NO";

    return 0;
}