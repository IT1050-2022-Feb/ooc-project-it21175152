#include <iostream>
#include "backup.h"
using namespace std;

void Backup::setBackupDetails(int bid, string bDate, string bTime,
  string bFormat, string bStorage, string bLocation){
	backupId = bid;
	backupDate = bDate;
	backupTime = bTime;
	backupFormat = bFormat;
	backupStorage = bStorage;
	backupLocation = bLocation;
}

void Backup::getBackupDetails(){
	
	cout << "Backup Details:" << endl << endl;
	
	cout << "1. Backup ID: " << backupId << endl
	<< "2. Backup Date: " << backupDate << endl
	<< "3. Backup Time: " << backupTime << endl
	<< "4. Backup Format: " << backupFormat << endl
	<< "5. Backup Storage: " << backupStorage << endl
	<< "6. Backup Location: " << backupLocation << endl;
}
