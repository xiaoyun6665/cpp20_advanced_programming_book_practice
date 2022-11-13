#include <iostream>
#include <format>
#include <string>
using namespace std;

void myPrint(string_view value1, string_view value2) {
    cout<<format("{},{}\n", value1, value2);
}

int main(){
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);
    auto result  = str1 <=> str2;
    if(result == strong_ordering::less) {
        myPrint(str1, str2);
    } else if(result == strong_ordering::greater) {
        myPrint(str2, str1);
    } else {
        myPrint(str1 + "=" + str2, "same");
    }
}

