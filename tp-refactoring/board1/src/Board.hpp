#include "Log.hpp"
#include "Tasks.hpp"

#include <memory>

class Board : virtual public Tasks, virtual public Log {
    public:        
        virtual ~Board() = default;
};

class BoardListStdout : public Board, public TasksList, public LogStdout {
};

class BoardVectorNull : public Board, public TasksVector, public LogNull {
};
