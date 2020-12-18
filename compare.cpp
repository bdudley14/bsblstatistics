// Compare Two Baseball Players
// On the basis of AVG, RBI, OBP,

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
// Section to initialize all nessecary variables and begin user interaction

  cout << "We are going to compare your two favorite players!" << endl;
  string playera;
  string playerb;
  cout << "What is the name of the first player? " << endl;
  getline(cin, playera);
  cout << "What is the name of the second player? " << endl;
  getline(cin, playerb);
  cout << endl << endl;
  double aslugging;
  int ahits;
  int asingles;
  int adoubles;
  int atriples;
  int ahrs;
  int aabs;
  int atotalbases;
  double bslugging;
  int bhits;
  int bsingles;
  int bdoubles;
  int btriples;
  int bhrs;
  int babs;
  int btotalbases;
  
  // Player A Slugging Pct
  
  cout << "We will now determine the slugging percentage of your first player to better assess him." << endl << endl;
  cout << "How many total hits does " << playera << " have? " << endl;
  cin >> ahits;
  cout << "How many doubles does " << playera << " have? " << endl;
  cin >> adoubles;
  cout << "How many triples does " << playera << " have? " << endl;
  cin >> atriples;
  cout << "How many home runs does " << playera << " have? " << endl;
  cin >> ahrs;
  cout << "How many at bats does " << playera << " have? " << endl;
  cin >> aabs;
  asingles = ahits - adoubles - atriples - ahrs;
  adoubles = adoubles * 2;
  atriples = atriples * 3;
  ahrs = ahrs * 4;
  atotalbases = adoubles + atriples + ahrs + asingles;
  aslugging = static_cast<double>(atotalbases) / aabs;
  cout << endl << playera + "'s slugging percentage is: " << aslugging << endl << endl << endl;
  
  // Player B Slugging Pct
  
  cout << "Now to do the same for your second player" <<  endl << endl;
  cout << "How many total hits does " << playerb << " have?" << endl;
  cin >> bhits;
  cout << "How many doubles does " << playerb << " have?" << endl;
  cin >> bdoubles;
  cout << "How many triples does " << playerb << " have?" << endl;
  cin >> btriples;
  cout << "How many home runs does " << playerb << " have?" << endl;
  cin >> bhrs;
  cout << "How many at bats does " << playerb << " have?" << endl;
  cin >> babs;
  bsingles = bhits - bdoubles - btriples - bhrs;
  bdoubles = bdoubles * 2;
  btriples = btriples * 3;
  bhrs = bhrs *4;
  btotalbases = bsingles + bdoubles + btriples + bhrs;
  bslugging = static_cast<double>(btotalbases) / babs;
  cout << endl << playerb + "'s slugging percentage is: " << bslugging << endl << endl << endl;
  
  // Compare the two player's slugging %s
  
  if(aslugging > bslugging) {
    cout << playera + "'s slugging percentage of " << aslugging << " is the highest out of the two." << endl;
    double abdiff;
    if (aabs > babs) {
      abdiff = aabs - babs;
      cout << "Keep in mind, " << playera << " has " << abdiff << " more at bats than " << playerb << endl;
    }
    if (babs > aabs) {
      abdiff = babs - aabs;
      cout << "Keep in mind, " << playera << " has " << abdiff << " less at bats than " << playerb << endl;
    }
  }
  if(bslugging > aslugging) {
    cout << playerb + "'s slugging percentage of " << bslugging << " is the highest out of the two." << endl;
    double abdiff;
    if(babs > aabs){
      abdiff = babs - aabs;
      cout << "Keep in mind, " << playerb << " has " << abdiff << " more at bats than " << playera << endl;
    }
    if(aabs > babs) {
      abdiff = aabs- babs;
      cout << "Keep in mind, " << playerb << " has " << abdiff << " less at bats than " << playera << endl;
    }
  }
  cout << endl;
  
  // Compute the player's batting average
  double aavg;
  double bavg;
  aavg = static_cast<double>(ahits) / aabs;
  bavg = static_cast<double>(bhits) / babs;
  
  // Compute the player's isolated power
  double aisopower;
  double bisopower;
  aisopower = aslugging - aavg;
  bisopower = bslugging - bavg;
  cout << playera << "'s isolated power (ISO) is: " << aisopower << endl;
  cout << playerb << "'s isolated power (ISO) is: " << bisopower << endl;
  cout << endl << endl; 
}
