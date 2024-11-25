#ifndef DEVICE_H
#define DEVICE_H

#include <string>

enum DeviceType { PHONE, PC, LAPTOP, TABLET };

#define UbuntuOS "UbuntuLinux"
#define RedHatOS "RedHatLinux"
#define MacOS "MacOS"
#define IOS "IOS"
#define WINDOWS7 "Windows7"
#define WINDOWS10 "Windows10"
#define WINDOWS11 "Windows11"
#define ANDROID "Android"

class Device {
private:
    unsigned int id;
    DeviceType type;
    std::string os;
    bool active;

public:
    Device();
    void init(const unsigned int id, const DeviceType deviceType, const std::string deviceSystem);
    unsigned int getID() const;
    DeviceType getType() const;
    std::string getOS() const;
    bool isActive() const;
    void activate();
    void deactivate();
};

#endif#pragma once
