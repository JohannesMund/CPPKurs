#pragma once

#include <string>
#include <vector>

#include "ingredients.h"

class CMeal
{
public:
    CMeal(const std::string& name);

    void addIngredient(const Ingredients::EIngredients zutat);
    void output() const;
    std::string getName() const;

private:
    std::string _name;
    std::vector<Ingredients::EIngredients> _ingredients;
};
