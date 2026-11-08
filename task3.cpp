#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Address{
    string city;
    string street;
};
struct Employee{
    string name;
    double salary;
    Address address;
};
void increaseSalary(Employee* employee, double amount){
    employee->salary+=amount;}
int main(){
    Employee e;
    double increase;
    cout<<"Name:";
    getline(cin,e.name);
    cout<<"Salary:";
    cin>>e.salary;
    cout << "City: ";
    getline(cin >> ws, e.address.city);
    cout << "Street: ";
    getline(cin, e.address.street);
    cout<<"Increase:";
    cin>>increase;

increaseSalary(&e,increase);
    cout << fixed << setprecision(2);
    cout << "Name: " << e.name << "\n";
    cout << "City: " << e.address.city << "\n";
    cout << "Street: " << e.address.street << "\n";
    cout << "Salary: " << e.salary << "\n";
    return 0;
}