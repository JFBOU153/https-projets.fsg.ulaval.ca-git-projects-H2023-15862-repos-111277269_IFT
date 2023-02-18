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
using namespace std;

namespace math
{


  Sphere::Sphere (const double& p_rayon)
  : m_rayon (p_rayon)
  {
    cout << "constructeur Sphere" << endl;
  }


  const int&
  Sphere::reqRayon (const double& p_rayon) const
  {
    return m_rayon;
  }


  const int&
  Sphere::volumeSphere (const double& p_rayon) const
  {
    return m_rayon;
  }


  const string&
  Sphere::reqVolumeFormate (const string& p_rayon) const
  {
    return m_rayon;
  }

}