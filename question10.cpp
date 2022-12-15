#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={2,3,5,43};
    int element;
    cout<<"Enter element to find"<<endl;
    cin>>element;

    vector<int>::iterator it = find(v.begin(),v.end(),element);
    if(it!=v.end())
    {
        cout<<"Element "<<element<<" found at "<<it-v.begin()+1<<endl;
    }
    else
    cout<<"Element "<<element<<" does not found"<<endl;
    return 0;
}