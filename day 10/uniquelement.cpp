#include <iostream>
#include <set>
using namespace std;

int main() {

    int n;

    cout << "Enter size: ";
    cin >> n;

    set<int> s;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    cout<<"Unique Elements: ";

    for(int x:s)
    {
        cout<<x<<" ";
    }

    return 0;
}