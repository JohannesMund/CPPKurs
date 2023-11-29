#pragma once

class CMeal;

namespace MealFactory
{
CMeal* makePizza();
CMeal* makePizzaAnanas();
CMeal* makeNudelnMitTomatensauce();
CMeal* makeNudelnMitBolognese();
CMeal* makeWrapMitLasagne();
CMeal* makeToteOma();
} // namespace MealFactory
