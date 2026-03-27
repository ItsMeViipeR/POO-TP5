#include "Tableau6.hpp"

Tableau6::Tableau6() {
  for (int i = 0; i < 6; ++i) {
    m_tab[i] = 0;
  }
}

Tableau6::Tableau6(const Tableau6 &autre) {
  for (int i = 0; i < 6; ++i) {
    this->m_tab[i] = autre.m_tab[i];
  }
}

Tableau6::~Tableau6() {}

int &Tableau6::operator[](int index) { return m_tab[index]; }

int Tableau6::operator[](int index) const { return m_tab[index]; }

bool Tableau6::operator==(const Tableau6 &autre) const {
  for (int i = 0; i < 6; ++i) {
    if (this->m_tab[i] != autre.m_tab[i]) {
      return false;
    }
  }
  return true;
}

bool Tableau6::operator!=(const Tableau6 &autre) const {
  return !(*this == autre);
}

Tableau6 &Tableau6::operator=(const Tableau6 &autre) {
  if (this != &autre) {
    for (int i = 0; i < 6; ++i) {
      this->m_tab[i] = autre.m_tab[i];
    }
  }
  return *this;
}