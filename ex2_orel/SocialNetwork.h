#pragma once

#include "ProfileList.h"
#include <string>

class SocialNetwork {
public:
    void init(std::string networkName, int minAge);
    void clear();
    std::string getNetworkName() const;
    int getMinAge() const;
    bool addProfile(const Profile& profileToAdd);
    std::string getWindowsDevices() const;

private:
    std::string networkName;
    int minAge;
    ProfileList profiles;
};
#pragma once
