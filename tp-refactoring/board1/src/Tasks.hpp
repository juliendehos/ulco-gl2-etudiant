#include<list>
#include <string>
#include <vector>

class Tasks {
    public:
        virtual ~Tasks() = default;
        virtual void add(const std::string & txt) = 0;
        virtual std::vector<std::string> report() const = 0;
};

class TasksList : virtual public Tasks {
    private:
        std::list<std::string> _tasks;
    public:
        void add(const std::string & txt) override {
            _tasks.push_back(txt);
        }
        std::vector<std::string> report() const override {
            std::vector<std::string> v;
            std::copy(_tasks.begin(), _tasks.end(), std::back_inserter(v));
            return v;
        }
};

class TasksVector : virtual public Tasks {
    private:
        std::vector<std::string> _tasks;
    public:
        void add(const std::string & txt) override {
            _tasks.push_back(txt);
        }
        std::vector<std::string> report() const override {
            return _tasks;
        }
};
