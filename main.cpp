#include <iostream>
#include <string>
#include <random>
#include <limits>
#include <thread>
#include <chrono>

int generateID(){
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(100000,999999);
    return dist(gen);
}

int main(){

    int personIdNumber{};
    std::string personName;
    double personPowerLevel{};
    std::string personSkillName;
    int registrationStatus{};

    std::cout << "\n\n Welcome to the Adventurer's Guild ! \n";
    std::cout << "==================================== \n\n";
    std::cout << "Great day adventurer! What would you like to do today? \n";
    std::cout << " 1. Register to Guild\n";
    std::cout << " 2. Check Advailable quests\n";
    std::cout << " 3. Check Adventurer Rank\n";
    std::cout << " 4. Guild Leaderboard\n";
    std::cout << "Select an option: ";
    std::cin >> registrationStatus;

    switch(registrationStatus){
        case 1:
            std::cout << "\nPlease fill out our Registration Form\n";
            std::cout << "----------Registration Form----------\n";
            std::cout << "======================================\n";

            std::cout << "... Generating ID Number ..." << std::flush;
            std::this_thread::sleep_for(std::chrono::seconds(1)); 

            std::cout << "\n" << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));

            personIdNumber = generateID();
            std::cout << "Your Guild ID is: [" << personIdNumber << "]\n";
            std::cout << "Welcome Aboard, " << personIdNumber << ". Now please continue to register to our Guild.\n";

            std::cout << "Enter your full name: ";
            std::getline(std::cin >> std::ws, personName);
            
            std::cout << "Power Level: ";
            std::cin >> personPowerLevel;
            std::cin.ignore();

            std::cout << "Skill: ";            
            std::getline(std::cin >> std::ws, personSkillName);

            std::cout << "Getting full info ..." << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            std::cout << "\n" << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(750));
            std::cout << "Registration Done!\n";
            std::cout << "Welcome aboard, Adventurer " << personName << "!\n"; 
            std::cout << "ID: " << personIdNumber << "\n";
            std::cout << "Skill: " << personSkillName << "\n";
            std::cout << "Power Level: " << personPowerLevel << "\n";

            break;
    }
    
    return 0;
}


void guildRegister(){
    std::cout << " Registration Form \n";
    std::cout << "====================\n";
    std::cout << " Guild ID Number: \n";
}
