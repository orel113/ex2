#ifndef USER_H
#define USER_H

#include "Device.h"
#include "DeviceList.h"

class User {
public:
    void init(unsigned int id, std::string username, unsigned int age);
    void clear();

    unsigned int getID() const;
    std::string getUserName() const;
    unsigned int getAge() const;

    DevicesList& getDevices();
    void addDevice(Device newDevice);
    bool checkIfDevicesAreOn() const;

    std::string getUsername() const;


private:
    unsigned int _userID;
    std::string _userName;
    unsigned int _userAge;
    DevicesList _userDevices;
};

#endif
#pragma once
