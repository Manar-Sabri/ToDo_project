#include "header.h"
#include <iostream>

using namespace std;

ToDoList::ToDoList() {
	head = nullptr;
}

bool ToDoList::isEmpty() {
	return (head == NULL);
}

void ToDoList::addingTask(string taskDescription)
{
	todo* newTask = new todo();//create newnode 
	newTask->data = taskDescription;//assign the taskDescriptionto the new node
	newTask->next = NULL;
	newTask->completed = false;
	if (isEmpty())
	{
		head = newTask;

	}
	else
	{

		todo* temp = head;
		while (temp != NULL && temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newTask;


	}
}




void ToDoList::displayToDoList()
{
	if (isEmpty())// check if my list is empty or no before print 
	{
		cout << "There are no tasks to perform, take a break ^_^ ." << endl;
		cout << endl;
	}
	else
	{
		cout << "MY TO DO LIST" << endl;
		todo* temp = head;
		while (temp != NULL)
		{

			cout << "#" << temp->data << endl;
			temp = temp->next;
		}
	}

}

void ToDoList::removeTask()
{
	string taskDescription;

	if (isEmpty())//check if list is empty before remove 
	{
		cout << "There No Tasks To Remove " << endl;//display if list is empty 
	}
	else//if list is not empty 
	{
		cout << "Enter Task Description You Want Remove From List " << endl;
		cin.ignore();//input task description that will remove 
		getline(cin, taskDescription);
		todo* delptr = head;//create new pointer point to the same point that pointer  head point to 

		if (head->data == taskDescription)//check if the first node is the desired node 
		{
			head = head->next;//move pointer head to the next node 
			delete delptr;//delete pointer delptr 
		}
		else//if not the desired node is the first 
		{
			todo* prv = NULL;//create newpointer point to null 
			delptr = head;//return pointer delptr to head again 
			while (delptr != NULL && delptr->data != taskDescription)
			{
				prv = delptr;
				delptr = delptr->next;

			}
			if (delptr != NULL)//found 
			{
				prv->next = delptr->next;
				delete delptr;
			}
			else//not found 
			{
				cout << "This Task " << taskDescription << " Does Not Exist  " << endl;//display this if not found 
			}

		}
	}

}


void ToDoList::markAsDone()
{
	string taskDescription;
	if (isEmpty())//check if list is empty or not 
	{
		cout << "NO TASKS TO BE MARKED " << endl;

	}
	else
	{
		cout << "Enter Task Description You Want Mark As Done " << endl;
		cin.ignore();
		getline(cin, taskDescription);
		todo* temp = head;

		while (temp != NULL && temp->data != taskDescription)//search for suitable node 
		{
			temp = temp->next;

		}
		if (temp != NULL)//found 
		{
			temp->completed = true;//mark it as done task 
			cout << "DONE !" << endl;
		}

		else//not found 
		{
			cout << "This Task " << taskDescription << " Does Not Exist  " << endl;
		}

	}


}


void ToDoList::checkIfDone()
{
	string taskDescription;
	if (isEmpty())//check if list is empty or not 
	{
		cout << "NO TASKS TO BE CHECKED " << endl;//display this if list is empty 

	}
	else//list is not empty 
	{
		cout << "Enter Task Description You Want Check " << endl;
		cin.ignore();
		getline(cin, taskDescription);
		todo* temp = head;

		while (temp != NULL && temp->data != taskDescription) //search for desired node 
		{
			temp = temp->next;

		}
		if (temp != NULL)//found 
		{
			if (temp->completed == true)
			{
				cout << "Task has been done ! " << endl;// task is already done 
			}
			else//task has not be done yet 
				cout << "Task does not achieve yet ..." << endl;
		}

		else
		{
			cout << "This Task " << taskDescription << " Does Not Exist  " << endl;
		}

	}
}
void ToDoList::clear()
{
	head = NULL;
}

ToDoList::~ToDoList()
{
	cout << endl;
	cout << "THANK YOU SEE  YOU AGAIN AT ANOTHER  PROUDUCTIVE DAY " << endl;

}
