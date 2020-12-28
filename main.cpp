#include <iostream>
#include <windows.h>

/* change this to your language settings */
std::string lang1 = "pl-pl" ;
std::string lang2 = "pl" ;

bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string adres ;
	
	if( argc > 1) {
	   adres = argv[1];
        }
	std::string test;
	std::string appdata = getenv("APPDATA");
	replace(appdata,"Roaming","");	
	appdata+="Local\\Ubisoft\\The Settlers Online\\The Settlers Online.exe" ; 
        //std::cout << argv[1] << std::endl;
        replace(adres,"de-de",lang1);
        replace(adres,"realmLang=de","realmLang="+lang2);
    
    
        //std::cout << adres << std::endl;
        //std::cin >> test ;
	const char * adres_c = adres.c_str();
	const char * appdata_c = appdata.c_str(); 
        ShellExecute(NULL, "open", appdata_c, adres_c, NULL, SW_SHOWDEFAULT);
        return 0;
}
