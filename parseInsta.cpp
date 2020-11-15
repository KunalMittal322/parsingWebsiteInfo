#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>


using namespace std;

int main(int argc, char *argv[]) {
  string inputFile;
  string outputFile="listUsernames.txt";
  inputFile = argv[1];
  ifstream inputFileFS;
  string checkWord;  
  vector<string> userNameList;


  inputFileFS.open(inputFile);
  while(inputFileFS >> checkWord){
	  if(checkWord.at(checkWord.size()-2)=="\'"){
      userNameList.push_back(checkWord))
    }
  }

  ofstream outputFileFS;
  outputFileFS.open(outputFile);
  for(int i=0; i < userNameList.size();++i){
    outputFileFS << userNameList.at(i) << "\n";
  }
  return 1;
}
