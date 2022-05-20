#include<stdio.h>
#include<iostream>
using namespace std;
class Student
{
    private:
    int admno;
    char sname[20];
    float english,maths,science;
    float total;
    float ctotal()
    {
        total=(english+maths+science);
        return(total);
    }
    public:
        void Takedata()
        {
            cout<<"Enter the value of admno:";
            cin>>admno;
            cout<<"sname :";
            cin>>sname;
            cout<<"eng :";
            cin>>english;
            cout<<"science:";
            cin>>science;
            cout<<"maths:";
            cin>>maths;

        }
        Student(): total(0.0)  //constructor
        {
        }
        friend float func(Student);
        void Showdata()
        {
            cout<<"adm no:"<<admno<<endl;
            cout<<"sname:"<<sname<<endl;
            cout<<"eng"<<english<<endl;
            cout<<"science"<<science<<endl;
            cout<<"maths"<<maths<<endl;
        }
};
   float func(Student t)
   {
    t.total;
    return t.total;
   }
   int main()
   {
    Student s1;
    s1.Takedata();
    s1.Showdata();

    cout<<func(s1);

   }
