#include<iostream>
using namespace std;


class Product{
    private:

    int id;
    string title;
    double price;

    public:
    Product (void):id(0),title(""),price(0.0){

    }

    Product (int id,string title ,double price):id(id),title(title),price(price){

    }

    double getPrice(){
    return price;
    }
    
   virtual double calculatePrice()=0;
   
     void acceptRecord(){
        cout<<"Enter id"<<endl;
        cin>>id;
        cout<<"Enter Title"<<endl;
        cin>>title;
        cout<<"Enter Price"<<endl;
        cin>>price;
     }

     void printRecord(){

        cout<<"i:"<<id<<endl;
        cout<<"Title:"<<title<<endl;
        cout<<"Price:"<<price<<endl;

     }


};

class Book:public Product{

    private:
    string author;
    
    public:
    Book(void):author(""){

    }
 Book (int id,string title ,string author,double price):author(author),Product(id,title,price){

 }
 
    void acceptRecord(){
         
        cout<<"Enter Author Name :"<<endl;
        cin>>author;
        Product::acceptRecord();
    }

    double calculatePrice()
{
    return getPrice() - (getPrice() * 10 / 100);
}

    void printRecord(){
        Product::printRecord();
        cout<<"Author :"<<author<<endl;
        
    }
};

class Tape:public Product{

    private:
    string artist;
    
    public:
    Tape(void):artist(""){

    }
     Tape (int id,string title ,string artist,double price):artist(artist),Product(id,title,price){

 }

    void acceptRecord(){
        Product::acceptRecord();
        cout<<"Enter Artist Name :"<<endl;
        cin>>artist;
    }
    double calculatePrice()
{
    return getPrice() - (getPrice() * 5 / 100);
}

    void printRecord(){
        Product::printRecord();
        cout<<"Author :"<<artist<<endl;
        
    }
};

int MenuList(){
    int choice;

    cout<<"0.Exit :"<<endl;
    cout<<"1.Book :"<<endl;
    cout<<"2.Tape :"<<endl;
    cout<<"Enter The Choice"<<endl;
    cin>>choice;
    return choice;
}

int main(){

  Product* arr[3];

  int count=0;

  while(count<3){
int choice;
    while((choice=::MenuList())!=0){

        switch(choice){

   case 1:
       {
    Book *ptrBook=new Book();
    arr[count]=ptrBook;
    arr[count]->acceptRecord();
    count++;
    break;
       }

    case 2:
    {
     Tape *ptrTape=new Tape();
     arr[count]=ptrTape;
     arr[count]->acceptRecord();
     count++;
     break;
    }

  }

    }
}
    double finalBill = 0;

for(int i = 0; i < 3; i++)
{
    finalBill = finalBill + arr[i]->calculatePrice();
}

cout << "Final Bill = " << finalBill << endl;

 
 
for(int i=0; i<3; i++)
{
    delete arr[i];
    arr[i] = NULL;
};


}