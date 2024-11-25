#include "SocialNetwork.h"

void SocialNetwork::init(std::string networkName, int minAge) {
    this->networkName = networkName;
    this->minAge = minAge;
    this->profiles.init();
}

void SocialNetwork::clear() {
    this->profiles.clear();
}

std::string SocialNetwork::getNetworkName() const {
    return this->networkName;
}

int SocialNetwork::getMinAge() const {
    return this->minAge;
}

bool SocialNetwork::addProfile(const Profile& profileToAdd) {
    if (profileToAdd.getOwner().getAge() < this->minAge) {
        return false;
    }

    return this->profiles.add(profileToAdd);
}

#include "SocialNetwork.h"

std::string SocialNetwork::getWindowsDevices() const {
    ProfileNode* current = this->profiles.get_first();
    DeviceNode* current2 = NULL;
    std::string result = "";

    while (current) {
        current2 = current->get_data().getOwner().getDevices().get_first();

        while (current2) {
            if (current2->get_data().getOS().find("Windows") != std::string::npos) {
                result += "[" + std::to_string(current2->get_data().getID()) + ", " + current2->get_data().getOS() + "]";

                if (current2->get_next()) {
                    result += ", ";
                }
            }
            current2 = current2->get_next();
        }
        current = current->get_next();
    }
    return result;
}