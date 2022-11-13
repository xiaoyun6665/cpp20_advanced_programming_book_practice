#include <iostream>
#include <format>
#include <string>
using namespace std;

string replace(const string haystack, const string needle, const string replacementString) {
    string result {haystack};
    cout<<result<<endl;
    while(result.find(needle) != string::npos){
        int start = haystack.find(needle);
        cout<<start<<endl;
        result.replace(start, needle.size(), replacementString);
        cout<<result<<endl;
    }
    return result;
}

int main(){
    string haystack;
    string needle;
    string replacementString;

    getline(cin, haystack);
    getline(cin, needle);
    getline(cin, replacementString);
    cout<<haystack<<endl;
    cout<<needle<<endl;
    cout<<replacementString<<endl;
    auto result = replace(haystack,needle,replacementString);
    cout<<result<<endl;
}

