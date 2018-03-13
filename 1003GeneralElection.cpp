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
void printWiner( std::vector< int > totalVotes );

int main(){

	int nTest = getTest();

	int candidates = 0;
	int regions = 0;
	getCandidatesAndRegions( candidates, regions );
	std::vector< std::vector<int> > candidatesVotes(candidates, std::vector< int >(regions,0));

	getVotesCandidate( candidatesVotes, regions, candidates );
	

	std::vector<int> votes( candidates );
	for( int i = 0; i < regions; i++ ){
		votes[i] = countVotesCandidate( candidatesVotes, regions, candidates );
	}

	printWiner( votes );

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
	for ( int i = 0; i < candidates; i++ ){
		totalVotes = votes[i][regions] + totalVotes;
	}

	return totalVotes;
}

void printWiner( std::vector< int > totalVotes ){
	for( int i = 1; i < totalVotes.size() ; i++ ){
		if( totalVotes[i-1] > totalVotes[i] ){
			std::swap( totalVotes[i-1], totalVotes[i] );
		}
	}
}

