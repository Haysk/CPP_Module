#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>

template<typename T>
  int	easyfind(T & tab, int i) {
	  typename T::iterator	it;

	  it = std::find(tab.begin(), tab.end(), i);
	  if (it == tab.end())
		  throw (std::exception());
	  return (*it);
  }

#endif

