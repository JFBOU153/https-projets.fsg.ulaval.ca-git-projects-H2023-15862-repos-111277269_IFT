/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   sphere1.cpp
 * Author: etudiant
 *
 * Created on 18 février 2023, 03:19
 */

#include "sphere.h"
#include <string>
#include <iostream>
#include <sstream>
#include<cmath>
using namespace std;

namespace math
{


  Sphere::Sphere (double p_rayon, const std::string& p_nom)
  : m_rayon (p_rayon), m_nom (p_nom) { }


  double
  Sphere::reqRayon () const
  {
    return m_rayon;
  }


  void
  Sphere::asgRayon (double p_nouveauRayon)
  {
    m_rayon = p_nouveauRayon;
  }


  const std::string&
  Sphere::reqNom () const
  {
    return m_nom;
  }


  void
  Sphere::asgNom (const std::string & p_nom)
  {
    m_nom = p_nom;
  }


  double
  Sphere::volumeSphere () const
  {
    double volume;
    volume = (4.0 / 3.0)*(3.14159 * pow (m_rayon, 3));
    return volume;
  }


  std::string
  Sphere::reqVolumeFormate () const
  {
    ostringstream os;
    os << "Le volume de la sphere de rayon " << reqRayon () << " est : "
            << volumeSphere () << endl;
    return os.str ();
  }

}