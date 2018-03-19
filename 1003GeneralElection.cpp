//1003GeneralElection.cpp
#include <iostream>
#include <vector>
#include <string>

//get the number of test that gonna be made.

//Pass de variables like output. Insede de function the variables,
//the 
inline void getVotesCandidate( int *candidateVotes[100], int regions, int candidates );
inline int countVotesCandidate( int *candidateVotes[100], int regions, int candidates );
inline int getWiner( int *totalVotes, int candidates );


int main(){

	int nTest = 0;
	std::cin >> nTest;

	int winers[100];
    int candidates = 0;
	int regions = 0;
	int *candidatesVotes[100];
	int totalVotes[1000];
	int MAXREGIONS = 0;
	int MAXREGIONS_VIEJO = 0;
	for(int i = 0; i < 100; i++)
    		candidatesVotes[i] = new int[5];
	
	for( int hh = 0; hh < nTest; ++hh ){
		
		std::cin >> candidates >> regions;
		if(regions > MAXREGIONS){
		    MAXREGIONS = regions;
		    for(int i = MAXREGIONS_VIEJO; i < regions; i++)
    		candidatesVotes[i] = new int[5];
		}
		getVotesCandidate( candidatesVotes, candidates, regions );
		
		for( int i = 0; i < candidates; i++ ){
			totalVotes[i] =  countVotesCandidate( candidatesVotes, regions, i );
		}

	
		winers[hh] = getWiner( totalVotes, candidates );
	}

	for( int i = 0; i < nTest; ++i){
		std::cout << winers[i] + 1 << "\n";
	}

	return 0;
}

void getVotesCandidate( int *votes[100], int candidates, int regions ){
	for ( int i = 0; i < regions; i++ ){
		for( int j = 0; j < candidates; j++ ){
		std::cin >> votes[i][j];
		}
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

