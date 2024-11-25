#include "DeviceList.h"
#include <iostream>

void DeviceNode::init(const Device device) {
    this->_data = device;
    this->_next = nullptr;
}

DeviceNode* DeviceNode::get_next() const {
    return this->_next;
}

Device& DeviceNode::get_data() {
    return this->_data;
}

void DeviceNode::set_next(DeviceNode* next) {
    this->_next = next;
}

void DeviceNode::set_data(const Device new_data) {
    this->_data = new_data;
}

void DevicesList::init() {
    this->_first = nullptr;
}

void DevicesList::clear() {
    DeviceNode* temp;
    while (this->_first != nullptr) {
        temp = this->_first;
        this->_first = this->_first->get_next();
        delete temp;
    }
}

DeviceNode* DevicesList::get_first() const {
    return this->_first;
}

void DevicesList::set_first(DeviceNode* first) {
    this->_first = first;
}

void DevicesList::add(const Device new_device) {
    DeviceNode* new_node = new DeviceNode;
    new_node->init(new_device);

    if (this->_first == nullptr) {
        this->_first = new_node;
    }
    else {
        DeviceNode* curr = this->_first;
        while (curr->get_next() != nullptr) {
            curr = curr->get_next();
        }
        curr->set_next(new_node);
    }
}