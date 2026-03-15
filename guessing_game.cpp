#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class gameLogic{
  private:
   int randInt;
   int usrInt;
   int attempt=0;
   int status;
   int dumb=0;
  public:
   void logic(){
     attempt=0;
     status=0;
     dumb=0;
     randInt=rand() % 10 + 1;
     cout<<"Guess the Random no.!"<<endl;
     do{
       cout<<"\nEnter your number: ";
       cin>>usrInt;
       while(usrInt > 10 || usrInt < 1){
           dumb++;
           cout<<"\nCare to Elaborate how "<<usrInt<<" Falls betn 1-10??";
           cout<<"\nEnter your number: ";
           cin>>usrInt;
           if(dumb==2){
           cout<<"\nMy good sir, you are impossible to underestimate.";
           cout<<"\n";
           return;
           
       }
       }
       
       if(usrInt==randInt){
         cout<<"\nYour guess is correct";
         status=1;
       }else{
         if(usrInt>randInt){
           cout<<"\nlil too big";
           attempt++;
         }else{
           cout<<"\nlil too small";
           attempt++;
         }
       }
       if(attempt==3){
         cout<<"\nYou lose, lmaoo even a kid is smarter than you!!,\nThe number was: "<<randInt<<endl;
         break;
       }
     }
     while(usrInt != randInt);
   }
   void loop(){
     int ans;
     do{
     if(status==1){
         cout<<"\nacknowledged, another shot?";
     }else{
      cout<<"\nwna prove ur worth?, try again"<<endl;
     }
     cout<<"\n1. Hwell Yawh!!";
     cout<<"\n2. Fuck this stupid game!!";
     cout<<"\nreply(1/2): ";
     cin>>ans;
     if(ans==1){
       logic();
     }else{
       cout<<"\nFuck you as well!!";
       cout<<"\nrm rf /";
       cout<<"\n[████████░░] 80%";
       cout<<"\nOh wait… wrong OS.";
       cout<<"\nDeleting System!!";
       break;
     }
     }
     while(ans==1);
   }
};
int main(){
  srand(time(0));
  gameLogic g;
  g.logic();
  g.loop();
  return 0;
}