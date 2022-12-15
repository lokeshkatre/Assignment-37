#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v{1,24,2,452,3};
    vector<int> v2{23,43,2,3,1};

    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());

    vector<int> v3(v.size()+v2.size());

    vector<int>:: iterator it,end;
    end = set_intersection(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
     cout<<"common elements:"<<endl;
    for(it = v3.begin();it!=end;it++)
        cout<<*it<<" ";
    cout <<endl;

}