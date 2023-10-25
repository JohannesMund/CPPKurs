#pragma once

#include <string>

namespace Ingredients
{
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

std::string toString(const EIngredients ingredient);

} // namespace Ingredients
