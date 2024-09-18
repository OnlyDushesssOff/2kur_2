#pragma once
#include "Patient.h"


class PatientQueue{
private:
    Patient** _topPatient;
    Patient** _middlePatient;
    Patient** _generalPatient;
public:
    PatientQueue();
    Patient* GetNextPatient();
    void AppendPatient(Patient* pat);
    ~PatientQueue();
};