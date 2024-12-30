#include <iostream>
#include <string>
using namespace std;
const int MAX_TASKS = 100;
string tasks[MAX_TASKS];
int count = 0; 
void addTask();
void viewTasks();
void markTaskCompleted();
void removeTask();
void displayMenu();
void processChoice(int choice);
void displayMenu() {
    cout << "\n***** SIMPLE TO-DO LIST MANAGER *****\n";
    cout << "Menu:\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    processChoice(choice);
}
void processChoice(int choice) {
    if (choice == 1) {
        addTask();
    } else if (choice == 2) {
        viewTasks();
    } else if (choice == 3) {
        markTaskCompleted();
    } else if (choice == 4) {
        removeTask();
    } else if (choice == 5) {
        cout << "Exiting the To-Do List Manager. Goodbye!\n";
        return;
    } else {
        cout << "Invalid choice! Please try again.\n";
    }

    displayMenu(); 
}
void addTask() {
    if (count >= MAX_TASKS) {
        cout << "Task list is full! Cannot add more tasks.\n";
        return;
    }
    string task;
    cout << "Enter the task: ";
    getline(cin, task);
    tasks[count] = task;
    count++;
    cout << "Task added successfully.\n";
}


void viewTasks() {
    if (count == 0) {
        cout << "No tasks to show.\n";
        return;
    }

    cout << "\nTo-Do List:\n";
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << tasks[i] << "\n";
    }
}


void markTaskCompleted() {
    if (count == 0) {
        cout << "No tasks to mark as completed.\n";
        return;
    }

    int taskNumber;
    cout << "Enter the task number to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > count) {
        cout << "Invalid task number! Please try again.\n";
        return;
    }

    tasks[taskNumber - 1] += " [Completed]";
    cout << "Task marked as completed.\n";
}

void removeTask() {
    if (count == 0) {
        cout << "No tasks to remove.\n";
        return;
    }

    int taskNumber;
    cout << "Enter the task number to remove: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > count) {
        cout << "Invalid task number! Please try again.\n";
        return;
    }

    for (int i = taskNumber - 1; i < count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    count--;
    cout << "Task removed successfully.\n";
}

int main() {
    cout<<"This C++ program is a simple To-Do List Manager where you can add, view, mark as completed,and remove tasks. \n Enjoy managing your tasks with us!"<<endl<<endl;
    displayMenu(); 
    return 0;
}
