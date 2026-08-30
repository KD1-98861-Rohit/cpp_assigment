#include<iostream>
using namespace std;


class Date{
    private:
    int day;
    int month;
    int year;

    public:
    Date (void):day(0),month(0),year(0){

    }

    Date (int day,int month,int year):day(day),month(month),year(year){

    }

    void acceptRecord(){
        cout<<"Enter Day :"<<endl;
        cin>>day;
        cout<<"Enter Month :"<<endl;
        cin>>month;
        cout<<"Enter Year :"<<endl;
        cin>>year;

    }

    void printRecord(){
       cout<<day<<"/"<<month<<"/"<<year<<endl;
    }


};

class Person{
    private:
    string  name;
    string address;
    Date birthdate;

    public:
    Person(void):name(""),address(""){

    }

    Person(string name,string address,Date birthdate):name(name),address(address),birthdate(birthdate) {


    }

    void acceptRecord(){
         
        cout<<"Name :"<<endl;
        cin>>name;
        cout<<"Address :"<<endl;
        cin>>address;
        cout<<"Enter A birthdate :";
        this->birthdate.acceptRecord();

       

    }

    void printRecord(){
        cout<<"Name    :"<<name<<endl;
        cout<<"Adresss :"<<address<<endl;
        cout<<"Birtdate :";
        this->birthdate.printRecord();
    }

};

class Student{
    private:
    int id;
    double marks;
    string course;

    Date joindate;
    Date enddate;

    public:

    Student (void):id(0),marks(0),course(""){


    }

    Student (int id, double  marks,string course,Date joindate,Date enddate):id(id),marks(marks),course(course),joindate(joindate),enddate(enddate){

    }


    void acceptRecord(){
       cout<<"Id  :"<<endl;
       cin>>id;
       cout<<"Marks :"<<endl;
       cin>>marks;
       cout<<"Course :"<<endl;
       cin>>course;
       cout<<"JoinDate:";
      this->joindate.acceptRecord();
      cout<<"endDate :";
      this->enddate.acceptRecord();
    }

    void printRecord(){
        cout<<"Id :"<<id<<endl;
        cout<<"marks :"<<marks<<endl;
    
        cout<<"Course :"<<course<<endl;

        cout<<"joindate :";
        this->joindate.printRecord();
        cout<<"Enddate :";
        this->enddate.printRecord();




    }



};

int main(){
    
    Person p1;
    p1.acceptRecord();
     p1.printRecord();

    Student s1;
    s1.acceptRecord();
   
    s1.printRecord();
    return 0;
}
int main1(){
    Date d1;
    d1.acceptRecord();
    d1.printRecord();

    return 0;
}