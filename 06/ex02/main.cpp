#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	* generate(void) {
	int	i;
	std::srand(time(NULL)); 
	i = std::rand();
	i = i % 3;
	switch	(i) {
		case (0) :
			return (new A());
		case (1) :
			return (new B);
		case (2) :
			return (new C);
	}
	throw	(Base::GenerationFailException());
}

void identify(Base & p) {
	try	{
		A	&refA = dynamic_cast<A&>(p);
		static_cast<void>(refA);
		std::cout << "Class A" << std::endl;
	} catch (std::exception & e) {
		e.what();
	}

	try	{
		B	&refB = dynamic_cast<B&>(p);
		static_cast<void>(refB);
		std::cout << "Class B" << std::endl;
	} catch (std::exception & e) {
		e.what();
	}

	try	{
		C	&refC = dynamic_cast<C&>(p);
		static_cast<void>(refC);
		std::cout << "Class C" << std::endl;
	} catch (std::exception & e) {
		e.what();
	}
}

void identify(Base * p) {
	if (p == NULL)
		return;
	A	*ptrA = dynamic_cast<A*>(p);
	if (ptrA != NULL)
		std::cout << "Class A" << std::endl;

	B	*ptrB = dynamic_cast<B*>(p);
	if (ptrB != NULL)
		std::cout << "Class B" << std::endl;

	C	*ptrC = dynamic_cast<C*>(p);
	if (ptrC != NULL)
		std::cout << "Class C" << std::endl;
}

int main()
{
	for (int i = 0; i < 20; i++) {
		Base *gen = generate();
		identify(*gen);
		identify(gen);
		delete gen;
		std::cout << "----------------------" << std::endl;
		sleep(1);
	}
	return 0;
}

