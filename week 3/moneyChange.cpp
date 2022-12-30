#include <iostream>
#include <vector>

using namespace std;

template< typename Type >
class Solution {
public:
    using VI = vector< Type >;
    Type coin_change( Type N, VI C=VI{ 10, 5, 1 }, Type ans=0 ){
        for( auto coin: C )
            for(; N >= coin; N -= coin, ++ans );
        return ans;
    }
};

int main() {
    using Type = int;
    Solution< Type > solution;
    Type N{ 0 };
    cin >> N;
    auto ans = solution.coin_change( N );
    cout << ans << endl;
    return 0;
}   