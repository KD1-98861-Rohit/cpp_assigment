#include<iostream>
using namespace std;


class Toolbooth{

    private:
       unsigned int total_PayingCar;
       unsigned int total_NopayingCar;
        double TotalAmount_OfMoney;

 
        public:
        Toolbooth(){

            total_PayingCar=0;
            total_NopayingCar=0;
            
            TotalAmount_OfMoney=0;

        }

      void  payingCar(){

       

       
       total_PayingCar ++;

      TotalAmount_OfMoney+=0.50;



        }

        void  nopayCar() {
             total_NopayingCar++;

          
        }

        
         void printOnConsole(){
           cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;

        
            cout<<"Total no of  Tax Paying Cars : "<< total_PayingCar<<endl;

            cout<<"Total no of Not Tax Paying Cars : "<< total_NopayingCar<<endl;
           
            cout<<"Total Amount Of money : "<<TotalAmount_OfMoney<<endl;

            cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;

         }
};

int carState(){

   cout<<"0.exit"<<endl;
   cout<<"1.payingCar"<<endl;
   cout<<"2.Non Paying Car"<<endl;
   cout<<"3.Total Amount of Toolbooth"<<endl;

   int choice;
   cin>>choice;
    return choice;


}



int main(){

    Toolbooth c1;
    // c1.payingCar();
    // c1.nopayCar();
    // c1.printOnConsole();


int choice;

while((choice=carState())!=0){

    switch (choice){

    case 1:
        
    c1.payingCar();
    break;


    case 2:
    c1.nopayCar();
    break;

    case 3:
     c1.printOnConsole();
     break;


     default :

               cout<<"Enter A valid Choice";
    }
}


    return 0;

}