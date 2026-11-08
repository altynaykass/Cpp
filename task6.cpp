#include <iostream>
#include <string>
using namespace std;
struct Book{
    string title;
    string author;
    int year;
};
void printMatches(const Book books[], int size, const string& query) {
    bool found = false;

    cout << "Matches:\n";

    for (int i = 0; i < size; i++) {
        if (books[i].title.find(query) != string::npos) {
            cout << books[i].title << " by "
                 << books[i].author << " "
                 << books[i].year << "\n";

            found = true;
        }
    }

    if (!found) {
        cout << "No matches\n";
    }
}
int main(){
Book books[10];
int n;
cout <<"N: ";
cin >> n;
for (int i = 0; i < n; i++) {
cout << "Title: ";
 getline(cin >> ws, books[i].title);
cout << "Author: ";
 getline(cin, books[i].author);
cout << "Year: ";
 cin >> books[i].year;}
string query;
    cout << "Query: ";
    getline(cin >> ws, query);

    printMatches(books, n, query);

    int uppercase = 0;

    for (int i = 0; i < n; i++) {
        for (string::iterator it = books[i].title.begin();
             it != books[i].title.end(); it++) {
            if (*it >= 'A' && *it <= 'Z') {
                uppercase++;
            }
        }
    }

    cout << "Uppercase letters: " << uppercase << "\n";

    return 0;
}