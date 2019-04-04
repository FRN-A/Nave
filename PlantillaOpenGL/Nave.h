#pragma once

#include "Modelo.h"
#include "glm/glm.hpp"
#include "glm/gtx/transform.hpp"

class Nave : public Modelo {
public:
	Nave();
	enum Direccion {Izquierda, Derecha};
	vec3 coordenadas;
	float angulo;
	float velocidadAngular = 0.1f;
	float velocidad = 0.0004f;
	
	void rotar(Direccion direccion);
	void avanzar();
	void actualizarMatrizTransformacion();
};
