#pragma once
// Intl.h
#ifndef GUARD_Intl_H
#define GUARD_Intl_H

#include "Core.h"

class Intl : public Core {
public:
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
protected:
	Intl* clone() const { return new Intl(*this); }
private:
	double toeic; // ³í¹®
};

#endif
