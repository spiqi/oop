#include<iostream>
class Animal {
private:
	int val;
	public
		Animal(int v) {
		val = v;
	}
	//指针 delete掉,我们西沟函数      一
	~Animal() {
	}
virtual void voice() {
		std::cout << "Animal :ang ang ang " << std::endl;
	}
};
class Dog :public Animal {
	//以公有方式继承
public :
	Dog(int v):Animal(v)
	{

	}
	~Dog() {
		//什么dog冒号冒号,自己选择,就在类内声明,类外定义??
	}
	void voice() {
		std::cout << "Dog: wang wang wnag" << std::endl;
	}
};
int main() {
	Animal A(10);//具体的类
	Dog dog(20);//好了,这样就可以了.Animal是一个父类,Dog是一个子类
	//可不可以进行赋值,赋值什么
	A = dog;//超人赋值给人,超人的指针p,指向一个dog
	Animal *p = &dog;
	Animal &r = dog;//起别名 副职兼执行
	//用父类的一个指针  p-voice 
	p->voice();
}
