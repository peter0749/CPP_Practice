/*unordered_set practice*/
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using std::unordered_set;
using std::cin;
using std::cout;
using std::endl;
using std::max_element;

class Solution {
    public:

        /*Solution::solution: find the missing iteger in an array.*/
        int solution( int *A, size_t n) {
            unordered_set<int> s;
            int maxele=*max_element(A, A+n);
            s.insert(A, A+n);
            for(int i=1; i<=maxele; ++i) if(!s.count(i)) return i;
            return maxele+1;
        }
};

int main(void) {
    const size_t arr_z=10;
    int arr[arr_z];
    Solution sol;
    int n;
    cin>>n;
    for(int i=0; i!=n; ++i) cin>>arr[i];
    cout<<sol.solution(arr,n)<<endl;
}
