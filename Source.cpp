#include <iostream>
#include <string>
#include "Functions.h"
#include<fstream>
int main(void)
{
	/*CCat a(5, 2, activity::low, catBreed::British);
	a.show();*/
	ofstream inf("Text.txt");
	if (!inf) { exit(1); }
	CAnimal a(8, 3, activity::low);

	CCat b(5, 2, activity::high, catBreed::British);
	cout << b.show();
	cout << "Calories: " << b.HowManyCalories()<<endl;
	CDog c(5, 20, activity::high, dogBreed::Sighthound);
	cout << c.show();
	cout << "Calories: " << c.HowManyCalories()<< endl;
	CHorse d(10, 1000, activity::high, horseBreed::Arabian);
	cout << d.show();
	cout << "Calories: " << d.HowManyCalories() << endl;
	inf << a.PrintName()<<endl;
	inf << a.show();
	inf << "Calories: " << a.HowManyCalories() << endl;
	inf << b.PrintName() << endl;
	inf << b.show();
	inf << "Calories: " << b.HowManyCalories() << endl;
	inf << c.PrintName() << endl;
	inf << c.show();
	inf << "Calories: " << c.HowManyCalories() << endl;
	inf << d.PrintName() << endl;
	inf << d.show();
	inf << "Calories: " << d.HowManyCalories() << endl;
	//close(in);
}
