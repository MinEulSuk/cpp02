/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/	
#include "pikachu.h"
#include "squirtle.h"
int main()
{
	Pokemon* pokemons[4];
	pokemons[0] = new Squirtle();
	pokemons[1] = new Pikachu();
	pokemons[2] = new Pokemon();
	pokemons[3] = new Pikachu();

	for (int i = 0; i < 4; i++) {
		pokemons[i]->attack();
	}
	for (int i = 0; i < 4; i++) {
		delete pokemons[i];
	}



	/*Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;*/
}