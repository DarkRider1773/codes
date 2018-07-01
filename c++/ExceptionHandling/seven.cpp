//we can throw object of a class
#include<iostream>
#include<cstring>
using namespace std;
class MyException{
private:
  char str_error_name[100];
  int error_code;
public:
  MyException(){
    error_code=0;
    *str_error_name=0;
  }
  MyException(char *str,int n){
    error_code=n;
    strcpy(str_error_name,str);
  }
  char* getError_name(){
    return str_error_name;
  }
  int getError(){
    return error_code;
  }
  void setError_name(char *str){
    strcpy(str_error_name,str);
    return ;
  }
  void setError(int e){
    error_code=e;
    return;
  }
};
int main(){
  int i;
  try{
    cout<<"Enter a positive number: ";
    cin>>i;
    if(i<0)
    throw MyException("Not Positive",i);
  }catch(MyException &e){
    cout<<e.getError_name()<<" : "<<e.getError()<<endl;
  }
  return 0;
}
