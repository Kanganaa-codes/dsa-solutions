// Selection Sort
// Time: O(n^2), Space: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();

        for(int i=0; i<n-1; i++){
            int mini=i;
            for(int j=i+1; j<=n-1; j++){
                if(nums[j]<nums[mini]){
                    mini=j;
                }
            }
            int temp=nums[mini];
            nums[mini]=nums[i];
            nums[i]=temp;
        }
        return nums;

    }
};

int main() {
    vector<int> nums = {7, 4, 1, 5, 3};

    Solution sol;
    vector<int> result = sol.selectionSort(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}