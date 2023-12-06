#pragma once

#include <string>
#include <vector>

#include "ingredients.h"

class CMeal
{
public:
    CMeal();
    CMeal(const std::string& name);

    virtual void addIngredient(const Ingredients::EIngredients zutat);
    void output() const;
    virtual std::string getName() const;

protected:
    std::vector<Ingredients::EIngredients> _ingredients;

private:
    std::string _name;
};
