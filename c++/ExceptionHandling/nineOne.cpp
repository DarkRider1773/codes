//if we are using parent class and child class then firstly child object should be catch than parrent object should be Caught
#include<iostream>
using namespace std;
class B{

};
class D:public B{

};
int main(){
  D derived;
  try{
    throw derived;
  }catch(B e){
    cout<<"Caught by base class."<<endl;
  }catch(D e){
    cout<<"Caught by derived class.(this part will never be executed)"<<endl;
  }
  return 0;
}
