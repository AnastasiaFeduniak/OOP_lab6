#include <iostream>
#include <string>
#include "Functions.h"
#include<fstream>
int main(void)
{
	/*CCat a(5, 2, activity::low, catBreed::British);
	a.show();*/
	ofstream in("Text.txt");
	if (!in) { exit(1); }
	CAnimal a(5, 3, activity::low);

	CCat b(5, 2, activity::high, catBreed::British);
	b.show();
	cout << "Calories: " << b.HowManyCalories()<<endl;
	CDog c(3, 20, activity::high, dogBreed::Sighthound);
	c.show();
	cout << "Calories: " << c.HowManyCalories()<< endl;
	CHorse d(10, 1000, activity::high, horseBreed::Arabian);
	d.show();
	cout << "Calories: " << d.HowManyCalories() << endl;
	in << a.PrintName()<<endl;
	in << a.show();
	in << "Calories: " << a.HowManyCalories() << endl;
	in << b.PrintName() << endl;
	in << b.show();
	in << "Calories: " << b.HowManyCalories() << endl;
	in << c.PrintName() << endl;
	in << c.show();
	in << "Calories: " << c.HowManyCalories() << endl;
	in << d.PrintName() << endl;
	in << d.show();
	in << "Calories: " << d.HowManyCalories() << endl;
	//close(in);
}
