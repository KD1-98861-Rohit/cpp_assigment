#include<iostream>
using namespace std;


class Toolbooth{

    private:
       unsigned int totalNo_OfCars;
       
        double totalAmount_OfMoney;

 
        public:
        Toolbooth(){

            totalNo_OfCars=0;
            
            totalAmount_OfMoney=0;
            

        }

      void  payingCar(){
        
        totalNo_OfCars++;
          totalAmount_OfMoney+=0.50;

       
          }

         void  nopayCar(){
        
        totalNo_OfCars++;
           }
   
           void printOnConsole(){

            int payingCar=totalAmount_OfMoney/0.50;

            int nopayCar=totalNo_OfCars-payingCar;
           cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;

        
            cout<<"Total no of   Cars : "<< totalNo_OfCars<<endl;

           
            cout<<"Total Amount Of money : "<<totalAmount_OfMoney<<endl;

            cout<<"total tax Paying Car :"<<payingCar<<endl;

            cout<<"total  NO tax Paying Car :"<<nopayCar<<endl;
            
            
           cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;

         }
};

int main(){

    Toolbooth c1;
    
    c1.payingCar();
    c1.payingCar();
    c1.payingCar();
    c1.nopayCar();
    c1.payingCar();
    c1.nopayCar();
    c1.nopayCar();
    c1.payingCar();
    c1.printOnConsole();
    
    
    





    return 0;

}