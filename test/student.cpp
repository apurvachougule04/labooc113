#include<iostream>
using namespace std;
class student{
 private:
       int m1,m2,m3;

 public:
     void getdata()
     {
        cout<<"enter marks of 3 subject";
        cin>>m1>>m2>>m3;
     }

     friend void Calculatemarks(student s);
};

void Calculatemarks(student s)
{
    int total;
    float per;

    total=s.m1+s.m2+s.m3;
    per=total/3;

    cout<<"total Marks:"<<total<<endl;
    cout<<"Persentage:"<<per<<endl;

}

int main()
{
    student s;
    s.getdata();
    Calculatemarks(s);
    return 0;
}