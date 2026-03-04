#include <iostream> 

using namespace std;

class car{
    private:
        string brand{"Volkswagen"};
        string model="Polo";
        int year {2012};
        
    public:
        car(){ // Default constructor
        }
        car(string b, string m, int y){ // Parameterized Constructor
            brand = b; model = m; year = y;
        }
        car(const car & other){ // Copy Constructor
            brand = other.brand; model = other.model; year = other.year;}
        
        void startEngine(){
        cout<< "start engine" << "{brand:" << brand << "|model:"<< model << "}" << endl;
        }
    
};