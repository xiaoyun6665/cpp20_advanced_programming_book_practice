#include <iostream>
#include <format>
using namespace std;

import Hr;

int main(){
    Hr::Employee employee {'J','D',42,8000};
    cout<<format(" {} \n {} \n {} \n {}", employee.firstname, employee.lastname, employee.employeeNumber, employee.salary);
    return 0;
}