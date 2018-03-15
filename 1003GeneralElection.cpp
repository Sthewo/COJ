//1003GeneralElection.cpp
#include <iostream>
#include <vector>
#include <string>

//get the number of test that gonna be made.
int getTest();

//Pass de variables like output. Insede de function the variables,
//the 
void getCandidatesAndRegions( int &candidate, int &region );
void getVotesCandidate( int *candidateVotes[100], int regions, int candidates );
int countVotesCandidate( int *candidateVotes[100], int regions, int candidates );
int getWiner( int *totalVotes, int candidates );


int main(){

	int nTest = getTest();
	int winers[100];

	for( int j = 0; j < nTest; ++j ){
		int candidates = 0;
		int regions = 0;
		getCandidatesAndRegions( candidates, regions );
		int *candidatesVotes[100];
		for(int i = 0; i < 100; i++)
    		candidatesVotes[i] = new int[5];		

		getVotesCandidate( candidatesVotes, regions, candidates );
		

		int totalVotes[1000];
		for( int i = 0; i < candidates; i++ ){
			totalVotes[i] =  countVotesCandidate( candidatesVotes, regions, i );
		}

	
		winers[j] = getWiner( totalVotes, candidates );
	}

	for( int i = 0; i < nTest; ++i){
		std::cout << winers[i] + 1 << "\n";
	}

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

void getVotesCandidate( int *votes[100], int candidates, int regions ){
	for ( int i = 0; i < regions; i++ ){
		for( int j = 0; j < candidates; j++ )
		std::cin >> votes[i][j];
	}
}

int countVotesCandidate( int *votes[100], int regions, int candidates ){
	int totalVotes = 0;
	for ( int i = 0; i < regions; i++ ){
		totalVotes = votes[i][candidates] + totalVotes;
	}

	return totalVotes;
}

int getWiner( int *totalVotes, int candidates ){
	int winer = 10;
	int winerVotes = 0;
	for( int i = 0; i < candidates ; i++ ){
		if( totalVotes[i] > winerVotes ){
			winer = i;
			winerVotes = totalVotes[i];
		}
	}

	return winer;
}

