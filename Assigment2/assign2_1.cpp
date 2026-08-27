#include<iostream>

using namespace std;

class Volume{

    private:

       int length;
       int width;
       int height;

       

    

       public:

        Volume(void){

            this->length=1;
            this->width=1;
            this->height=1;
        }

        Volume(int l,int w,int h){
             this->length=l;
             this->width=w;
             this->height=h;


        }

         Volume (int value){

            this->length=value;
            this->width=value;
            this->height=value;
         }

         void calculateVolume(){
           int result=length*width*height;


           cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
           cout<<" Volume Of The Box : "<<result<<endl;
           cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
         }


};

int menulist(){
    cout<<"0.exit"<<endl;
   cout<<"1.Calculate Volume with default values "<<endl;
   cout<<"2. Calculate Volume with length,breadth and height with same value "<<endl;
   cout<<"3.Calculate Volume with different length,breadth and height values"<<endl;

   int choice;
   cin>>choice;
    return choice;
}
int main(){

    

     Volume c1;
    //c1.PrintRecord();
    Volume c2(4);
    //c2.PrintRecord();
    Volume c3(7,8,2);

    //c3.PrintRecord();

    int choice;

    while((choice=menulist())!=0){

         switch (choice){

    case 1:
        //Volume c1;
    c1. calculateVolume();
    break;

    
 

    case 2:

    // Volume c2(4);
     c2.calculateVolume();
     break;

    case 3:

     //Volume c3(7,8,2);

     c3.calculateVolume();
     break;


     default :

               cout<<"Enter A valid Choice";
    }
}
}