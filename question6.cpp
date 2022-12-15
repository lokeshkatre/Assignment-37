#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v{2,35,3,231,45};
    reverse(v.begin(),v.end());
    for(int i=0 ;i < v.size();i++)
        cout<<v[i]<<" ";
}