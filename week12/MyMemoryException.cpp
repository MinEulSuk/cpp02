#include "MyMemoryException.h"

MyMemoryException::MyMemoryException(int ec, DynamicArray* ea)
	:MyException(ec, "ÀÎµ¦½º ¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù.", ea)
{
}