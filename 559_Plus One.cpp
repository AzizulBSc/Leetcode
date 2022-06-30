#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       vector <int> result;
       int carry = 1;
        for(int i = digits.size()-1;i>=0;i--){
           int sum = digits[i]+carry;
            if(sum>9){
                carry = 1;
                result.push_back(sum-10);
            }
            else{
                carry = 0;
                result.push_back(sum);
            }
        }
        if(carry == 1){
            result.push_back(1);
        }
        reverse(result.begin(),result.end());
            return result;
    }
};

int main()
{
    vector<int> digits = {1,2,9,9};
    Solution s;
    s.plusOne(digits);
}
