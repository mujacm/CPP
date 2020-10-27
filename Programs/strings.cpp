/* Problem: Given a string, S , of length that is indexed from 0 to N-1 , print its even-indexed and odd-indexed characters as space-separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
 
Sample Input: MANIPAL
Sample Output: MNPL AIA
*/

#include <vector>
#include <iostream>
#include <string>


int main() {
            std::string str;
            std::cin>>str;

            for(unsigned int j=0; j< str.length(); j+=2)
            {
                    std::cout << str[j];
            }

            std::cout<<" ";

            for(unsigned int j=1; j< str.length(); j+=2)
            {
                    std::cout<<str[j];
            }
        return 0;
}
