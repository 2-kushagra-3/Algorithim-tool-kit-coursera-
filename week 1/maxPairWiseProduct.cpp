 #include <iostream>
    #include <sstream>
    #include <vector>
    #include <algorithm>
    #include <iterator>

    using namespace std;

    template< typename Type >
    class Solution {
    public:

        using Collection = vector< Type >;
        using Iter = istream_iterator< Type >;

        void test( istream& input, ostream& output, Collection A={}, size_t N=0, Type first=0, Type second=0 ){
            input >> N, copy_n( Iter( input ), N, back_inserter( A ));
            auto i = max_element( A.begin(), A.end() ); first  = *i, *i = 0;
            auto j = max_element( A.begin(), A.end() ); second = *j;
            output << first * second << endl;
        }

    };

    int main(){

        using Type = unsigned long long;

        Solution< Type > solution;
        solution.test( cin, cout );

        return 0;
    }