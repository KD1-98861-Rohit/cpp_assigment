#include<iostream>
using namespace std;

class Employee{

    private:
    int id;
    double salary;
    public:
    Employee(void):id(0),salary(0.0){

    }
    Employee(int id,double salary):id(id),salary(salary){

    }

    void setId(int id){
        this->id=id;

    }

int getId(void){
    return this->id;
}

void setSalary(double salary){
    this->salary=salary;
}

double getSalary(void){
    return this->salary;
}

virtual void accept(){
    cout<<"Enter id :"<<endl;
    cin>>id;
    cout<<"Enter Salary :"<<endl;
    cin>>salary;

}

virtual void display(){
    cout<<"Id :"<<id<<endl;
    cout<<"Salary :"<<salary<<endl;

}
};


class Manager :virtual public Employee{
    private:
    double bonus;

    public:
    Manager(void):bonus(0){

    }
  Manager (int id,double salary,double bonus):bonus(bonus),Employee(id,salary)
  {

  }

  void setBonus(double bonus){
    
  this->bonus=bonus;

  }
  double getBonus(void){
    return this->bonus;
  }
  void accept(){

    Employee::accept();
    
  acceptManager();

  }
  void display(){
    Employee::display();
     displayManger();

  }
  protected:
  void acceptManager(){
cout<<"Enter A bonus :"<<endl;
    cin>>bonus;
  }

  void displayManger(){
cout<<"Bonus:"<<bonus<<endl;
  }

};

class Salesman:virtual  public Employee{

    private:
    double commision;
    public:
    Salesman(void):commision(0){

    }
 Salesman (int id ,double salary,double commision):commision(commision),Employee(id,salary){

 }
 void setCommision(double commision){
    this->commision=commision;

 }
 double getCommision(void){
  return this->commision;
 }
 void accept (){
    Employee::accept();
    acceptSalesman();
 }
 void display(){

     Employee::display();
    
displaySalesman();
 }
 void acceptSalesman(){
    cout<<"Commision :";
    cin>>commision;
 }
 void displaySalesman(){
cout<<"Commision :"<<commision<<endl;
 }
};

class Salesmanager:public Manager,public Salesman{

   public:
    Salesmanager(void){}
Salesmanager(int id,double salary,double bonus,double commision ): Manager(id ,salary ,bonus),Salesman(id ,salary,commision),Employee(id,salary){

}

void accept(){
    
    Employee::accept();
  acceptManager();
  acceptSalesman();
  
}
void display(){
 Employee::display();
displayManger();
displaySalesman();
}
};

int main(){

    Salesmanager sm1;
    sm1.accept();
     sm1.display();
    // Salesman s1;
    // s1.accept();
    // s1.display();

}
int main1(){

    Manager m1(1,2200,500);
     m1.display();
     m1.setSalary(8000);
     cout<<"Updated salary :"<<m1.getSalary();
     
    return 0;
}