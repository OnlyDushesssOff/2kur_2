#include <iostream>
#include <chrono>
#include "string"

class Patient{
    private:
        std::string _Name;
        std::string _Surname;
        std::string _Padtonomgc;
        std::string _healthProblem;
        //Diagnos* _diagnos; // discriptions - диагноз drags - лекарство 
        std::chrono::year_month_day _bornDate;
        UUID _uuid;
        Gender _gender;

        void DefineGender();
        void GenerateID();
        void DetermineFIO(std::string FIO);
    public:
        Patient(std::string surname, std::string name, std::string padtonomgc, std::chrono::year_month_day bornDate);
        Patient(std::string FIO, std::chrono::year_month_day bornDate);

};