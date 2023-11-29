#include "mealfactory.h"
#include "cmeal.h"

CMeal* MealFactory::makePizza()
{
    CMeal* Pizza = new CMeal("Pizza");
    Pizza->addIngredient(Ingredients::EIngredients::eMehl);
    Pizza->addIngredient(Ingredients::EIngredients::eWasser);
    Pizza->addIngredient(Ingredients::EIngredients::eSalz);
    Pizza->addIngredient(Ingredients::EIngredients::eTomaten);
    Pizza->addIngredient(Ingredients::EIngredients::eSalami);
    Pizza->addIngredient(Ingredients::EIngredients::eKaese);

    return Pizza;
}

CMeal* MealFactory::makeNudelnMitTomatensauce()
{
    CMeal* NudelnMitTomatensauce = new CMeal("Nudeln mit Tomatensauce");
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eWasser);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eNudeln);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eTomaten);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eZwiebeln);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eSalz);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::ePfeffer);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eKnoblauch);
    NudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eBasilikum);

    return NudelnMitTomatensauce;
}

CMeal* MealFactory::makeNudelnMitBolo()
{
    CMeal* NudelnMitBolo = new CMeal("Nudeln mit Bolognesesauce");
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eNudeln);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eWasser);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eHackfleisch);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eSalz);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::ePfeffer);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eZwiebeln);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eKarotten);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eTomaten);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eKnoblauch);
    NudelnMitBolo->addIngredient(Ingredients::EIngredients::eParmesan);

    return NudelnMitBolo;
}

CMeal* MealFactory::makeWrapMitLasnag()
{
    CMeal* WrapMitLasagne = new CMeal("Wrap mit Lasagne");
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eHackfleisch);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eSalz);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::ePfeffer);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eZwiebeln);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eKarotten);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eTomaten);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eKnoblauch);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eParmesan);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eLasagneplatten);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eMilch);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eButter);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eMehl);
    WrapMitLasagne->addIngredient(Ingredients::EIngredients::eWraps);

    return WrapMitLasagne;
}

CMeal* MealFactory::makePizzaAnanas()
{

    CMeal* PizzaAnanas = new CMeal("Pizza Ananas");
    PizzaAnanas->addIngredient(Ingredients::EIngredients::eMehl);
    PizzaAnanas->addIngredient(Ingredients::EIngredients::eWasser);
    PizzaAnanas->addIngredient(Ingredients::EIngredients::eSalz);
    PizzaAnanas->addIngredient(Ingredients::EIngredients::eTomaten);
    PizzaAnanas->addIngredient(Ingredients::EIngredients::eAnanas);
    PizzaAnanas->addIngredient(Ingredients::EIngredients::eKaese);
    return PizzaAnanas;
}

CMeal* MealFactory::makeToteOma()
{
    CMeal* ToteOma = new CMeal("tote Oma");
    ToteOma->addIngredient(Ingredients::EIngredients::eBlutwurst);
    ToteOma->addIngredient(Ingredients::EIngredients::eSauerkraut);
    ToteOma->addIngredient(Ingredients::EIngredients::eKartoffeln);
    ToteOma->addIngredient(Ingredients::EIngredients::eErbsen);
}
