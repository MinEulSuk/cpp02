/********************************************************************
 * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
 ********************************************************************/
#include "pikachu.h"
int main()
{
	Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}