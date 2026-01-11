#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int arr[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
    {
      a+=arr[i];
    }
  cout<<a;
  return 0;
}
