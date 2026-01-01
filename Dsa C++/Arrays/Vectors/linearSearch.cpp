#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector<int> nums, int size, int key)
{
    for (int i : nums)
    {
        if (i == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int key = 1;
    int found = linear_search(nums, nums.size(), key);
    found ? cout << "Found" : cout << "Not Found";
}