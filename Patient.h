#pragma once
#include <iostream>
#include <chrono>
#include "string"

class Patient{
    private:
        std::string _name;
        std::string _surname;
        std::string _padtonomgc;
        std::string _healthProblem;
        //Diagnos* _diagnos; // discriptions - диагноз drags - лекарство 
        std::chrono::year_month_day _bornDate;
        std::string _uuid;
        std::string _gender;

        void DefineGender();
        void GenerateID();
        void DetermineFIO(std::string FIO);
    public:
        Patient(std::string surname, std::string name, std::string padtonomgc, std::chrono::year_month_day bornDate);
        Patient(std::string FIO, std::chrono::year_month_day bornDate);

};