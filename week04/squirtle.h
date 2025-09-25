#pragma once
#include "pokemon.h"
using namespace std;


class Squirtle : public Pokemon
{
public:
	Squirtle();
	~Squirtle();
	void attack() const;
};