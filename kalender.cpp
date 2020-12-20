#include "std_lib_facilities.h"

void day31(int);
void day30(int);
void day_feb_l(int);
void day_feb(int);
void month_year(int, int);
int startday (int, int);

int main (){

int month;
int year;
int start;

cout << "Please Enter the Month(1 for Jan, 2 for Feb etc) First: ";
cin >> month;
cout << "Please Enter the Year Now: ";
cin >> year;
cout << endl;

start=startday(month, year);
month_year (month, year);

if ((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12)){day31(start);}
else if ((month==4)||(month==6)||(month==9)||(month==11)){day30(start);}
else if ((month==2)&&(year%4==0)){day_feb_l(start);}
else if (month==2){day_feb(start);}
else {cout << "invalid entry for month.";}

	
	return 0;
}

void day31 (int first){
	if (first==1){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << " 1  2  3  4  5  6  7" << endl
		 << " 8  9 10 11 12 13 14" << endl
		 << "15 16 17 18 19 20 21" << endl
		 << "22 23 24 25 26 27 28" << endl
		 << "29 30 31" << endl;
	}
	if (first==2){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "    1  2  3  4  5  6" << endl
		 << " 7  8  9 10 11 12 13" << endl
		 << "14 15 16 17 18 19 20" << endl
		 << "21 22 23 24 25 26 27" << endl
		 << "28 29 30 31" << endl;
	}
	if (first==3){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "       1  2  3  4  5" << endl
		 << " 6  7  8  9 10 11 12" << endl
		 << "13 14 15 16 17 18 19" << endl
		 << "20 21 22 23 24 25 26" << endl
		 << "27 28 29 30 31" << endl;
	}
	if (first==4){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "          1  2  3  4" << endl
		 << " 5  6  7  8  9 10 11" << endl
		 << "12 13 14 15 16 17 18" << endl
		 << "19 20 21 22 23 24 25" << endl
		 << "26 27 28 29 30 31" << endl;
	}
	if (first==5){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "             1  2  3" << endl
		 << " 4  5  6  7  8  9 10" << endl
		 << "11 12 13 14 15 16 17" << endl
		 << "18 19 20 21 22 23 24" << endl
		 << "25 26 27 28 29 30 31" << endl;
	}
	if (first==6){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                1  2" << endl
		 << " 3  4  5  6  7  8  9" << endl
		 << "10 11 12 13 14 15 16" << endl
		 << "17 18 19 20 21 22 23" << endl
		 << "24 25 26 27 28 29 30" << endl
		 << "31" << endl;
	}
	if (first==7){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                   1" << endl
		 << " 2  3  4  5  6  7  8" << endl
		 << " 9 10 11 12 13 14 15" << endl
		 << "16 17 18 19 20 21 22" << endl
		 << "23 24 25 26 27 28 29" << endl
		 << "30 31" << endl;
	}
}

void day30 (int first){
	if (first==1){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << " 1  2  3  4  5  6  7" << endl
		 << " 8  9 10 11 12 13 14" << endl
		 << "15 16 17 18 19 20 21" << endl
		 << "22 23 24 25 26 27 28" << endl
		 << "29 30" << endl;
	}
	if (first==2){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "    1  2  3  4  5  6" << endl
		 << " 7  8  9 10 11 12 13" << endl
		 << "14 15 16 17 18 19 20" << endl
		 << "21 22 23 24 25 26 27" << endl
		 << "28 29 30" << endl;
	}
	if (first==3){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "       1  2  3  4  5" << endl
		 << " 6  7  8  9 10 11 12" << endl
		 << "13 14 15 16 17 18 19" << endl
		 << "20 21 22 23 24 25 26" << endl
		 << "27 28 29 30" << endl;
	}
	if (first==4){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "          1  2  3  4" << endl
		 << " 5  6  7  8  9 10 11" << endl
		 << "12 13 14 15 16 17 18" << endl
		 << "19 20 21 22 23 24 25" << endl
		 << "26 27 28 29 30" << endl;
	}
	if (first==5){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "             1  2  3" << endl
		 << " 4  5  6  7  8  9 10" << endl
		 << "11 12 13 14 15 16 17" << endl
		 << "18 19 20 21 22 23 24" << endl
		 << "25 26 27 28 29 30" << endl;
	}
	if (first==6){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                1  2" << endl
		 << " 3  4  5  6  7  8  9" << endl
		 << "10 11 12 13 14 15 16" << endl
		 << "17 18 19 20 21 22 23" << endl
		 << "24 25 26 27 28 29 30" << endl;
	}
	if (first==7){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                   1" << endl
		 << " 2  3  4  5  6  7  8" << endl
		 << " 9 10 11 12 13 14 15" << endl
		 << "16 17 18 19 20 21 22" << endl
		 << "23 24 25 26 27 28 29" << endl
		 << "30" << endl;
	}
}

