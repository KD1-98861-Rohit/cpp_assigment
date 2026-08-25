#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day = 01;
        month = 01;
        year = 2000;
    }

    void printDateOnConsole()
    {
        cout <<" Date : "<< day << " / " << month << " / " << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter the day : ";
        cin >> day;

        cout << "Enter the month : ";
        cin >> month;

        cout << "Enter the year : ";
        cin >> year;
    }

    bool isLeapYear(int y)
    {
        if (y % 4 == 0)
        {
            cout << "Leap year :)"<<endl;
        }
        else
        {
            cout << " Not a Leap Year"<<endl;
            return false;
        }
    }

    int menuList()
    {
        int choice;
        cout << "0.Exit" << endl;
        cout << "1.Print Date" << endl;
        cout << "2.Enter Date" << endl;
        cout << "3.Check Leap Year" << endl;
        cout << "Enter The Choice" << endl;
        cin >> choice;
        return choice;
    }
};

int main()
{
    Date d1;
    d1.initDate();

    /* d1.printDateOnConsole();
    d1.acceptDateFromConsole();
    d1.isLeapYear();*/
    int choice;
    while ((choice = d1.menuList()) != 0)
    {
        switch (choice)
        {
            // case 0:
            
            // break;
        case 1:
            d1.initDate();
            d1.printDateOnConsole();

            break;

        case 2:
            d1.acceptDateFromConsole();
            d1.printDateOnConsole();
            break;

        case 3:
            cout << "Enter the Year : ";
            int year;
            cin >> year;
            d1.isLeapYear(year);
            break;
        }
    }
    cout<<"-----------Program Ending-----------";
    return 0;
}