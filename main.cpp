#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include <string>

using namespace std;

void dispalyRating(const list<int>& playerRating) {
  for(list<int>::const_iterator it = playerRating.begin(); it != playerRating.end(); it++) {
    cout << "player Rating : " << *it << endl;
  }
  
}

int main()
{
  list<int> allPlayers = {9, 7, 6, 3 , 8, 1, 2, 5, 9 , 4};

  list<int> beginners;
  list<int> pros;

  for(list<int>:: iterator it = allPlayers.begin(); it != allPlayers.end(); it++ ) {
    int rating = *it;
    if (rating >= 1 && rating <= 5) {
      beginners.push_back(rating);
    }
    else if (rating >= 6 && rating <= 10)
    {
      pros.push_back(rating);
    }
  }
    cout << "Beginner : " << endl;
    dispalyRating(beginners);
    cout << "Pros : " << endl;
    dispalyRating(pros);
  return 0;
}