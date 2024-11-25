#pragma once

#include <string>

class Page {
public:
    void init();
    std::string getPosts() const;
    std::string getStatus() const;
    void clearPage();
    void setStatus(const std::string status);
    void addLineToPosts(const std::string newLine);

private:
    std::string status;
    std::string posts;
};
#pragma once
