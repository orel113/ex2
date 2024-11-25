#include "Device.h"

Device::Device() {
    this->id = 0;
    this->type = LAPTOP;
    this->os = "Unknown";
    this->active = true;
}

void Device::init(const unsigned int id, const DeviceType deviceType, const std::string deviceOS) {
    this->id = id;
    this->type = deviceType;
    this->os = deviceOS;
    this->active = true;
}

unsigned int Device::getID() const {
    return this->id;
}

DeviceType Device::getType() const {
    return this->type;
}

std::string Device::getOS() const {
    return this->os;
}

bool Device::isActive() const {
    return this->active;
}

void Device::activate() {
    this->active = true;
}

void Device::deactivate() {
    this->active = false;
}