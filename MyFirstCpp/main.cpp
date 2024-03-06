#include <functional>
#include <iostream>
#include <string>
#include <algorithm>

#include "cmeal.h"
#include "cnachwuchskraft.h"
#include "cperson.h"
#include "cpizza.h"
#include "ingredients.h"
#include "mealfactory.h"

bool smallerThan100(const int i)
{
    return i < 100;
}

int main()
{

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

    CPizza pizza;
    pizza.addIngredient(Ingredients::EIngredients::eSalami);
    pizza.addIngredient(Ingredients::EIngredients::eSchlampampignons);
    pizza.output();

    CNachwuchskraft anne;
    anne.setName("Anne");
    anne.setAge(16);
    anne.setProfession("Schuelerin");
    anne.setfavouriteMeal(PizzaAnanas);

    CNachwuchskraft carlos("Carlos", 25, "Brain", WrapMitLasagne);
    CNachwuchskraft fabian("Fabian", 28, "Auszubildender", &pizza);
    CNachwuchskraft david("David", 27, "Auszubildender", nudelnMitTomatenSauce);
    CPerson hannes("Hannes", 45, "Ausbildungspapa", ToteOma);

    std::vector<int> vecInt{1, 100, 123, 99, 105, 50, 37, 89, 47};

    std::vector<CNachwuchskraft> azubis{carlos, fabian, david, anne};

    std::vector<CNachwuchskraft> minderjaerhige;
    std::vector<CNachwuchskraft> mitarbeitendeMitZweifelhaftenEssgewohnheiten;

    std::copy_if(azubis.begin(), azubis.end(), std::back_inserter(minderjaerhige), CPerson::isMinor());


    if(minderjaerhige.size())
    {
        minderjaerhige.at(0).output();
    }
    else
    {
        std::cout << "Keiner gefunden" << std::endl;
    }



    delete nudelnMitTomatenSauce;
    delete NudelnMitBolo;
    delete WrapMitLasagne;
    delete PizzaAnanas;
    delete ToteOma;

    return 0;
}
