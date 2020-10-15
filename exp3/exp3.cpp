#include<iostream>
#include <cmath>
#define max 111
int main(){int m;int l[max];
    printf("m= ");
    scanf("%d",&m);
printf("\nL= ");
for (int i=0;i<m;i++) scanf("%d",&l[i]);
int maxc = 0;
float maxs = 0;//分别定义最最大周长 最大面积
int a,b,c;//用于存储每次循环的三条边
int a1,b1,c1,aa,bb,cc;//分别为最大面积和最大周长所对应的木棍长度
for (int i=0;i<m-2;i++)
 for (int j=i+1;j<m-1;j++)
  for (int k = j+1;k< m; j++){
      a=l[i]; 
  b=l[j];
  c=l[k];
      if( (a+b>c) && (abs(a-b) <c) ) { //三条边构成三角形的条件
          if ((sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)) /4)>maxs){
 a1=a; 
 b1=b; 
 c1=c;
          } //利用海伦公式求得面积
          if  ((a+b+c)>maxc)
          {
              aa=a;
              bb=b;
              cc=c;
          }
      }
  }
  
printf("test");//test
printf("max Circumference is %d (with %d %d %d) \n Max Square is %f (with %d %d %d",maxc,a1,b1,c1,maxs,aa,bb,cc);
return 0;
}
