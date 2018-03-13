//1003GeneralElection.cpp
#include <iostream>

void getTest();
void getCandidatesAndRegions( int &candidates, int &regions );
void getVotesCandidate( std::vector< int > *candidateVotes );
int countVotes( std::vector< int > *candidateVotes );
void printWiner( int );


int main(){

	int nTest = getTest();

	int candidates = 0;
	int regions = 0;
	getCandidatesAndRegions();

	std::vector< std::vector<int> > candidatesVotes(candidates, std::vector< int >(regions));


	for( )
	getVotes(  );
	countVotes();
	printWiner();

	return 0;
}


void getTest(){
	int nTest
	std::cin >> nTest;
	return nTest; 
}

void getCandidatesAndRegions( int &candidates, int &regions ){
	std::cin >> candidates >> regions;

}

void getVotesCandidate( std::vector< int > *votes ){
	for ( int i = 0; i < ){
		std::cin >> votes[i];
	}
}

int countVotesCandidate( std::vector< int > *votes ){
	int totalVotes = 0;
	for ( int i = 0; i < votes.size(); i++ ){
		totalVotes += votes[i];
	}

	return totalVotes;
}

void printWiner( std::vector< int > *totalVotes ){
	for( int i = 1; i < totalVotes.size() ; i++ ){
		if( totalVotes[i-1] > totalVotes[i] ){
			std::swap( totalVotes[i-1], totalVotes[i] );
		}
	}
}
