#pragma once

#include <string>
#include <vector>

class CGericht {
public:
  enum class EZutaten {
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
    eBasilikum
  };

  std::string convertZutatenToString(EZutaten zutat) const;

  CGericht(const std::string &name);

  void addZutat(const EZutaten zutat);
  void output() const;

private:
  std::string _name;
  std::vector<EZutaten> _zutaten;
};
