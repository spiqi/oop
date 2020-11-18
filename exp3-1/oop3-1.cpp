#include<iostream>
class stack{
        private:
         int length=0;
         int * m;
         public :
          stack(int c){
              m= new int [c];
length=c;
for (int i=0;i<length;i++){
    printf("input the number of %d / %d \n",i,length);
    std::cin>>m[i];
}
          }
          int push(){
              printf("input the data you want to push: \n");
std::cin>>m[length++];
return 0;
          }
          int pop (){
printf("pop  : %d\n",m[--length]);
return 0;
          }
          int leng(){
              std::cout<<"length:"<<length<<std::endl;
              return 0;
          }
          int empty (){
              return (length==0);
          }
    };

class Mystring{
    private:
     int length;
     char * con;
    public :
      Mystring(){
          length=0;
          printf("input  the String: \n");
          char cc;
          cc=getchar();
          do{
              con[length++]=cc;
              cc=getchar();
          }while (cc!='\n');
      }
     int leng(){
printf("the length of String is %d\n",length);
return 0;
     }
     bool cmp(Mystring x){
         if (length!=x.length) return false;
         for(int i=0;i<length;i++) 
          if (con[i]!=x.con[i]) return false;
          return true;
     }
     
};

int main(){
    
    printf("input the function you want to use \n1. stack   2.Mystring\n");
    char ch;
    std::cin>>ch;


    switch(ch){
        case '1':{printf("input the length of your stack\n");
               int a;
               scanf("%d",&a);
               stack qc(a);
                   printf("1.pop \n 2.push \n 3.stackEmpty\n4.LengthOfTheStack\n0.exit\n");
                   scanf("%d",&a);
               while (a!=0){
                   switch(a){
                       case 1:
                        qc.pop();
                        break;
                       case 2:
                        qc.push();
                        break;
                    case 3:
                    if( qc.empty()) printf("Empty\n");
                    else printf("Not Empty\n");
                     break;
                    case 4:
                     qc.leng();
                     break;
                    
                   }
                   printf("\n1.pop \n 2.push \n 3.stackEmpty\n4.LengthOfTheStack\n0.exit\n");
                   scanf("%d",&a);
               }
               break;}
        case '2':printf("input how many string you want to create:\n");
        
        Mystring *mystr;
        int num;
        scanf("%d",num);
        mystr = new Mystring[num];
  printf("input the function you want to use \n 1.length 2.cmp");
  scanf("num");
  switch (num){
      case 1:
       printf("which one do you want to get length: \n");
       scanf("%d",&num );
       mystr[num].leng();
       break;
    case 2:
     printf("which two string you want to compare: \n");
     int num2;
     scanf("%d %d",&num,&num2);
     mystr[num].cmp(mystr[num2]);
     break;
  }

         break;
    }
}
