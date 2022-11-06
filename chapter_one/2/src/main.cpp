#include <iostream>
#include <format>
#include <array>
using namespace std;

import Hr;

int main(){
    Hr::Employee employee1 {'J', 'D', 42, 8000, Hr::Title::ENGINEER};
    Hr::Employee employee2 {'T', 'D', 42, 8000, Hr::Title::ENGINEER};
    Hr::Employee employee3 {'Y', 'D', 42, 8000, Hr::Title::ENGINEER};
    array<Hr::Employee, 3> lists =  {employee1, employee2, employee3};
    for(auto i = 0; i < lists.size(); i++){
        cout<<format(" {} \n {} \n {} \n {} \n", lists[i].firstname, lists[i].lastname, lists[i].employeeNumber, lists[i].salary);
    }
    return 0;
}