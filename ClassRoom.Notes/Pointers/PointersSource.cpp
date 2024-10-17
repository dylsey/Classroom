#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

//class A
//{
//public: 
//	std::string name{ "I am A!" };
//	int age{ 1 };
//
//};

//class B
//{
//	std::string name{ "I am B!" };
//	int age{ 3 };
//};


int main()
{
	int x{ 5 };
	int y{ 7 };
	int z{ 11 };

	int* ptr1{ &x };
	int* ptr2{ &y };
	int* ptr3{ &z };

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	std::cout << "z: " << z << std::endl;

	std::cout << "ptr1: " << ptr1 << std::endl;
	std::cout << "ptr2: " << ptr2 << std::endl;
	std::cout << "ptr3: " << ptr3 << std::endl;

	std::cout << "*ptr1: " << *ptr1 << std::endl;
	std::cout << "*ptr2: " << *ptr2 << std::endl;
	std::cout << "*ptr3: " << *ptr3 << std::endl;

	int** control; 
	control = &ptr1;
	std::cout << "control: " << control << std::endl;
	**control = 11; 
	std::cout << "**control: " << **control << std::endl;

	ptr2 = *control;
	std::cout << "ptr2: " << ptr2 << std::endl;
	*ptr2 = 13;
	std::cout << "*ptr2: " << *ptr2 << std::endl;

	control = &ptr3; 
	std::cout << "control = &ptr3: " << control << std::endl;
	**control = 15;
	std::cout << "**control: " << **control << std::endl;
	std::cout << std::endl; 
	std::cout << "new values: " << std::endl;


	std::cout << x << " ";
	std::cout << y <<" ";
	std::cout << z << " ";
	std::cout << *ptr1 << " ";
	std::cout << *ptr2 << " ";
	std::cout << *ptr3 << " ";

	int foo{ 7 };
	int bar{ 11 };
	int* smurf{ &foo };
	int** chief{ &smurf };

	int snafu{ 5 };
	int* reliable{ *chief };
	*chief = &snafu;
	**chief = 20; 
	chief = &reliable; 
	std::cout << "foo: " << foo << std::endl;
	std::cout << "bar: " << bar << std::endl;
	std::cout << "smurf: " << smurf << std::endl;
	std::cout << "chief: " << chief << std::endl;
	std::cout << "snafu: " << snafu << std::endl;
	std::cout << "reliable: " << reliable << std::endl;



	std::cout << "foo: " << foo << std::endl;
	std::cout << "bar: " << bar << std::endl;
	std::cout << "*reliable: " << *reliable << std::endl;
	std::cout << "*smurf: " << *smurf << std::endl;
	std::cout << "**chief: " << **chief << std::endl;
	







}
//int x{ 3 };
//int& y{ x };

//std::cout << "x: " << x << std::endl;

//y = 4;

//int* z{ nullptr };

//if (z)
//{
//	std::cout << "z: " << z << std::endl;
//}
//else
//{
//	std::cout << "z is nullptr" << std::endl;
//}


//A a;
//B b; 

//std::cout << "a.name: " << a.name << std::endl;
//std::cout << "b.name: " << b.name << std::endl;

//std::cout << "a.age: " << a.age << std::endl;
//std::cout << "b.age: " << b.age << std::endl;

//int i{ 5 };
//int* j; 
//j = new int; 
//*j = 7; 
//delete j; 