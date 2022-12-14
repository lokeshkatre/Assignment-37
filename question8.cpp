#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
   int arr[]={2,35,42,53,5};
   int size = sizeof(arr)/sizeof(int);
    sort(arr,arr+size,greater<>());
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}