//1003GeneralElection.cpp
#include <iostream>
#include <vector>
#include <string>

//get the number of test that gonna be made.
int getTest();

//Pass de variables like output. Insede de function the variables,
//the 
void getCandidatesAndRegions( int &candidate, int &region );
void getVotesCandidate( std::vector< std::vector<int> > candidateVotes, int regions, int candidates );
int countVotesCandidate( std::vector< std::vector<int> > candidateVotes, int regions, int candidates );
void printWiner( std::vector< int > totalVotes, int candidates );

int main(){

	int nTest = getTest();

	int candidates = 0;
	int regions = 0;
	getCandidatesAndRegions( candidates, regions );
	std::vector< std::vector<int> > candidatesVotes(candidates, std::vector< int >(regions,0));

	getVotesCandidate( candidatesVotes, regions, candidates );
	

	std::vector<int> totalVotes{0};
	for( int i = 0; i < candidates; i++ ){
		totalVotes[i] =  countVotesCandidate( candidatesVotes, regions, i );
	}

	printWiner( totalVotes, candidates );

	return 0;
}


int getTest(){
	int nTest;
	std::cin >> nTest;
	return nTest; 
}

void getCandidatesAndRegions( int &candidate, int &region ){
	std::cin >> candidate >> region;

}

void getVotesCandidate( std::vector< std::vector<int> > votes, int candidates, int regions ){
	for ( int i = 0; i < candidates; i++ ){
		for( int j = 0; j < regions; j++ )
		std::cin >> votes[i][j];
	}
}

int countVotesCandidate( std::vector< std::vector<int> > votes, int regions, int candidates ){
	int totalVotes = 0;
	for ( int i = 0; i < regions; i++ ){
		totalVotes = votes[candidates][i] + totalVotes;
	}

	return totalVotes;
}

void printWiner( std::vector< int > totalVotes, int candidates ){
	int winer = 0;
	int winerVotes = 0;
	for( int i = 1; i < candidates ; i++ ){
		if( totalVotes[i] > winerVotes ){
			winer = i;
			winerVotes = totalVotes[i];
		}

	}

	std::cout << winer << std::endl;
}

