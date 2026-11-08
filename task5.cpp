#include <iostream>
#include <string>
using namespace std;

string replaceFirst(string text, const string& searchWord,
const string& replacement) {
size_t position = text.find(searchWord);

if (position != string::npos) {
text.replace(position, searchWord.length(), replacement);
} else {
cout << "Not found\n";}
return text;}
int main() {
    
string text;
string searchWord;
string replacement;

getline(cin, text);
getline(cin, searchWord);
getline(cin, replacement);

string result = replaceFirst(text, searchWord, replacement);

cout << "Result: " << result << "\n";
cout << "Length: " << result.length() << "\n";
return 0;
}