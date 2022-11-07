#include <iostream>
#include <format>
#include <vector>
using namespace std;

import ModuleClass;

int main(){
    int numberOfMiles {110};
    bool hasEliteSuperRewardsStatus {false};
    ModuleClass::AirlineTicket airlineTicket(numberOfMiles, hasEliteSuperRewardsStatus);
    cout<<format("{},{},{}", airlineTicket.getPassengerName(), airlineTicket.getNumberOfMiles(), airlineTicket.getHasEliteSuperRewardsStatus());

    numberOfMiles ++;
    hasEliteSuperRewardsStatus = false;
    cout<<format("{},{},{}", airlineTicket.getPassengerName(), airlineTicket.getNumberOfMiles(), airlineTicket.getHasEliteSuperRewardsStatus());
    return 0;
}