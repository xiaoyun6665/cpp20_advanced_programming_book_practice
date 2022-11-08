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
        int mNumber;
    public:
        AirlineTicket(int &numberOfMiles, bool &hasEliteSuperRewardsStatus) : mNumberOfMiles{numberOfMiles}, mHasEliteSuperRewardsStatus{hasEliteSuperRewardsStatus} {};
        std::string getPassengerName() const;
        int &getNumberOfMiles();
        bool &getHasEliteSuperRewardsStatus();
        int getNumber() const;
        void setNumber(int value);
    };

};

int ModuleClass::AirlineTicket::getNumber() const
{
    return mNumber;
}

void ModuleClass::AirlineTicket::setNumber(int value)
{
    mNumber = value;
}

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
