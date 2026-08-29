#include<iostream>
using namespace std;

class Time{

    private:
    int h;
    int m;
    int s;


    public:
     Time(void):h(0),m(0),s(0){

    

     }

     Time(int h,int m,int s):h(h),m(m),s(s){

     }


     void setHrs(int h ){
       this->h=h;
     }

    void setMin(int m){
       this-> m=m;
     }
      void setSec(int s){
        this->s=s;
     }

     int getHrs(void){
     return h;
     }
      int getMin(void){
     return m;
     }
      int getSec(void){
     return s;
     }

      void AddTime(){

        cout<<"Hours :";
        cin>>h;

        cout<<"Minute :";
        cin>>m;

        cout<<"Second :";
        cin>>s;
    }
     void printTime(){
       
        cout<<"Hours :"<<h<<endl;
        cout<<"Minute :"<<m<<endl;
        cout<<"Second :"<<s<<endl;
        

     }

};

int menuList(){
   int choice;
  
cout<<"-+-+-+-+-+-+-+-+-+"<<endl;
   cout<<"0.exit"<<endl;
    cout<<"1.Add Time"<<endl;
    cout<<"2.Display All Time"<<endl;
    cout<<"3.Display only hrs of all time objects"<<endl;
    cout<<"Enter Choice"<<endl;
    cout<<"-+-+-+-+-+-+-+-+-+"<<endl;
    cin>>choice;

    return  choice;
    }

int main(){


 Time *arr=new Time[2] ;

   int choice;
   while((choice=menuList())!=0)

   switch(choice)
   {
      case 1:
for(int i=0;i<3;i++){
      arr[i].AddTime();
}
      break;

      case 2:
for(int i=0;i<3;i++){
   cout<<"-+-+-+-+-+-+-+-+-+"<<endl;
      arr[i].printTime ();
      cout<<"-+-+-+-+-+-+-+-+-+"<<endl;
}
      break;
      case 3:
for(int i=0;i<3;i++){
     arr[i].getHrs();
     cout<<arr[i].getHrs()<<endl;

}
break;
      
  }
 delete []arr;

 arr=NULL;
   return 0;
}