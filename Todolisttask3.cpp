#include <iostream>
#include <vector>

using namespace std;

class Task        // Class of name task is created
{      
public:
    string name;
    bool isCompleted;  // Datatype bool is used 

    Task(string name)
    {
        this->name = name;
        this->isCompleted = false;
    }
};

class TaskManager 
{
private:
    vector<Task> tasks;

public:
    void addTask(string taskName) 
    {
        Task newTask(taskName);
        tasks.push_back(newTask);
    }

    void viewTasks() 
    {
        cout << endl << "To-Do List:" << endl;
        for (Task task : tasks) 
        {
            string status = task.isCompleted ? "Completed" : "Pending";
            cout << "- " << task.name << " (" << status << ")" << endl;
        }
    }

    void markTaskAsCompleted(string taskName) 
    {
        for (Task &task : tasks) 
        {
            if (task.name == taskName) 
            {
                task.isCompleted = true;
                break;
            }
        }
    }

    void removeTask(string taskName) 
    {
        for (int i = 0; i < tasks.size(); i++) 
        {
            if (tasks[i].name == taskName) 
            {
                tasks.erase(tasks.begin() + i);
                break;
            }
        }
    }
};

int main() 
{
    TaskManager taskManager;

    int option;
    string taskName;

    do {
        cout<<" \n Welcome to TK's To-Do List customers!!"<<endl;
        cout << endl << "To-Do List Manager" << endl;
        cout << "\n************************\n\t" << endl;
        cout << "\t\n1. Add Task" << endl;
        cout << "\t\n2. View Tasks" << endl;
        cout << "\t\n3. Mark Task as Completed" << endl;
        cout << "\t\n4. Remove Task" << endl;
        cout << "\t\n5. Exit" << endl;
        cout<<"\n -----------------------\n\t"<<endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) 
        {
            case 1:
                cout << "Enter task name: ";      // Insert task message
                cin.ignore();
                getline(cin, taskName);
                taskManager.addTask(taskName);
                break;

            case 2:
                taskManager.viewTasks();       // Task view message
                break;

            case 3:
                cout << "Enter task name to mark as completed: ";     
                cin.ignore();
                getline(cin, taskName);
                taskManager.markTaskAsCompleted(taskName);
                break;

            case 4:
                cout << "Enter task name to remove: ";      //Task removed message
                cin.ignore();
                getline(cin, taskName);
                taskManager.removeTask(taskName);
                break;


            case 5:
                cout << "Exiting to-do list manager..." << endl;
                cout<< "\n \t Thankyou for using TK's To-do List\n"<<endl;  // Thankyou message
                break;

            default:
                cout << "Invalid option. Please select a valid option from the menu." << endl;
        }
    } while (option != 5);

    return 0;
}
