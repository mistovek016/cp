#include <iostream>

class Identity {
    public:
        std::string name;
        std::string dob;
        bool female;
        long govId;

        void description() {
            std::cout << "Name: " << name << "\nD.O.B: " << dob << "\nGender: " << (female ? "Female" : "Male") << "\nGov. ID: " << govId << "\n\n";
        }

    Identity(std::string name, std::string dob, long govID, bool femaleOrNot) {
        // name = "lmao";
        this->name = name;
        // class = local;
        this->dob = dob;
        govId = govID;
        female = femaleOrNot;
    }
};

int main() {
    Identity person1("Aryaman", "26/08/09", 132109, false);
    person1.description();
}
