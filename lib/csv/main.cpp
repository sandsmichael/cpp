#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

std::string readFileIntoString(const std::string &fp);

int main()
{
    
    std::cout << "Reading .csv file" << std::endl;

    string fp = "C:\\dev\\cpp\\lib\\csv\\mlb_teams_2012.csv";
    vector<vector<string>> content;
    vector<string> row;
    string line, item;

    fstream file(fp, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while (getline(str, item, ','))
                row.push_back(item);
            content.push_back(row);
        }
    }
    else
        cout << "Could not open the file\n";

    for (int i = 0; i < content.size(); i++)
    {
        for (int j = 0; j < content[i].size(); j++)
        {
            cout << content[i][j] << " ";
        }
        cout << "\n";
    }

    // cout << content[10][1] << endl;

    return 0;
}

