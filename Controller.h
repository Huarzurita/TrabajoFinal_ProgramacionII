#pragma once
#include <vector>
#include "Basura.h"
#include "Tacho.h"
#include "Ba�o.h"
#include "monigote.h"

class Controller {
private:
	vector<Basura*> basuras;
	vector<Tacho*> tachos;
	vector<Ba�o*> ba�os;
	Humano* cleaner;


	
public:
	Controller() {}
	~Controller() {}

};