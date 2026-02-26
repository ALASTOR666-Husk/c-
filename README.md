# c-
#int main ( int argc, char* argv[] ){

    int a;
    std:: cin >> a;
    
    std:: cout << a << std::endl;
    std:: cout << "HelloWorld" << std::endl;
    std::cerr << "ERROR" << std:: endl;
    int nail[9];

    for (int i=0; i < 9; i++){
        nail[i] = i;
    }
    for (int i=0; i < 9; i++){
        std:: cout << " nail [ " << i << " ] =  " << nail[i] << "\n";
    }
    for (int i=0; i < argc; i++){
        std:: cout <<  " argv [ " << i << " ] =  " << argv[i] << "\n";
    }
    return a;
}

g++ (ccc.cpp - название папки) -o app - компиляция программы

./app - запуск программы
( задача 1
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

string decimalToBase18(int moni) {
if (moni == 0) return "0";
const string digits = "0123456789ABCDEFGH";

string result = "";
while (moni > 0) {
int remainder = moni % 18;
        result += digits[remainder];
        moni /= 18;
}

reverse(result.begin(), result.end());
return result;
}

int main() {
    for (int y = 1; y <= 10; y++) {
        for (int s = 1; s <= 10; s++) {
            cout << setw(2) << decimalToBase18(y * s) << " ";
        }
        cout << endl;
    }
    return 0;
}
)

(
    #include <string>



void getHelp(){
    std::cout<<"Здесь будет помощь."<<"\n";
    
}



int main(
    int argc, char* argv[]){
    setlocale(LC_ALL, "");
    bool needHelp=false;
    std::string helpString;
    helpString = "--help";

    for (int a=0; a < argc; a++){
        std::cout << "argv [" << a << "] = " <<argv[ a ] << "\n";
        if (helpString==argv[a]){
           needHelp=true;
        };  
  }
    if(needHelp){
        getHelp();
  };
  // std::string helpString;
   // if ( helpString == "--help") {
   //     getHelp();
  // };
    /*std::cerr<<"ERROR"
            <<std::endl;
   int n;
   std::cin >> n;
   return n;

}
)