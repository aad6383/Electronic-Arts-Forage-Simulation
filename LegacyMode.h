
#ifndef LEGACY_MODE_H
#define LEGACY_MODE_H

#include <string>
#include <vector>

class Player {
private:
    std::string name;
    std::string position;
    int skillLevel;
    int year;
    int morale;

public:
    void train();
    void playGame();
    void graduate();
};

class Recruit {
private:
    std::string name;
    std::string position;
    int potentialRating;
    int interestLevel;
    bool committed;

public:
    void updateInterest();
    void commitToTeam();
};

class Staff {
private:
    std::string name;
    std::string role;
    int skillRating;
    int loyalty;

public:
    void influenceRecruiting();
    void resign();
    void bePromoted();
};

class Playbook {
private:
    std::string strategyType;
    std::vector<std::string> playList;

public:
    void addPlay(const std::string& play);
    void removePlay(const std::string& play);
    void savePlaybook();
};

class TrainingProgram {
private:
    std::string focusArea;
    int intensityLevel;
    int duration;

public:
    void applyToPlayer(Player& player);
    void adjustMorale(Player& player);
    void increaseSkill(Player& player);
};

class Facility {
private:
    std::string type;
    int upgradeLevel;
    int cost;

public:
    void upgradeFacility();
    int calculateBonus();
};

class Game {
private:
    std::string opponent;
    int score;
    std::string result;
    std::string performanceMetrics;

public:
    void simulateGame();
    void updateReputation();
};

class Season {
private:
    int year;
    std::vector<Game> games;
    int currentWeek;

public:
    void advanceWeek();
    void evaluateProgress();
    void generateJobOffers();
};

class JobOffer {
private:
    std::string team;
    int salary;
    std::string expectations;

public:
    void acceptOffer();
    void declineOffer();
};

class Team {
private:
    std::string name;
    int prestigeLevel;
    std::vector<Player> roster;
    std::vector<Staff> staffList;
    Playbook playbook;

public:
    void recruitPlayers();
    void evaluateSeason();
    void scheduleGames();
};

class Coach {
private:
    std::string name;
    int age;
    int experienceLevel;
    int reputationScore;
    std::string currentPosition;

public:
    void applyForPromotion();
    void updateReputation();
    void assignTraining(TrainingProgram& training, Player& player);
};

#endif // LEGACY_MODE_H
