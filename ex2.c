#include <stdio.h>

int main () {
char* gregorianMonths[12] ={ "January", "February", "March", "April ","May", "June", "July","August","September", "October", "November","December"};



char* HijriMonth[12]= {"Muharrm ","Safar","Rabi' al-Awwal","Rabi' al-THani","Jumada al-Ula","Jumadaal-Thani","Rajab","Sja'ban","Ramadan","Shawwal","Dhu al-Qidah","Dhu al-Hijjah" };

int i; 
for (i=0; i < 12; i++) {
	printf("%s\t\t%s\n", gregorianMonths[i],HijriMonth[i]);


}
return 0;
}

