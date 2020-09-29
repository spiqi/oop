#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#define MAX 100

//定义一个结构体
typedef struct Student{
  int stu_id;
  char name[100];
} Stu;


int main(int argc, char const *argv[]) {
  /* code */
  // 声明函数
  void Write();
  void Read();

  // 函数调用
  Write();
  Read();

  return 0;
}


/* 数据写入文件 */
void Write(){
  // 定义一个文件指针
  FILE *fp ;

  // 初始化一个结构体数组
  Stu stuw[2] = {
  {20180001, "xiaoming" },
  {20180002, "小明"}
  } ;

  // 打开文件，没有文件自动创建
  fp = fopen("student.dat","wb"); // b:表示以二进制写入
  // 写入数据
  fwrite( (char*)stuw,sizeof(Stu),2,fp); //2：表示将数组中两个元素写入文件
  // 关闭文件
  fclose(fp);

}

// 文件数据读取
void Read(){
  // 定义一个文件指针
  FILE *fp ;
  // 定义一个buf结构体，用于得到文件内容
  struct stat buf;
  // 定义一个文件行数记录变量
  int rows;
  // 定义一个Student结构体
  Stu stur[MAX];

  // 求文件中的行数（记录个数）
  stat("student.dat",&buf);
  rows = buf.st_size/sizeof(Stu);

  // 打开文件
  fp = fopen("student.dat","rb");
  // 读取数据到数组中
  fread((char *)stur,sizeof(Stu),rows,fp);
  // 关闭文件
  fclose(fp);

  // 遍历数组，打印数据信息
  for(int i=0;i<rows;i++)
    printf("%d\t%s\n",stur[i].stu_id,stur[i].name);

}
