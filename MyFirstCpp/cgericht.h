#pragma once

#include <string>
#include <vector>

class CGericht
{
public:
    enum class EZutaten
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

    CGericht(const std::string& name);

    void addZutat(const EZutaten zutat);
    void output() const;

private:
    std::string _name;
    std::vector<EZutaten> _zutaten;
};
