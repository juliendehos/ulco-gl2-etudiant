
#include <iostream>

class Log {
    public:
        virtual ~Log() = default;
        virtual void log(const std::string & msg) = 0;
};

class LogStdout : virtual public Log {
    public:
        void log(const std::string & msg) override {
            std::cout << msg << std::endl;
        }
};

class LogNull : virtual public Log {
    public:
        void log(const std::string &) override {
        }
};
