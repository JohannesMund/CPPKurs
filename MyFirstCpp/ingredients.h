#pragma once

#include <string>

namespace Ingredients {
enum class EIngredients {
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
  eKapern,
  eHackfleisch,
  eParmesan,
  ePfeffer,
  eKarotten,
  eBasilikum,
  eAnanas,
  eLasagneplatten,
  eMilch,
  eButter,
  eWraps,
  eBlutwurst,
  eSauerkraut,
  eKartoffeln,
  eErbsen,
};

std::string ingredients2String(EIngredients ingredient);

} // namespace Ingredients
