#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <logfile> <YYYY-MM-DD>" << endl;
        return 1;
    }

    string log_file = argv[1];
    string date = argv[2];

    ifstream infile(log_file);
    if (!infile) {
        cerr << "Error: Could not open log file." << endl;
        return 1;
    }

    string output_file = "output_" + date + ".txt";
    ofstream outfile(output_file);
    if (!outfile) {
        cerr << "Error: Could not create output file." << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {
        if (line.rfind(date, 0) == 0) { 
            outfile << line << '\n';
        }
    }

    cout << "Logs for " << date << " saved in " << output_file << endl;
    return 0;
}