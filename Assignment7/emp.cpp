#include <iostream>
using namespace std;

// Base Class
class Employee {
public:
    int id;
    string name, dept;

    void get() {
        cout << "Enter ID, Name, Dept: ";
        cin >> id >> name >> dept;
    }
};

// Derived Class 1
class TeachingStaff : public Employee {
    string subject;
public:
    void getTeaching() {
        get();
        cout << "Enter Subject: ";
        cin >> subject;
    }
    void show() {
        cout << "\n[Teaching Staff]\nID: " << id << "\nName: " << name << "\nDept: " << dept << "\nSubject: " << subject << "\n";
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee {
    string work;
public:
    void getNonTeaching() {
        get();
        cout << "Enter Work/Designation: ";
        cin >> work;
    }
    void show() {
        cout << "\n[Non-Teaching Staff]\nID: " << id << "\nName: " << name << "\nDept: " << dept << "\nWork: " << work << "\n";
    }
};

int main() {
    TeachingStaff t;
    NonTeachingStaff nt;

    cout << "--- Teaching Staff ---ජ\n";
    t.getTeaching();

    cout << "\n--- Non-Teaching Staff ---\n";
    nt.getNonTeaching();

    t.show();
    nt.show();

    return 0;
}