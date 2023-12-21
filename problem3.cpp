/*
Problem 3: BMI Calculator (20 pts)
Create a program that will ask the user to enter their name, age, gender 
(male/female), height by feet, height by inches and weight in pounds. Keep in 
mind that as you are entering the responses for every question, you will be saving 
each response to a variable, which will be used further in the program to calculate 
and display the output.
Upon answering all the questions, you will need to convert height by feet and 
height by inches to inches by using the following formula:
Inches = (height by feet * 12) + height by inches
When you get the inches, save that into a variable and then calculate BMI by 
using the following formula:
��� = ��� ∗
������ �� ������
�������
When you get the BMI, save it into a variable and then use conditional statements 
to determine the status of BMI according to the BMI chart attached below:
Category BMI range – kg/m2
Severe Thinness < 16
Moderate Thinness 16 – 17
Mild Thinness 17 – 18.5
Normal 18.5 – 25
Overweight 25 – 30
Obese Class I 30 – 35
Obese Class II 35 – 40
Obese Class III > 40
After determining the status of BMI, then output the name, age, gender, height 
by feet, height by inches, weight in pounds, BMI and its meaning and then quit 
the program. (Refer to EX to see how it should be outputted)
CMPS 367: Object Oriented Language C++ Fall 2023
EX:
//Ask the user questions
Please enter your name: _______________________
Please enter your age: _________________________
Please enter your Gender: ______________________
Please enter your height in feet: _________________
Please enter your height in inches: _______________
Please enter your weight in pounds: _____________
//Process the responses
Inches = (height by ft) * 12 + height by in
��� = 703 ∗
����ℎ�
���ℎ��"
//Output the following to console
Hi (name),
You are a (male/female). You are (age) years old. You are currently (height in 
feet)’(height in inches) and you currently weight (weight) pounds. Your BMI is 
(BMI), which is (meaning of BMI).
Thank you for using the BMI Calculator!
*/

#include <iostream>
#include <string>

/* RUN CMDS
    cd /project
    g++ -o problem3 problem3.cpp
    ./problem3
*/

int main(){

    std::string name,age, gender;
    float heightFt, heightIn, weight;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << "Please enter your Gender: ";
    std::cin >> gender;

    std::cout << "Please enter your height in feet: ";
    std::cin >> heightFt;

    std::cout << "Please enter your height in inches: ";
    std::cin >> heightIn;

    std::cout << "Please enter your weight in pounds: ";
    std::cin >> weight;

    float heightInches = (heightFt * 12) + heightIn;
    float bmi = 703 * (weight / (heightInches * heightInches));

    //based on the above bmi, determine the status of the bmi
    std::string bmiStatus = "";
    if (bmi < 16) {
        bmiStatus = "Severe Thinness";
    } else if (bmi >= 16 && bmi < 17) {
        bmiStatus = "Moderate Thinness";
    } else if (bmi >= 17 && bmi < 18.5) {
        bmiStatus = "Mild Thinness";
    } else if (bmi >= 18.5 && bmi < 25) {
        bmiStatus = "Normal";
    } else if (bmi >= 25 && bmi < 30) {
        bmiStatus = "Overweight";
    } else if (bmi >= 30 && bmi < 35) {
        bmiStatus = "Obese Class I";
    } else if (bmi >= 35 && bmi < 40) {
        bmiStatus = "Obese Class II";
    } else if (bmi >= 40) {
        bmiStatus = "Obese Class III";
    }

    std::cout << "Hi " << name << ",\n"; 
    std::cout << "You are a " << gender << ". You are "<< age << " years old. You are currently "<< heightFt << "’ " << heightIn;
    std::cout << " and you currently weight "<< weight << " pounds. Your BMI is "<<bmi <<", which is " << bmiStatus << ".\n";

    std::cout << "Thank you for using the BMI Calculator!\n";
    return 0;
}