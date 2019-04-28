#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>a;
    for(int i=0;i<100;i++)
    {
        a.push_back(i);
    }
    cout<<"a[4]:"<<a[4]<<endl;

    for(int i=0;i<6;i++)
    {
        cout<<i<<":"<<a[i]<<endl;
    }
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    cout<<"去重前"<<a.size()<<endl;

    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end(),a.end()));
    cout<<"去重前"<<a.size()<<endl;
}
