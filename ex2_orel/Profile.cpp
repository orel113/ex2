#include "Profile.h"

void Profile::init(User owner) {
    this->owner = owner;
    this->page.init();
    this->friends.init();
}

void Profile::clear() {
    this->page.clearPage();
    this->friends.clear();
}

User Profile::getOwner() const {
    return this->owner;
}

void Profile::setStatus(const std::string& newStatus) {
    this->page.setStatus(newStatus);
}

void Profile::addPostToProfilePage(const std::string& post) {
    this->page.addLineToPosts(post);
}

void Profile::addFriend(const User& friendToAdd) {
    this->friends.add(friendToAdd);
}

std::string Profile::getPage() const {
    return "Status: " + this->page.getStatus() + "\n*******************\n*******************\n" + this->page.getPosts();
}

std::string Profile::getFriends() const {
    std::string friendsString;
    UserNode* curr = this->friends.get_first();

    while (curr != nullptr) {
        friendsString += curr->get_data().getUsername();
        if (curr->get_next() != nullptr) {
            friendsString += ",";
        }
        curr = curr->get_next();
    }

    return friendsString;
}

std::string Profile::getFriendsWithSameNameLength() const {
    std::string sameLengthFriends;
    size_t nameLength = this->owner.getUsername().length();
    UserNode* curr = this->friends.get_first();

    while (curr != nullptr) {
        if (curr->get_data().getUsername().length() == nameLength) {
            sameLengthFriends += curr->get_data().getUsername();
            if (curr->get_next() != nullptr && curr->get_next()->get_data().getUsername().length() == nameLength) {
                sameLengthFriends += ",";
            }
        }
        curr = curr->get_next();
    }

    return sameLengthFriends;
}