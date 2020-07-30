#pragma once

#include <string>
#include <vector>

class Itemable {
    public:
        virtual ~Itemable() = default;
        virtual std::vector<std::string> getItems() const = 0;
        virtual std::string getTitle() const = 0;
};

