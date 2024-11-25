#pragma once

#include "Device.h"

class DeviceNode {
public:
    void init(const Device device);

    DeviceNode* get_next() const;
    Device& get_data();

    void set_next(DeviceNode* next);
    void set_data(const Device new_data);

private:
    Device _data;
    DeviceNode* _next;
};

class DevicesList {
public:
    void init();
    void clear();

    DeviceNode* get_first() const;

    void set_first(DeviceNode* first);

    void add(const Device device_to_add);

private:
    DeviceNode* _first;
};
#pragma once
