/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   sphere.h
 * Author: etudiant
 *
 * Created on 18 février 2023, 03:19
 */

#ifndef SPHERE_H
#define SPHERE_H

#include <string>
namespace math
{

  class Sphere
  {
  public:
    Sphere (double p_rayon = 0);
    //double reqRayon (const double& p_rayon) const;
    double volumeSphere (const double& p_rayon) const;
    std::string reqVolumeFormate () const;
  private:
    double m_rayon;
  };

} // namespace math

#endif /* SPHERE_H */

