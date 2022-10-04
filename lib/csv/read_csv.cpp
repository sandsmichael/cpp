#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


vector<vector<string>> read( string fp );

void summary(vector<vector<string>> content);


int main(){

    string fp = "C:\\dev\\cpp\\lib\\csv\\data\\mlb_teams_2012.csv";

    vector<vector<string>> content;
    
    content = read( fp );

    summary( content );

}


vector<vector<string>> read( string fp )

    {

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

    
    // print to console
    for (int i =0; i < content.size(); i++) // rows of content
    {

        for (int j = 0; j < content[i].size(); j++)  // columns of row
        {
            cout << content[i][j] << " ";
        }
        cout << "\n";

    }

    return content;

}


void summary(vector<vector<string>> content)
{
    
    // calculate
    int avgPayroll = 0;
    int payrollSum = 0;
    int nTeams = 0;
    vector<int> costPerWin;
    int winSum = 0;

    for (int i =0; i < content.size(); i++)
    {
        for (int j =0; j < content[i].size(); j++)
        {
            if (i > 0 && j == 1)
            {
                payrollSum = payrollSum + stof(content[i][j]);

                costPerWin.push_back( stod(content[i][1]) / stod(content[i][2]) );
            }

            if (i > 0 && j == 2)
            {
                winSum = winSum + (stof(content[i][2]));

            }
            
        }

        if ( i > 0)
        {
            nTeams = nTeams + 1;
        }

    }

    cout << "-----------------------------" << endl;

    cout << "Payroll Sum" << endl;

    cout << to_string(payrollSum) << endl;

    cout << "Number of Teams" << endl;

    cout << to_string(nTeams) << endl;

    cout << "Average Payroll" << endl;

    avgPayroll = payrollSum / nTeams;

    cout << avgPayroll << endl;

    cout << "Payroll Per Win" << endl;

    for (int i =0; i < costPerWin.size(); i++){
        cout << costPerWin[i] << endl;
    }


}


