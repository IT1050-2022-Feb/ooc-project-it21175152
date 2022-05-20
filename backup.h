#include <iostream>
#include <string>
using namespace std;

class Backup{
	private:
		int backupId;
		string backupDate;
		string backupTime;
		string backupFormat;
		string backupStorage;
		string backupLocation;
		
	public:
		void setBackupDetails(int bid, string bDate, string bTime,
		string bFormat, string bStorage, string bLocation);
		void getBackupDetails();
};
