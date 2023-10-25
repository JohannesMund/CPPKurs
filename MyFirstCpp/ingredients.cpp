#include "ingredients.h"

std::string Ingredients::toString(const EIngredients ingredient)
{
    switch (ingredient)
    {
    case EIngredients::eWasser:
        return "Wasser";
    case EIngredients::eSalz:
        return "Salz";
    case EIngredients::eMehl:
        return "Mehl";
    case EIngredients::eKaese:
        return "Käse";
    case EIngredients::eNudeln:
        return "Nudeln";
    case EIngredients::eTomaten:
        return "Tomaten";
    case EIngredients::eSalami:
        return "Salami";
    case EIngredients::eSchlampampignons:
        return "Schlampampignons";
    case EIngredients::eZwiebeln:
        return "Zwiebeln";
    case EIngredients::eKnoblauch:
        return "Knoblauch";
    case EIngredients::eKapern:
        return "Kapern";
    default:
        return "Was ist das denn?";
    }
}
