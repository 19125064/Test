#include<iostream>
using namespace std;
class Box
{
public:
	double length;
	double breadth;
	double height;
};

int main()
{
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.length = 2.0;
	Box1.breadth = 2.0;
	Box1.height = 2.0;

	


	Box2.length = 3.0;
	Box2.breadth = 3.0;
	Box2.height = 3.0;
	

	volume = Box1.length*Box1.breadth*Box1.height;
	cout << "Box1的体积：" << volume << endl;

	volume = Box2.length*Box2.breadth*Box2.height;
	cout << "Box2的体积：" << volume << endl;

	return 0;

}