#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3};
    cout << "Size: " << vec.size() << endl;
    vec.push_back(5);
    vec.pop_back();
    for (int i : vec)
    {
        cout << i << endl;
    }
    return 0;
}