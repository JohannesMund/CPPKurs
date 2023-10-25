#include "ingredients.h"

std::string Ingredients::ingredients2String(EIngredients ingredient)
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
        return "Kaese";
    case EIngredients::eNudeln:
        return "Nudeln";
    case EIngredients::eTomaten:
        return "Tomaten";
    case EIngredients::eSalami:
        return "Salami";
    case EIngredients::eSchlampampignons:
        return "Champignons";
    case EIngredients::eZwiebeln:
        return "Zwiebeln";
    case EIngredients::eKnoblauch:
        return "Knoblauch";
    case EIngredients::eKapern:
        return "Kapern";
    case EIngredients::eHackfleisch:
        return "Hackfleisch";
    case EIngredients::eParmesan:
        return "Parmesan";
    case EIngredients::ePfeffer:
        return "Pfeffer";
    case EIngredients::eKarotten:
        return "Karotten";
    case EIngredients::eBasilikum:
        return "Basilikum";
    default:
        return "unbekannte Zutat";
    }
}
