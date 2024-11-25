// Profile.h
#pragma once

#include "User.h"
#include "Page.h"
#include "UserList.h"

class Profile {
public:
    void init(User owner);
    void clear();

    User getOwner() const;
    void setStatus(const std::string& newStatus);
    void addPostToProfilePage(const std::string& post);
    void addFriend(const User& friendToAdd);
    std::string getPage() const;
    std::string getFriends() const;
    std::string getFriendsWithSameNameLength() const;

private:
    User owner;
    Page page;
    UserList friends;
};
#pragma once
