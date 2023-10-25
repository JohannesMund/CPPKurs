#pragma once

#include <string>
#include <vector>

#include "ingredients.h"

class CMeal
{
public:
    CMeal(const std::string& name);

    void addIngredient(const Ingredients::EIngredients ingredient);
    void output() const;

private:
    static std::string ingredient2String(const Ingredients::EIngredients ingredient);

    std::string _name;
    std::vector<Ingredients::EIngredients> _ingredients;
};
