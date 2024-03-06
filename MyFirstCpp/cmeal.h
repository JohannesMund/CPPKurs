#pragma once

#include <string>
#include <vector>

#include "ingredients.h"

class CMeal
{
public:
    CMeal();
    CMeal(const std::string& name);

    virtual void addIngredient(const Ingredients::EIngredients zutat);
    virtual void output() const;
    virtual std::string getName() const;

protected:
    std::vector<Ingredients::EIngredients> _ingredients;

private:
    std::string _name;
};






class CSauce : public CMeal{

protected:
    CSauce(const std::string& name) : CMeal(name){

    }
private:
    CSauce() : CMeal(){}
};





class CPasta : public CSauce{
    CPasta(const std::string& nudelSorte, const std::string& sauce) : CSauce(sauce), _nudelSorte(nudelSorte){

    }

    virtual std::string getName() const override {
        return _nudelSorte + " mit " + CSauce::getName();
    }

private:
    const std::string _nudelSorte;
};