void day_feb_l (int first){
	if (first==1){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << " 1  2  3  4  5  6  7" << endl
		 << " 8  9 10 11 12 13 14" << endl
		 << "15 16 17 18 19 20 21" << endl
		 << "22 23 24 25 26 27 28" << endl
		 << "29" << endl;
	}
	if (first==2){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "    1  2  3  4  5  6" << endl
		 << " 7  8  9 10 11 12 13" << endl
		 << "14 15 16 17 18 19 20" << endl
		 << "21 22 23 24 25 26 27" << endl
		 << "28 29" << endl;
	}
	if (first==3){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "       1  2  3  4  5" << endl
		 << " 6  7  8  9 10 11 12" << endl
		 << "13 14 15 16 17 18 19" << endl
		 << "20 21 22 23 24 25 26" << endl
		 << "27 28 29" << endl;
	}
	if (first==4){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "          1  2  3  4" << endl
		 << " 5  6  7  8  9 10 11" << endl
		 << "12 13 14 15 16 17 18" << endl
		 << "19 20 21 22 23 24 25" << endl
		 << "26 27 28 29" << endl;
	}
	if (first==5){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "             1  2  3" << endl
		 << " 4  5  6  7  8  9 10" << endl
		 << "11 12 13 14 15 16 17" << endl
		 << "18 19 20 21 22 23 24" << endl
		 << "25 26 27 28 29" << endl;
	}
	if (first==6){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                1  2" << endl
		 << " 3  4  5  6  7  8  9" << endl
		 << "10 11 12 13 14 15 16" << endl
		 << "17 18 19 20 21 22 23" << endl
		 << "24 25 26 27 28 29" << endl;
	}
	if (first==7){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                   1" << endl
		 << " 2  3  4  5  6  7  8" << endl
		 << " 9 10 11 12 13 14 15" << endl
		 << "16 17 18 19 20 21 22" << endl
		 << "23 24 25 26 27 28 29" << endl;
	}
}
void day_feb (int first){
	if (first==1){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << " 1  2  3  4  5  6  7" << endl
		 << " 8  9 10 11 12 13 14" << endl
		 << "15 16 17 18 19 20 21" << endl
		 << "22 23 24 25 26 27 28" << endl;
	}
	if (first==2){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "    1  2  3  4  5  6" << endl
		 << " 7  8  9 10 11 12 13" << endl
		 << "14 15 16 17 18 19 20" << endl
		 << "21 22 23 24 25 26 27" << endl
		 << "28" << endl;
	}
	if (first==3){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "       1  2  3  4  5" << endl
		 << " 6  7  8  9 10 11 12" << endl
		 << "13 14 15 16 17 18 19" << endl
		 << "20 21 22 23 24 25 26" << endl
		 << "27 28" << endl;
	}
	if (first==4){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "          1  2  3  4" << endl
		 << " 5  6  7  8  9 10 11" << endl
		 << "12 13 14 15 16 17 18" << endl
		 << "19 20 21 22 23 24 25" << endl
		 << "26 27 28" << endl;
	}
	if (first==5){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "             1  2  3" << endl
		 << " 4  5  6  7  8  9 10" << endl
		 << "11 12 13 14 15 16 17" << endl
		 << "18 19 20 21 22 23 24" << endl
		 << "25 26 27 28" << endl;
	}
	if (first==6){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                1  2" << endl
		 << " 3  4  5  6  7  8  9" << endl
		 << "10 11 12 13 14 15 16" << endl
		 << "17 18 19 20 21 22 23" << endl
		 << "24 25 26 27 28" << endl;
	}
	if (first==7){
	cout << "Su Mo Tu We Th Fr Sa" << endl
		 << "                   1" << endl
		 << " 2  3  4  5  6  7  8" << endl
		 << " 9 10 11 12 13 14 15" << endl
		 << "16 17 18 19 20 21 22" << endl
		 << "23 24 25 26 27 28" << endl;
	}
}
void month_year(int month, int year){
	if (month==1){
		cout << "January         ";
	}
	else if (month==2){
		cout << "February        ";
	}
	else if (month==3){
		cout << "March           ";
	}
	else if (month==4){
		cout << "April           ";
	}
	else if (month==5){
		cout << "May             ";
	}
	else if (month==6){
		cout << "June            ";
	}
	else if (month==7){
		cout << "July            ";
	}
	else if (month==8){
		cout << "August          ";
	}
	else if (month==9){
		cout << "September       ";
	}
	else if (month==10){
		cout << "October         ";
	}
	else if (month==11){
		cout << "November        ";
	}
	else if (month==12){
		cout << "December        ";
	}
	cout << year << endl;
}

int startday (int month, int year){
	int startyear=year;
	int century=(year/100);
	int decade=(year%100);
	if (year>=100){year=(year%100);}
	//This formula will calculate the first the month of a year falls. return 1-7 corresponds to Sun-Sat.
	year=year/4;
	year+=1;
	if (month==1){year+=1;}
	else if ((month==2)||(month==3)||(month==11)){year+=4;}
	else if (month==5){year+=2;}
	else if (month==6){year+=5;}
	else if (month==8){year+=3;}
	else if ((month==9)||(month==12)){year+=6;}
	else if (month==10){year+=1;}
	if (((month==1)||(month==2))&&(startyear%4==0)){year-=1;}
	if ((century+1)%4==1){year+=6;}
	else if ((century+1)%4==3){year+=2;}
	else if ((century+1)%4==2){year+=4;}
	year+=decade;
	year=year%7;
	return year;
	}