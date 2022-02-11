



#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

void taks1(int arr[]);
int main()
{
    const int MAX_NAMES = 50000;
    int* years = new int[MAX_NAMES];
    string* names = new string[MAX_NAMES];
    string* genders = new string[MAX_NAMES];
    int* counts = new int[MAX_NAMES];
    size_t commaLoc;
    int numNames =0;
    string fileLine;
    
    //task1(years);
    delete[] years;
    delete[] names;
    delete[] genders;
    delete[] counts;
    
    ifstream inFile("/Users/upenbhava/Documents/Sem_1/PC/Assignments/Project2_Upendra_Machunuru/Project2_Upendra_Machunuru/baby_names_2014-2018.csv");
    ofstream outFile("/Users/upenbhava/Documents/Sem_1/PC/Assignments/Project2_Upendra_Machunuru/Project2_Upendra_Machunuru/baby_name_analysis.txt");
    //file_line = "2018,F,LIA,1300";
    if (!inFile)
    {
        cout << "\nCould not open file.";
        return 1;
    }
    getline(inFile,fileLine);
    while(getline(inFile,fileLine))
    {
        
        commaLoc =fileLine.find(",");
        //cout<< fileLine;
        //cout<< commaLoc;
        //cout<< fileLine.substr(0,commaLoc) << endl;
        years[numNames] = stoi(fileLine.substr(0,commaLoc));
        
        /*fileLine = fileLine.substr(commaLoc + 1);
        commaLoc = fileLine.find(",");
        years[numNames] = stoi(fileLine.substr(0,commaLoc));*/
        
        fileLine = fileLine.substr(commaLoc + 1);
        commaLoc = fileLine.find(",");
        genders[numNames] = fileLine.substr(0,commaLoc);
        
        fileLine = fileLine.substr(commaLoc + 1);
        commaLoc =fileLine.find(",");
        names[numNames] = fileLine.substr(0,commaLoc);
        
        fileLine = fileLine.substr(commaLoc + 1);
        //commaLoc =file_line.find(",");
        counts[numNames] = stoi(fileLine.substr(0,commaLoc));
        //inFile.ignore();
        
        //cout<< years[numNames]<< endl;
       /* cout<< genders[numNames]<< endl;
        cout<< names[numNames]<< endl;
        cout<< counts[numNames]<< endl;*/
        
        
       
                //outFile.write("Hello");
        outFile << setw(7)<< right << years[numNames] << setw(4)<< right << genders[numNames] + "  "<< setw(24)<< left << names[numNames] << setw(9)<< right << counts[numNames]<< endl;
        numNames++;
        

    }
    
    int a[numNames];
    int m[numNames];
    int F[numNames];
    int k =0;
    int j =0;
    
    for (int i = 0; i <= numNames; i++)
    {
        auto itr = std::find_if(a, numNames, years[i]);
        if (itr != std::end(a)){
            j = itr;
        }
        else{
            a[k]= years[i];
            j = k;
            m[j]=0;
            F[j]= 0;
        }
        if(genders[i] == "M"){
            m[j] = m[j]+1;
        }
        else{
            F[j]=F[j]+1;
        }
    }
    cout<< F;
    outFile.close();
    
    return(0);
}

