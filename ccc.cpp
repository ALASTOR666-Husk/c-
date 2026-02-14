#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
string tablliToBase18(int tablli) {
  if (tablli == 0) return "0";
const string digits = "0123456789ABCDEFGH";
string result = "";
  while (tablli > 0) {
        int  = tablli % 18;
        result += digits[envy];
        tablli /= 18;
  }
reverse(result.begin(), result.end());
return result;
}

int main() {
for (int m = 1; m <= 10; m++) {
for (int y = 1; y <= 10; y++) {
cout << setw(2) << tablliToBase18(m * y) << " ";
}
cout << endl;
}
    return 0;
}
