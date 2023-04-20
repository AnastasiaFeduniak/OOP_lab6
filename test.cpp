#include "pch.h"
#include "../Lab_6/Functions.h"
#include "../Lab_6/Cat.h"
#include "../Lab_6/Dog.h"
#include "../Lab_6/Horse.h"
using namespace std;
TEST(CAnimal, animal)
{
	CAnimal a;
	CAnimal b(3, 6, activity::low);
	EXPECT_EQ(a.getActivity(), activity::None);
	EXPECT_DOUBLE_EQ(a.getWeight(), 0);
	EXPECT_DOUBLE_EQ(a.getAge(), 0);
	EXPECT_EQ(b.getActivity(), activity::low);
	EXPECT_DOUBLE_EQ(b.getWeight(), 6);
	EXPECT_DOUBLE_EQ(b.getAge(), 3);
	EXPECT_EQ(a.PrintName(), "CAnimal");
	EXPECT_EQ(b.PrintName(), "CAnimal");
	EXPECT_EQ(a.HowManyCalories(), 0);
	EXPECT_DOUBLE_EQ(b.HowManyCalories(), 367.2);
	EXPECT_EQ(b.show(), "Age: 3.000000\nWeight: 6.000000\nActivity: Low\n");
}
TEST(CCat, cat)
{
	CCat a;
	CCat b(3, 6, activity::low, catBreed::Maine_Coon);
	EXPECT_EQ(a.getActivity(), activity::None);
	EXPECT_DOUBLE_EQ(a.getWeight(), 0);
	EXPECT_DOUBLE_EQ(a.getAge(), 0);
	EXPECT_EQ(a.getBreed(), catBreed::None);
	EXPECT_EQ(b.getActivity(), activity::low);
	EXPECT_DOUBLE_EQ(b.getWeight(), 6);
	EXPECT_DOUBLE_EQ(b.getAge(), 3);
	EXPECT_EQ(b.getBreed(), catBreed::Maine_Coon);
	EXPECT_EQ(a.PrintName(), "CCat");
	EXPECT_EQ(b.PrintName(), "CCat");
	EXPECT_DOUBLE_EQ(a.HowManyCalories(), 0);
	EXPECT_DOUBLE_EQ(b.HowManyCalories(), 626.4);
	EXPECT_EQ(b.show(), "Age: 3.000000\nWeight: 6.000000\nActivity: Low\nBreed: Maine Coon\n");
}
TEST(CHorse, horse)
{
	CHorse a;
	CHorse b(7, 850, activity::low, horseBreed::Arabian);
	EXPECT_EQ(a.getActivity(), activity::None);
	EXPECT_DOUBLE_EQ(a.getWeight(), 0);
	EXPECT_DOUBLE_EQ(a.getAge(), 0);
	EXPECT_EQ(a.getBreed(), horseBreed::None);
	EXPECT_EQ(b.getActivity(), activity::low);
	EXPECT_DOUBLE_EQ(b.getWeight(), 850);
	EXPECT_DOUBLE_EQ(b.getAge(), 7);
	EXPECT_EQ(b.getBreed(), horseBreed::Arabian);
	EXPECT_EQ(a.PrintName(), "CHorse");
	EXPECT_EQ(b.PrintName(), "CHorse");
	EXPECT_DOUBLE_EQ(a.HowManyCalories(), 0);
	EXPECT_DOUBLE_EQ(b.HowManyCalories(), 102016.8);
	EXPECT_EQ(b.show(), "Age: 7.000000\nWeight: 850.000000\nActivity: Low\nBreed: Arabian\n");
}
TEST(CDog, dog)
{
	CDog a;
	CDog b(3, 6, activity::low, dogBreed::Bloodhound);
	EXPECT_EQ(a.getActivity(), activity::None);
	EXPECT_EQ(a.getWeight(), 0);
	EXPECT_EQ(a.getAge(), 0);
	EXPECT_EQ(a.getBreed(), dogBreed::None);
	EXPECT_EQ(b.getActivity(), activity::low);
	EXPECT_EQ(b.getWeight(), 6);
	EXPECT_EQ(b.getAge(), 3);
	EXPECT_EQ(b.getBreed(), dogBreed::Bloodhound);
	EXPECT_EQ(a.PrintName(), "CDog");
	EXPECT_EQ(b.PrintName(), "CDog");
	EXPECT_DOUBLE_EQ(a.HowManyCalories(), 0);
	EXPECT_DOUBLE_EQ(b.HowManyCalories(), 691.2);
	EXPECT_EQ(b.show(), "Age: 3.000000\nWeight: 6.000000\nActivity: Low\nBreed: Bloodhound\n");
}