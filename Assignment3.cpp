#include <iostream>
#include <vector>
using namespace std;

void insertafter(vector<int> x,int fv,int sv) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i]==fv)
        {
            x.insert(x.begin() + i+1, sv);
        }
    }
}

int main()
{
    vector<int> v;
    int n;
    int x;
    cout << "Enter the number of integers you would like to input: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i << "th integer: ";
        cin >> x;
        v.push_back(x);
    }
    int a;
    int b;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    insertafter(v, a, b);
}
