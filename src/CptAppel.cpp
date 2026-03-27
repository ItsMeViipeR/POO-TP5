#include "../include/CptAppel.hpp"

int CptAppel::m_cpt = 0;

CptAppel::CptAppel() { m_cpt++; }

CptAppel::~CptAppel() {}

int CptAppel::compterAppel() { return m_cpt; }