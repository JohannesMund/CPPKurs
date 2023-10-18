#pragma once

#include <string>
#include <vector>

class CMeal
{
public:
    enum class EIngredients
    {
        eWasser,
        eSalz,
        eMehl,
        eKaese,
        eNudeln,
        eTomaten,
        eSalami,
        eSchlampampignons,
        eZwiebeln,
        eKnoblauch,
        eKapern
    };

    CMeal(const std::string& name);

    void addIngredient(const EIngredients zutat);
    void output() const;

private:
    std::string _name;
    std::vector<EIngredients> _ingredients;
};
