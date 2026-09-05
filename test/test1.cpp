#include <iostream>
using namespace std;

class Student{

    public:
             int rollno;
             string name;
             string course;
             int marks;
    
             Student()
             {
                marks=220;
                 cout<<"marks:"<<marks<<endl;
                
             }

             Student(int rollno1,string name1,string course1)
             {
                rollno=rollno1;
                name=name1;
                course=course1;
                cout<<"rollno:"<<rollno<<endl;
                cout<<"name:"<<name<<endl;
                cout<<"course:"<<course<<endl;
             }

             void putdata(int marks)
             {
                cout<<"marks="<<marks<<endl;
             }

             void putdata(int rollno,string name)
             {
                cout<<"rollno:"<<rollno<<endl;
                cout<<"name:"<<name<<endl;
             }
};

int main()
 {
    Student s1;
    Student s2(110,"riya","cse");
     
    Student s3;
    s3.putdata(500);
    s3.putdata(120,"priya");
    return 0;
}
