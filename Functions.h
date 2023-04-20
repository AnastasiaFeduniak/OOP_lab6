#pragma once
#include <iostream>
#include <string>
using namespace std;
enum class activity
{
	low,
	medium,
	high,
	None
};
static string activ[] = {"Low", "Medium", "High", "None"};


class CAnimal
{
protected:
	double age;
	double weight;
	activity act;

public:
	CAnimal();
	CAnimal(double age, double weight, activity act);

	double HowManyCalories();
	double getAge();
	double getWeight();
	void setAge(double a);
	void setWeight(double w);
	activity getActivity();
	void setActivity(activity a);
	string show() const;
	string PrintName();
};

