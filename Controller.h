#pragma once
#include <vector>
#include "Basura.h"
#include "Tacho.h"
#include "Bano.h"
#include "monigote.h"

class Controller {
private:
	vector<Basura*> basuras;
	vector<Tacho*> tachos;
	vector<Bano*> ba�os;
	Humano* cleaner;

public:
	Controller() {}
	~Controller() {}

};