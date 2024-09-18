#pragma once
#include "Patient.h"

class Doctor{
private:
public:
    void Next(Patient* patient);
    void CheckPatientProblems(Patient* patient);
    //Diag Think(std::string str_diag);
};