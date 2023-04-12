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
string activ[] = {"Low", "Medium", "High", "None"};
string dogBr[] = { "Affenpinscher",
	"Afgan Hound",
	"Airedale Terier",
	"Akita",
	"Haski",
	"Malamute",
	"Bulldog",
	"Water Spaniel",
	"Shepherd",
	"Belgian Tervuren",
	"Bernese Mountain",
	"Bichon Frise",
	"Bloodhound",
	"Dobermann",
	"Sighthound",
	"None"};
enum class catBreed{
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
string catBr[] = { "Bengal","British","Charteux","Burmesse","American Shorthair","Abyssian","Maine Coon","Himalayan","Munchikin","Persian", "None"};
enum class dogBreed
{
	Affenpinscher,
	Afgan_Hound,
	Airedale_Terier,
	Akita,
	Haski,
	Malamute,
	Bulldog,
	Water_Spaniel,
	Shepherd,
	Belgian_Tervuren,
	Bernese_Mountain,
	Bichon_Frise,
	Bloodhound,
	Dobermann,
	Sighthound,
	None
};
enum class horseBreed
{
	Aegidienberger,
	Andalusian,
	 Arabian,
	Curly,
	Dartmoor,
	Irish_Cob,
	Kentucky_Mountain_Saddle,
	None
};
string horseBr[] = {
	"Aegidienberger",
	"Andalusian",
	 "Arabian",
	"Curly",
	"Dartmoor",
	"Irish Cob",
	"Kentucky Mountain Saddle",
	"None"
};
class CAnimal
{
protected:
	double age;
	double weight;
	activity act;

public:
		CAnimal()
		{
			age = 0;
			weight = 0;
			act = activity::None;
		}
		CAnimal(double age, double weight, activity act) : age(age), weight(weight), act(act) {}

	virtual double HowManyCalories() { return 0; }
		double getAge() { return age; }
		double getWeight() { return weight; }
		void setAge(double a) { age = a; }
		void setWeight(double w) { weight = w; }
		activity getActivity() { return act; }
		void setActivity(activity a) { act = a; }
		virtual string show() const
		{
			string a = "Age: " + to_string(age) + "\n" + "Weight: " + to_string(weight) + "\n" + "Activity: " + activ[static_cast<int>(act)] + "\n";
			//cout << "Age: " << age << endl << "Weight: " << weight << endl << "Activity: " << activ[static_cast<int>(act)] << endl;
			return a;
		}
	   virtual string PrintName()
		{
		   string a =  "CAnimal";
		   return a;
		}
};


class CCat: public CAnimal
{
protected:
	catBreed breed;
public:
	CCat()
	{
		age = 0;
		weight = 0;
		act = activity::None;
		breed = catBreed::None;
	}
	CCat(double age, double weight, activity act, catBreed breed) : CAnimal(age, weight, act), breed(breed) {}
	virtual double HowManyCalories()
	{
		double calories = 0;
		calories = 86 * weight + 2 * age;
		switch(act)
		{
		case activity::low: calories *= 1.2; break;
		case activity::medium: calories *= 1.4; break;
		case activity::high: calories *= 1.6; break;
		default: calories *= 1.4; break;
		}
		return calories;
	}
	void setBreed(catBreed cb) { breed = cb; }
	catBreed getBreed() { return breed; }
	virtual string show() const
	{
		string a = "Breed: " + catBr[static_cast<int>(breed)] + "\n";
		return CAnimal::show() + a;
	}
	virtual string PrintName()
	{
		string a = "CCat";
		return a;
	}
};




class CDog : protected CAnimal
{
protected:
	dogBreed breed;
public:
	CDog()
	{
		age = 0;
		weight = 0;
		act = activity::None;
		breed = dogBreed::None;
	}
	CDog(double age, double weight, activity act, dogBreed breed) : CAnimal(age, weight, act), breed(breed) {}
	virtual double HowManyCalories()
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
	void setBreed(dogBreed db) { breed = db; }
	dogBreed getBreed() { return breed; }
	virtual string show() const
	{;
			string a =  "Breed: " + dogBr[static_cast<int>(breed)] + "\n";
		return CAnimal::show() + a;
	}
	virtual string PrintName()
	{
		string a = "CDog";
		return a;
	}
};








class CHorse : public CAnimal
{
protected:
		horseBreed breed;
public:
	CHorse()
	{
		age = 0;
		weight = 0;
		act = activity::None;
		breed = horseBreed::None;
	}
	CHorse(double age, double weight, activity act, horseBreed breed) : CAnimal(age, weight, act), breed(breed) {}
	virtual double HowManyCalories()
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
	void setBreed(horseBreed hb) { breed = hb; }
	horseBreed getBreed() { return breed; }
	virtual string show() const
	{
		string a  = "Breed: " + horseBr[static_cast<int>(breed)] + "\n";
		return CAnimal::show() + a;
	}
	virtual string PrintName()
	{
		string a = "CHorse";
		return a;
	}
};