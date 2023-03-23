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
    Sphere (double p_rayon = 0, const std::string& p_nom = "Sphere"); //constructeur avec paramètre
    double reqRayon () const;
    void asgRayon (double p_nouveauRayon);
    const std::string& reqNom () const;
    void asgNom (const std::string& p_nom);
    double volumeSphere () const; //Calcul du volume
    std::string reqVolumeFormate () const; //Affichage en string
  private:
    double m_rayon;
    std::string m_nom;
  };

} // namespace math

#endif /* SPHERE_H */
