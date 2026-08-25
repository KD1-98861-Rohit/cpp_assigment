#include<iostream>
using namespace std;
struct Date{
private:
    int day;
    int month;
    int year;

public:
void initDate(){

     day=01;
    month=02;
    year=2004;

}
 void printDateOnConsole(){
     cout <<" Date : "<< day << " / " << month << " / " << year << endl;
    


 }
  void acceptDateFromConsole(){
    cout<<"enter a date :";
    cin>>day;
    cout<<"enter a month :";
    cin>>month;
    cout<<"enter a year :";
    cin>>year;

  }
   bool isLeapYear(){
    if(year%400==0 || (year%4==0 && year%4==0)){
        cout<<" Leap year";

    }
     else{
        cout<<"Not a Leap  year";
     }
   }


};
  
int menuList(){
    cout<<"0.Exit"<<endl;
    cout<<"1.init"<<endl;
    cout<<"2.Accept"<<endl;
    cout<<"3.printDate"<<endl;
    cout<<"4.FindLeapYear"<<endl;

    int choice;
    cin>>choice;
    return choice;
}


int  main(){

   struct Date  d;
    // d.initDate();
    // d.printDateOnConsole();
    // d.acceptDateFromConsole();
    // d.printDateOnConsole();
    // d.isLeapYear();

    int choice;
    while((choice=menuList())!=0){
        switch (choice){
            case 1:
           
            d.initDate();
             break;


            case 2:
            d.acceptDateFromConsole();
            break;

            case 3:
             d.printDateOnConsole();
             break;

              case 4:

              d.isLeapYear();
              break;

              default :

               cout<<"Enter A valid Choice";
             
        }

    }

    

    return 0;
}