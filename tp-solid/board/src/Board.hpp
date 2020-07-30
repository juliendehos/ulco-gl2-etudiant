#pragma once

#include "Itemable.hpp"

#include <fstream>
#include <iostream>

class Board : public Itemable {
    private:
        std::vector<std::string> _tasks;
        std::ofstream _ofs;

    public:
        Board(const std::string & filename) : _ofs(filename) {}

        void add(const std::string & t) {
            _tasks.push_back(t);
        }

        std::vector<std::string> getItems() const override {
            return _tasks;
        }

        virtual std::string getTitle() const override {
            return "Board";
        }

        void reportStdout() {
            for (const std::string & item : getItems())
                std::cout << item << std::endl;
            std::cout << std::endl;
        }

        void reportFile() {
            for (const std::string & item : getItems())
                _ofs << item << std::endl;
            _ofs << std::endl;
        }
};

