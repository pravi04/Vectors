#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int n = v.size();

    v.push_back(10);
    v.push_back(20);


    for (int i = 0; i < n; i++)
    {

        cout << v[i] << " ";
    }

    return 0;
}