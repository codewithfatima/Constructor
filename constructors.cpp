/*Creating A Constructure In C++.
Constructor is a special memeber function with the same name as as of the clas .
It is also used to initialize the objects of it's class.
It is Automatically invoked whenever the object is called.
Characteristics of Constructor :-
1.It Should Declare In The Public class.
2.They cannot return values and do not have  Return type.
3.It can have default arguments.
4.We can not refer  to their address.*/
#include<iostream>
using namespace std ;

class A{
	private:
		//declaration of variables
		int a ;
		int b ;
		public:
			//printing 
			void display(){
				cout << "The value of A is : " << a << endl;
				cout << "The Value Of B IS : " << b << endl;
			}
			//Constructor  is declaration
			A(void);
};
	//Constructor is  define
A :: A(void)             // ----> This is a default constructor as it takes no parameters like int a = 9;
{
	a = 20;
	b = 30;
}
int main(){
	A a1 ;
	a1.display();
}
