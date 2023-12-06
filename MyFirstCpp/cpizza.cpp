#include "cpizza.h"

CPizza::CPizza() : CMeal("Pizza")
{
    CMeal::addIngredient(Ingredients::EIngredients::eMehl);
    CMeal::addIngredient(Ingredients::EIngredients::eWasser);
    CMeal::addIngredient(Ingredients::EIngredients::eSalz);
    CMeal::addIngredient(Ingredients::EIngredients::eTomaten);
    CMeal::addIngredient(Ingredients::EIngredients::eKaese);
}

void CPizza::addIngredient(const Ingredients::EIngredients zutat)
{
    CMeal::addIngredient(zutat);

    if (_belag.empty())
    {
        _belag = Ingredients::ingredients2String(zutat);
    }
    else
    {
        _belag += " und " + Ingredients::ingredients2String(zutat);
    }
}

std::string CPizza::getName() const
{
    return CMeal::getName() + " mit " + _belag;
}
