#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={2,3,5,43};
   
    for(auto i= arr.begin();i!=arr.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}