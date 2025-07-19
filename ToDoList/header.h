#pragma once
#pragma once
#include <string>
using namespace std;
struct todo {
    string data;
    todo* next;
    bool completed;
};

class ToDoList {//declares a class data type 
private:

public:// 8 public member functions 
    todo* head;
    ToDoList();
    bool isEmpty();//function used to check if list empty or not 
    void addingTask(std::string taskDescription);//function used to add new task to the list 
    void displayToDoList();//function used to display all tasks in the list 
    void removeTask();//function used to remove  specific task from list
    void markAsDone();//function used to mark specific task as done 
    void checkIfDone();
    void clear();//function used to check if a specific has been dine or not yet 
    ~ToDoList();//deconstructor display something at the end of the program 
};
