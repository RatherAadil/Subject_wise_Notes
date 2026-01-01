#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &nums) // passing by reference to make changes in place
{
    int size = nums.size();
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(nums[i], nums[j]);
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    reverse(nums);
    cout << "Reversed: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
}