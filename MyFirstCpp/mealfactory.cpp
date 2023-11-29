#include "mealfactory.h"
#include "cmeal.h"

CMeal* MealFactory::makePizza()
{
    CMeal* pizza = new CMeal("Pizza");
    pizza->addIngredient(Ingredients::EIngredients::eMehl);
    pizza->addIngredient(Ingredients::EIngredients::eWasser);
    pizza->addIngredient(Ingredients::EIngredients::eSalz);
    pizza->addIngredient(Ingredients::EIngredients::eTomaten);
    pizza->addIngredient(Ingredients::EIngredients::eSalami);
    pizza->addIngredient(Ingredients::EIngredients::eKaese);
    return pizza;
}

CMeal* MealFactory::makeNudelnMitTomatensauce()
{
    CMeal* nudelnMitTomatensauce = new CMeal("Nudeln mit Tomatensauce");
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eWasser);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eNudeln);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eTomaten);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eZwiebeln);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eSalz);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::ePfeffer);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eKnoblauch);
    nudelnMitTomatensauce->addIngredient(Ingredients::EIngredients::eBasilikum);
    return nudelnMitTomatensauce;
}

CMeal* MealFactory::makeNudelnMitBolognese()
{
    CMeal* nudelnMitBolognese = new CMeal("Nudeln mit Bolognesesauce");
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eNudeln);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eWasser);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eHackfleisch);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eSalz);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::ePfeffer);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eZwiebeln);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eKarotten);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eTomaten);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eKnoblauch);
    nudelnMitBolognese->addIngredient(Ingredients::EIngredients::eParmesan);
    return nudelnMitBolognese;
}

CMeal* MealFactory::makeWrapMitLasagne()
{
    CMeal* wrapMitLasagne = new CMeal("Wrap mit Lasagne");
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eHackfleisch);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eSalz);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::ePfeffer);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eZwiebeln);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eKarotten);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eTomaten);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eKnoblauch);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eParmesan);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eLasagneplatten);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eMilch);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eButter);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eMehl);
    wrapMitLasagne->addIngredient(Ingredients::EIngredients::eWraps);
    return wrapMitLasagne;
}

CMeal* MealFactory::makePizzaAnanas()
{

    CMeal* pizzaAnanas = new CMeal("Pizza Ananas");
    pizzaAnanas->addIngredient(Ingredients::EIngredients::eMehl);
    pizzaAnanas->addIngredient(Ingredients::EIngredients::eWasser);
    pizzaAnanas->addIngredient(Ingredients::EIngredients::eSalz);
    pizzaAnanas->addIngredient(Ingredients::EIngredients::eTomaten);
    pizzaAnanas->addIngredient(Ingredients::EIngredients::eAnanas);
    pizzaAnanas->addIngredient(Ingredients::EIngredients::eKaese);
    return pizzaAnanas;
}

CMeal* MealFactory::makeToteOma()
{
    CMeal* toteOma = new CMeal("tote Oma");
    toteOma->addIngredient(Ingredients::EIngredients::eBlutwurst);
    toteOma->addIngredient(Ingredients::EIngredients::eSauerkraut);
    toteOma->addIngredient(Ingredients::EIngredients::eKartoffeln);
    toteOma->addIngredient(Ingredients::EIngredients::eErbsen);
}
