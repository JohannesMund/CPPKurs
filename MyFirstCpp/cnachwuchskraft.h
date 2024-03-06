#pragma once

#include "cperson.h"

class CNachwuchskraft : public CPerson
{
public:
    CNachwuchskraft();
    CNachwuchskraft(const std::string& name, const int alter, const std::string& berufung, CMeal* favouriteMeal);

    virtual void output() const override;
};


class CPraktikant : public CNachwuchskraft
{
public:
    CPraktikant() : CNachwuchskraft(){}
};
