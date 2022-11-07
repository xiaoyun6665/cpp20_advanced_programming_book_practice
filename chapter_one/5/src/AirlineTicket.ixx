#include <string>
export module ModuleClass;

export namespace ModuleClass
{
    class AirlineTicket
    {
    private:
        /* data */
        std::string mPassengerName{"unknow passengername"};
        int &mNumberOfMiles;
        bool &mHasEliteSuperRewardsStatus;

    public:
        AirlineTicket(int &numberOfMiles, bool &hasEliteSuperRewardsStatus) : mNumberOfMiles{numberOfMiles}, mHasEliteSuperRewardsStatus{hasEliteSuperRewardsStatus} {};
        std::string getPassengerName() const;
        int &getNumberOfMiles();
        bool &getHasEliteSuperRewardsStatus();
    };

};

std::string ModuleClass::AirlineTicket::getPassengerName() const
{
    return mPassengerName;
}

int &ModuleClass::AirlineTicket::getNumberOfMiles()
{
    return mNumberOfMiles;
}

bool &ModuleClass::AirlineTicket::getHasEliteSuperRewardsStatus()
{
    return mHasEliteSuperRewardsStatus;
}
