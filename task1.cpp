#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student{
     int id;
     string name;
     double grade;
     string status;};
    
int main() {
    Student s;
    cout<<"Id:";
    cin>>s.id;
    cout<<"Name:";
    
getline(cin>>ws, s.name);
    cout<<"Grade:";
    cin>>s.grade;
if(s.grade>=50){s.status="passed";}else{s.status="failed";}

    cout<<"id:"<<s.id
        <<"\n"<<"name:"<<s.name<<"\n"
        <<fixed << setprecision(2)
        <<"grade:"<<s.grade<<"\n"  
        <<"status:"<<s.status;
    return 0;
}