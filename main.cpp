# VecPOS Skeleton

#include <iostream>

using namespace std;

class Server : Tables, Menu, Kitchen, Payment {

	char ServerID[100];
	char ServerPwd[100];
    
    // constructor
	bool ServerLogin(ServerID, ServerPwd){
		// encrypt password using encryption algorithms
		// check if the ID & password matches in the database where servers' authentication details are stored
		//return TRUE if login is authenticated, else FALSE
		return FALSE
	}

	char* TakeOrder(TableNo){ // faetch table number from Tables class
		//Fetch from Menu class and select the order
	}

	char* SendOrder() {
		// send to Kitchen
		cout<<"Order sent to Kitchen";
	}

};

class Manager : Server {
	
  
  private :
            Discounts off; 
            VecPOSHelp help;
            SalesAnalytics data;
};

class Menu : Kitchen {
	
};

class Kitchen : Menu, Manager {
	
};

class Tables : Manager {
	
};

class Payment : Discounts {
	
};

class Discounts : Payment {
	
};

class SalesAnalytics : Payment {
	
};

class VecPOSHelp {

};

int main() {
	// display menu options with login
	return 0;
}
