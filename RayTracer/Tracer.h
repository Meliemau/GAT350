#pragma once
#include "Types.h"
#include "Camera.h"
#include "ColorBuffer.h"

class Scene;

class Tracer
{
public:
	void Trace(const ColorBuffer& coloeBuffer, Scene* scene, Camera* camera);

public:
	int samples = 3;
};