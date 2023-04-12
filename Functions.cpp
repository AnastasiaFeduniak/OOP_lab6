#include "Functions.h"
#include <iostream>
#include <string>
using namespace std;

CAnimal::CAnimal()
{
	age = 0;
	weight = 0;
	act = activity::None;
}
CAnimal::CAnimal(double age, double weight, activity act) : age(age), weight(weight), act(act) {}

double CAnimal::HowManyCalories() { return 0; }
double CAnimal::getAge() { return age; }
double CAnimal::getWeight() { return weight; }
void CAnimal::setAge(double a) { age = a; }
void CAnimal::setWeight(double w) { weight = w; }
activity CAnimal::getActivity() { return act; }
void CAnimal::setActivity(activity a) { act = a; }
string CAnimal::show() const
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


CCat::CCat()
{
	age = 0;
	weight = 0;
	act = activity::None;
	breed = catBreed::None;
}
CCat::CCat(double age, double weight, activity act, catBreed breed) : CAnimal(age, weight, act), breed(breed) {}
double CCat::HowManyCalories()
{
	double calories = 0;
	calories = 86 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.4; break;
	case activity::high: calories *= 1.6; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
void CCat::setBreed(catBreed cb) { breed = cb; }
catBreed CCat::getBreed() { return breed; }
string CCat::show() const
{
	string a = "Breed: " + catBr[static_cast<int>(breed)] + "\n";
	return CAnimal::show() + a;
}
string CCat::PrintName()
{
	string a = "CCat";
	return a;
}
CDog::CDog()
{
	age = 0;
	weight = 0;
	act = activity::None;
	breed = dogBreed::None;
}
CDog::CDog(double age, double weight, activity act, dogBreed breed) : CAnimal(age, weight, act), breed(breed) {}
double CDog::HowManyCalories()
{
	double calories = 0;
	calories = 95 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.6; break;
	case activity::high: calories *= 2.0; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
void CDog::setBreed(dogBreed db) { breed = db; }
dogBreed CDog::getBreed() { return breed; }
string CDog::show() const
{
	;
	string a = "Breed: " + dogBr[static_cast<int>(breed)] + "\n";
	return CAnimal::show() + a;
}
string CDog::PrintName()
{
	string a = "CDog";
	return a;
}

CHorse::CHorse()
{
	age = 0;
	weight = 0;
	act = activity::None;
	breed = horseBreed::None;
}
CHorse::CHorse(double age, double weight, activity act, horseBreed breed) : CAnimal(age, weight, act), breed(breed) {}
double CHorse::HowManyCalories()
{
	double calories = 0;
	calories = 100 * weight + 2 * age;
	switch (act)
	{
	case activity::low: calories *= 1.2; break;
	case activity::medium: calories *= 1.6; break;
	case activity::high: calories *= 2.0; break;
	default: calories *= 1.4; break;
	}
	return calories;
}
void CHorse::setBreed(horseBreed hb) { breed = hb; }
horseBreed CHorse::getBreed() { return breed; }
string CHorse::show() const
{
	string a = "Breed: " + horseBr[static_cast<int>(breed)] + "\n";
	return CAnimal::show() + a;
}
string CHorse::PrintName()
{
	string a = "CHorse";
	return a;
}