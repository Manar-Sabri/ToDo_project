
#include <iostream>
#include "header.h"
#include <string>
using namespace std;
//عملت two function بيمسحوا كل عناصر الlist 
//clear()واحده اسمها ودي member function 
//والتانيه اسمها deleteAll ودي non-member function 

void deleteAll(ToDoList  x)
{


    while (!x.isEmpty())
    {
        x.clear();


    }
}
int main()
{
    ToDoList taskInfo;//object of data type toDoList 
    int operationNumber;
    string taskDescription;


    do//do while loop dispaly all opeartions thet can be done on the list and allow user to choose one to perform and call the suitable function 
      //and repeate this again and again untill user press 6 and this means that he want exist the program 
    {
        cout << "  TO DO LIST MENU  " << endl;
        cout << "1-Adding New Task. " << endl;
        cout << "2-Removing Task.   " << endl;
        cout << "3-Display To Do List. " << endl;
        cout << "4-Mark Task As Done. " << endl;
        cout << "5-Check If Task Is Done. " << endl;
        cout << "6-Exist Program. " << endl;
        cout << "7-delete all " << endl;
        cout << "Enter Operation Number. " << endl;
        cin >> operationNumber;

        switch (operationNumber)//take option number and call suitable function from header file 
        {
        case 1:
        {
            cout << "Enter Task Description You Want Add To List " << endl;
            cin.ignore();
            getline(cin, taskDescription);
            taskInfo.addingTask(taskDescription);
        }
        break;
        case 2:

            taskInfo.removeTask();
            break;
        case 3:

            taskInfo.displayToDoList();
            break;
        case 4:

            taskInfo.markAsDone();
            break;
        case 5:
            taskInfo.checkIfDone();
            break;

        case 6:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        case 7:
            deleteAll(taskInfo);
            // taskInfo.clear();
            break;

        default:
            cout << "Please Choose At Most  One Operation " << endl;

        }

    } while (operationNumber != 6);


}

