#pragma once

class Tableau6 {

public:
  Tableau6();
  Tableau6(const Tableau6 &autre);
  ~Tableau6();

  int &operator[](int index);

  int operator[](int index) const;

  bool operator==(const Tableau6 &autre) const;

  bool operator!=(const Tableau6 &autre) const;

  Tableau6 &operator=(const Tableau6 &autre);

private:
  int m_tab[6];
};