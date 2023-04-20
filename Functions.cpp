#include "Functions.h"
using namespace std;

CAnimal::CAnimal()
{
	age = 0;
	weight = 0;
	act = activity::None;
}
CAnimal::CAnimal(double age, double weight, activity act) : age(age), weight(weight), act(act) {}

double CAnimal::HowManyCalories()
{
	double calories = 0;
	calories = 50 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.4; break;
	case activity::high: calories *= 1.6; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
double CAnimal::getAge() { return age; }
double CAnimal::getWeight() { return weight; }
void CAnimal::setAge(double a) { age = a; }
void CAnimal::setWeight(double w) { weight = w; }
activity CAnimal::getActivity() { return act; }
void CAnimal::setActivity(activity a) { act = a; }
string CAnimal::show()const
{
	string a = "Age: " + to_string(age) + "\n" + "Weight: " + to_string(weight) + "\n" + "Activity: " + activ[static_cast<int>(act)] + "\n";
	//cout << "Age: " << age << endl << "Weight: " << weight << endl << "Activity: " << activ[static_cast<int>(act)] << endl;
	return a;
}
string CAnimal::PrintName()
{
	string a = "CAnimal";
	return a;
}
