#include <iostream>
#include <string>

typedef long long int  LONGINT;

using namespace std;

int main()
{
    LONGINT nums[]{ 2314, 24, 36, 41, 594 };

    for (LONGINT* ptr = nums; ptr <= &nums[4]; ptr++) {
        *ptr *= 2;
        cout << *ptr << endl;;
    }
}






/*
int main(){
    long long int x, y;
    std::cin >> x >> y;
    if (x > 0 and y > 0 or x < 0 and y < 0) {
        std::cout << x * y;
    }
    else {
        std::cout << 0;
    }
}

*/


/*
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

static unsigned long long int from26(const std::string& str, const int size) {
    const string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned long long int result = 0;
    for (int i = 1; i < size + 1; i++) {
        for (int j = 1; j < 27; j++) {
            if (str[i-1] == alpha[j-1]) {
                result += j * pow(26,size - i);
                break;
            }
        }
    }
    return result;
}

int main() {
    string c;
    getline(cin, c);
    const int size = c.length();
    cout << from26(c, size);
}
*/

/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

#include <string>

std::vector<std::string> Split(std::string str ) {
    str += " ";
    std::vector<std::string> rez;
    std::string k = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') k += str[i];
        else {
            rez.push_back(k);
            k = "";

        }
    }
    return rez;
}

std::string highestScoringWord(const std::string& str)
{
    unsigned int max = 0;
    std::vector<std::string> g = Split(str);
    std::string p = "";
    for (std::string c : g) {
        unsigned int count = 0;
        for (int i = 0; i < c.length(); i++) {
            count += (int)c[i];
        }
        if (count > max) {
            max = count;
            p = c;
        }
    }
    return p;
}


int main() {
    std::string a = "man i need a taxi up to ubud";


   std::cout << highestScoringWord(a);
   
}
*/