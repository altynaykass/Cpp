#include <iostream>
using namespace std;
void analyzeText(const char text[]){
    int length = 0;
    int vowels = 0;
    int digits = 0;
    int spaces = 0;
for (int i = 0; text[i]!= '\0'; i++){
        char c=text[i];
        length++;
if(c=='a' || c=='e' || c=='i'||
   c == 'o' || c == 'u' ||
   c == 'A' || c == 'E' || c == 'I' ||
   c == 'O' || c == 'U'){
   vowels++;}
if (c >= '0' && c <= '9') {digits++;}
if (c == ' '){spaces++;} }
    cout << "Length: " << length << "\n";
    cout << "Vowels: " << vowels << "\n";
    cout << "Digits: " << digits << "\n";
    cout << "Spaces: " << spaces << "\n";
} 
int main(){
char text[101];
cin.getline(text,101);
analyzeText(text);
return 0;
}
