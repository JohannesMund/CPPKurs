#include "cnachwuchskraft.h"

CNachwuchskraft::CNachwuchskraft() : CPerson()
{
}

CNachwuchskraft::CNachwuchskraft(const std::string& name,
                                 const int alter,
                                 const std::string& berufung,
                                 CMeal* favouriteMeal) :
    CPerson(name, alter, berufung, favouriteMeal)
{
}

void CNachwuchskraft::output() const
{
    CPerson::output();
    if (getAge() < 16 || getAge() > 30)
    {
        std::cout << "Für eine Nachwuchskraft hat diese Person ein komisches Alter!" << std::endl;
    }
}
