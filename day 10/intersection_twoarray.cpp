#include <iostream>
#include <set>
using namespace std;

int main() {

    int n,m;

    cin>>n;

    set<int> s1;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s1.insert(x);
    }

    cin>>m;

    cout<<"Intersection: ";

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;

        if(s1.find(x)!=s1.end())
        {
            cout<<x<<" ";
        }
    }

    return 0;
}