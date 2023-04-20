#pragma once
#include "Functions.h"
enum class catBreed {
	Bengal,
	British,
	Charteux,
	Burmesse,
	American_Shorthair,
	Abyssian,
	Maine_Coon,
	Himalayan,
	Munchikin,
	Persian,
	None
};
static string catBr[] = { "Bengal","British","Charteux","Burmesse","American Shorthair","Abyssian","Maine Coon","Himalayan","Munchikin","Persian", "None" };

class CCat : public CAnimal
{
protected:
	catBreed breed;
public:
	CCat();
	CCat(double age, double weight, activity act, catBreed breed);
	double HowManyCalories();
	void setBreed(catBreed cb);
	catBreed getBreed();
	string show() const;
	string PrintName();
};
