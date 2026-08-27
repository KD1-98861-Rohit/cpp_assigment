#include<iostream>

using namespace std;

class Cylinder {

    private:
     
    double radius;
    double height;
    static double PI;


    public:

    Cylinder(void){
        //cout<<"Cylinder (void)"<<endl;
         radius=1;
         height=1;
     
         }
 Cylinder(double radius,double height){
  this->radius=radius;
   this->height=height;

    }

    void  setRadius(double radius){

        this->radius=radius;

    }
    double getRadius(){

        return radius;
    }
    void  setHeight(double height){

        this->height=height;

    }
    double getheight(){

        return height;
    }
     void calculateVolume( ){
      double  volume=PI*radius*radius*height;

      cout<<"-+-+-+-+_+-+-+-+-+_+-+-+-+-+_+-+-+-+-+_+"<<endl;
      cout<< "volume of cylinder : "<< volume<<endl;
      cout<<"-+-+-+-+_+-+-+-+-+_+-+-+-+-+_+-+-+-+-+_+"<<endl;
      cout<<"                                        "<<endl;
    }

   
};
double Cylinder::PI=3.14;

int main(){
    Cylinder c1;
    c1.calculateVolume();

    Cylinder c2(5.3,7.4);

    c2.calculateVolume ();
    c2.setRadius(2.3);
    cout<< "updated radius :"<<c2.getRadius()<<endl;
    c2.setHeight(3.5);
   cout<< "updated height :"<<c2.getheight()<<endl;
   c2.calculateVolume ();


    return 0;

}