#include "diffusearealight.h"

Color3f DiffuseAreaLight::L(const Intersection &isect, const Vector3f &w) const
{
    //TODO

    if(twoSided)
    {
        return emittedLight;
    }
    else if( glm::dot(isect.normalGeometric, w) > 0)
    {
        return emittedLight;
    }

    return glm::vec3(0);

}
