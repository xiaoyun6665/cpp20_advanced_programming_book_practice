#include <iostream>
#include <format>
#include <vector>
using namespace std;

import ModuleClass;

int main(){
    int numberOfMiles {110};
    bool hasEliteSuperRewardsStatus {false};
    ModuleClass::AirlineTicket airlineTicket(numberOfMiles, hasEliteSuperRewardsStatus);
    airlineTicket.setNumber(12);
    cout<<format("{},{},{},{}", airlineTicket.getPassengerName(), airlineTicket.getNumberOfMiles(), airlineTicket.getHasEliteSuperRewardsStatus(), airlineTicket.getNumber());
    return 0;
}