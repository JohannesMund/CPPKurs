#pragma once
#include "cmeal.h"

class CPizza : public CMeal
{
public:
    CPizza();

    virtual void addIngredient(const Ingredients::EIngredients zutat) override;
    virtual std::string getName() const override;

private:
    std::string _belag;
};
