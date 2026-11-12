#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id << ", Name: " << emp.name << ", Salary: $" << emp.salary << endl;
}


int main() {

    vector<Employee>employees = {
        { 101,"Jon",100000 },
        { 102,"Spider",300000 },
        { 103,"Wanda",140000 },
        { 104,"Max",150000 },
        { 105,"Dustin",190000 },
    };

    sort(
        employees.begin(),
        employees.end(),
        [](const Employee& e1,
            const Employee& e2) {
                return e1.salary > e2.salary;
        }
    );



    cout << "Employees sorted by salary->Highest to lowest \n";
    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee>highEarners;

    copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarners),
        [](const Employee& e) {
            return e.salary > 150000;
        }
    );

    cout << "Employees who are higgh earners \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalsalary = accumulate(
        employees.begin(),
        employees.end(),
        0.0,
        [](double sum, const Employee& e) {
            return sum + e.salary;
        }
    );

    double avgSalary = totalsalary / employees.size();

    auto highestPaid = max_element(
        employees.begin(),
        employees.end(),
        [](const Employee& e1, const Employee& e2) {
            return e1.salary < e2.salary;
        }
    );

    return 0;
}

