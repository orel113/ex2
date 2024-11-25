#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age) {
    this->_userID = id;
    this->_userName = username;
    this->_userAge = age;
    this->_userDevices.init();
}

void User::clear() {
    this->_userDevices.clear();
}

unsigned int User::getID() const {
    return this->_userID;
}

std::string User::getUserName() const {
    return this->_userName;
}

unsigned int User::getAge() const {
    return this->_userAge;
}

DevicesList& User::getDevices() {
    return this->_userDevices;
}

void User::addDevice(Device newDevice) {
    this->_userDevices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const {
    DeviceNode* current = this->_userDevices.get_first();

    while (current != NULL) {
        if (!current->get_data().isActive()) {
            return false;
        }
        current = current->get_next();
    }

    return true;
}


std::string User::getUsername() const {
    return this->_userName;
}