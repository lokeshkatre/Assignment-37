#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cout<<"enter 0 to stop appending"<<endl;
    cout<<"Enter vector:"<<endl;
    cin>>n;
    while(n)
    {
        arr.push_back(n);
        cout<<"enter 0 to stop appending"<<endl;
        cout<<"Enter vector:"<<endl;
        cin>>n;
    }
    cout<<"vector is :"<<endl;
   for(auto i= arr.begin();i!=arr.end();i++)
   {
       cout<<*i<<" ";
   }
    cout<<endl;
    return 0;
}