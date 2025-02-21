#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average." << std::endl;
        return 0;
    }
    
    vector<double> numbers;
    for (int i = 1; i < argc; ++i) {
        numbers.push_back(std::atof(argv[i]));
    }
    
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    
    double average = sum / numbers.size();
    
    cout << "---------------------------------" << std::endl;
    cout << "Average of " << numbers.size() << " " 
              << (numbers.size() == 1 ? "numbers" : "numbers") << " = "
              << average << std::endl;
    cout << "---------------------------------" << std::endl;
    
    return 0;
}
