#include "Tableau6.hpp"
#include <iostream>

int main() {
  Tableau6 tab1;
  tab1[4] = 2;
  std::cout << "tab1[1] : " << tab1[1] << std::endl;

  const Tableau6 tabc{tab1};
  std::cout << "tabc[4] : " << tabc[4] << std::endl;

  std::cout << "tabc == tab1 : " << (tabc == tab1) << std::endl;

  Tableau6 setup;
  setup[0] = 2;
  setup[1] = 3;
  setup[2] = 5;
  setup[3] = 7;
  setup[4] = 11;
  setup[5] = 13;

  const Tableau6 c{setup};

  std::cout << "c[5] : " << c[5] << std::endl;

  return 0;
}