#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int arr[]={34,53,2,63,6};
    cout<<"Array before sorting:"<<endl;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size ;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,arr+size);
    cout<<"Array after sorting:"<<endl;
    for(int i=0; i<size ;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}