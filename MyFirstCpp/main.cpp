#include <iostream>
#include <string>

#include "cmeal.h"
#include "cperson.h"
#include "ingredients.h"
#include "mealfactory.h"
int main()
{
    auto pizza = MealFactory::makePizza();
    pizza->output();

    auto nudelnMitTomatenSauce = MealFactory::makeNudelnMitTomatensauce();
    nudelnMitTomatenSauce->output();

    auto NudelnMitBolo = MealFactory::makeNudelnMitBolognese();
    NudelnMitBolo->output();

    auto PizzaAnanas = MealFactory::makePizzaAnanas();
    PizzaAnanas->output();

    auto WrapMitLasagne = MealFactory::makeWrapMitLasagne();
    WrapMitLasagne->output();

    auto ToteOma = MealFactory::makeToteOma();
    ToteOma->output();

    CPerson anne;
    anne.setName("Anne");
    anne.setAge(16);
    anne.setProfession("Schuelerin");
    anne.setfavouriteMeal(&PizzaAnanas);

    CPerson carlos("Carlos", 25, "Brain", WrapMitLasagne);
    CPerson fabian("Fabian", 28, "Auszubildender", pizza);
    CPerson david("David", 27, "Auszubildender", nudelnMitTomatenSauce);
    CPerson hannes("Hannes", 45, "Ausbildungspapa", ToteOma);

    CPerson azubihorde[4] = {anne, carlos, fabian, david};

    for (auto const& p : azubihorde)
    {
        p.output();
    }
    hannes.output();

    delete pizza;
    delete nudelnMitTomatenSauce;
    delete NudelnMitBolo;
    delete WrapMitLasagne;
    delete PizzaAnanas;
    delete ToteOma;

    return 0;
}
