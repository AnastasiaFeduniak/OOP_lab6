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
static string dogBr[] = { "Affenpinscher",
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
static string catBr[] = { "Bengal","British","Charteux","Burmesse","American Shorthair","Abyssian","Maine Coon","Himalayan","Munchikin","Persian", "None"};
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
static string horseBr[] = {
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
	CAnimal();
	CAnimal(double age, double weight, activity act);

	virtual double HowManyCalories();
	double getAge();
	double getWeight();
	void setAge(double a);
	void setWeight(double w);
	activity getActivity();
	void setActivity(activity a);
	virtual string show() const;
	virtual string PrintName();
};


class CCat: public CAnimal
{
protected:
	catBreed breed;
public:
	CCat();
	CCat(double age, double weight, activity act, catBreed breed);
	virtual double HowManyCalories();
	void setBreed(catBreed cb);
	catBreed getBreed();
	virtual string show() const;
	virtual string PrintName();
};




class CDog : protected CAnimal
{
protected:
	dogBreed breed;
public:
	CDog();
	CDog(double age, double weight, activity act, dogBreed breed);
	virtual double HowManyCalories();
	void setBreed(dogBreed db);
	dogBreed getBreed();
	virtual string show() const;
	virtual string PrintName();
};








class CHorse : public CAnimal
{
protected:
		horseBreed breed;
public:
	CHorse();
	CHorse(double age, double weight, activity act, horseBreed breed);
	virtual double HowManyCalories();
	void setBreed(horseBreed hb);
	horseBreed getBreed();
	virtual string show() const;
	virtual string PrintName();
};