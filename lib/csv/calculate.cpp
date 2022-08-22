#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
    {
    string fp = "C:\\dev\\cpp\\lib\\csv\\mlb_teams_2012.csv";

    vector<vector<string>> content; // vector of string vectors
    vector<string> row;             // vector of strings
    string line, item;

    fstream file(fp, ios::in);

    if (file.is_open())
    {
        while (getline(file, line))  // iterate through lines of the file
        {
            row.clear();

            stringstream str(line); 

            while (getline(str, item, ',')) // iterate through string objects of the line
                row.push_back(item);        
            content.push_back(row);
        }
    }
    else 
        cout << "Could not open the file\n";

    
    for (int i =0; i < content.size(); i++) // rows of content
    {

        for (int j = 0; j < content[i].size(); j++)  // columns of row
        {
            cout << content[i][j] << " ";
        }
        cout << "\n";

    }


    int avgPayroll = 0;
    int payrollSum = 0;
    int nTeams = 0;

    for (int i =0; i < content.size(); i++)
    {
        for (int j =0; j < content[i].size(); j++)
        {
            if (i > 0 && j == 1)
            {
                payrollSum = payrollSum + stof(content[i][j]);
            }
            
        }

        if ( i > 0)
        {
            nTeams = nTeams + 1;
        }


    }
    

    cout << to_string(payrollSum) << endl;
    cout << to_string(nTeams) << endl;

    avgPayroll = payrollSum / nTeams;
    cout << avgPayroll << endl;


}