class myStack
{
    int cnts; //入栈数量
    node<T> *head; //栈的头部
public:

    myStack(){ cnts = 0; head = new node<T>; }
    void stackPush(T arg); //入栈
    T stackPop();  //出栈
    T stackTop(); //获取栈顶元素

    void printStack(); //打印栈
    int counts(); //获取栈内元素个数
    bool isEmpty(); //判断空
};
