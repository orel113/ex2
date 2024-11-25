#include "Page.h"

void Page::init() {
    this->status = "";
    this->posts = "";
}

std::string Page::getPosts() const {
    return this->posts;
}

std::string Page::getStatus() const {
    return this->status;
}

void Page::clearPage() {
    this->posts = "";
}

void Page::setStatus(const std::string newStatus) {
    this->status = newStatus;
}

void Page::addLineToPosts(const std::string newLine) {
    this->posts += newLine + "\n";
}
