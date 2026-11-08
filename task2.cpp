#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Student {
    int id;
    string name;
    double grade;
};
double graade(const Student students[],int size){
    double sum=0;
    for(int i=0; i<size; i++){sum+=students[i].grade;}
    return sum/size;
}

int main(){
Student students[20];
int n;
cout <<"N: ";
cin >> n;
    
for (int i = 0; i < n; i++) {
    cin >> students[i].id
        >> students[i].name
        >> students[i].grade;
}
int beststu = 0;
for (int i = 1; i < n; i++) {
    if (students[i].grade > students[beststu].grade) {beststu = i;}
}

cout<<fixed<<setprecision(2);
cout<<"Average:"<<graade(students, n)<<"\n";
cout<<"Top student:"<<students[beststu].name;
    return 0;
}