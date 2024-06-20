#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    int n = v.size();

    for (int i = 0; i < n; i++)
    {

        cout << v[i] << " ";
        }
    cout << endl;

    vector<int>::iterator it = v.begin();

    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}