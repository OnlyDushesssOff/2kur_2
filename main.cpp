#pragma once
#include "Patient.h"
#include "PatientQueue.h"
#include "Doctor.h"

int main(){
    PatientQueue patientQueue;
    Doctor doc;
    while (true){
        //ввод пациентов(заполнения из файла)
    }
    while(true){//фиксировать, когда закончить цикл
        Patient* current = patientQueue.GetNextPatient();
        doc.Next(current);
        delete current;
    }
    return 0;
}