#include <iostream>
#include <format>
#include <vector>
using namespace std;

import Hr;

int main(){
    Hr::Employee employee1 {'J', 'D', 42, 8000, Hr::Title::ENGINEER};
    Hr::Employee employee2 {'T', 'D', 42, 8000, Hr::Title::ENGINEER};
    Hr::Employee employee3 {'Y', 'D', 42, 8000, Hr::Title::ENGINEER};
    vector<Hr::Employee> lists;
    lists.push_back(employee1);
    lists.push_back(employee2);
    lists.push_back(employee3);
    for(auto i = 0; i < lists.size(); i++){
        cout<<format(" {} \n {} \n {} \n {} \n", lists[i].firstname, lists[i].lastname, lists[i].employeeNumber, lists[i].salary);
    }

    return 0;
}