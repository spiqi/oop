#include<iostream>
#include <string.h>
class Graduate{
private:
std::string  name;
 bool gender;
 int id;
std::string tutor;
 const std::string university;
public:
 Graduate(){ //无参构造函数
printf("无参构造");
 }
 Graduate(int idnum,bool sex):
  id(idnum),
  gender(sex){
      printf("带参构造");
  }
  Graduate(Graduate &g){
      id=g.id;
      gender=g.gender;
      name=g.name;
      printf("拷贝构造");
  }

~Graduate(){
    printf("析构函数被调用");
    
}
int output(){
    std::cout<<"id:"<<id<<std::endl<<"tutor:"<<tutor<<std::endl<<"name:"<<name<<std::endl;
    
    return 0;
};
void output(int a) const{
    std::cout<<"name:"<<name<<std::endl<<"university:"<<university<<std::endl;
    
}

};


class Student{
    public:
    friend void Graduate::Graduate
}

int main(){
    Graduate gra[10];
std::cout<< "how many graduate:"<<std::endl;
int granum;
std::cin>>granum;
for(int i=0;i<granum;i++){
    
}
    return 0;
}
