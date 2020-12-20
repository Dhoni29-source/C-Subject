#include "token.cpp"

// Deklarasi umum (global)
const char number = '8';    // menggunakan angka "8" sbg jenis bilangan yg di input untuk di proses.
const char quit   = 'q';    // menggunakan huruf "q" untuk keluar dari program
const char print  = ';';    // tanda ; untuk melihat hasil kalkulasi
const string prompt  = "> "; // tanda ">" sbg tanda eksekusi di prompt (cmd)
const string result  = "= "; // tanda "=" menunjukan bahwa hasil perhitungan nya seperti itu. 

double expression();
double term();
double primary();

double expression(){
	double left = term();
	while(true) {
		Token t = ts.get();
		switch(t.kind){
			case '+': left += term(); break;
			case '-': left -= term(); break;
			default: ts.putback(t);
			 return left;
		 }
	 }
 }

double term() {
	 double left = primary();
	 while(true){
		 Token t = ts.get();
		 switch(t.kind){
		 case '*': left *= primary(); break;
		 case '/' :{
			 double d = primary();
			 if (d==0) error("divide by zero");
			 left /= d; break;
		 }
		 default:
		  ts.putback(t);
		  return left;
	  }
  }
}

double primary()
 {
	 Token t = ts.get();
	 switch(t.kind){
		 case '(':{
			 double d = expression();
			 Token t = ts.get();
			 if(t.kind != ')') error("')' expected");
			 return d;
		 }
		 case '8' :
		  return t.value;
		 default:
		  error("primary expected");
		  return 1; 
	  }
  }


int calculate()
{
    while (cin) {
        cout << prompt;
        Token t = ts.get();
        while (t.kind == print) t=ts.get(); // 
        if (t.kind == quit) return 0; // fungsi quit (keluar)
        ts.putback(t);
        cout << result << expression() << '\n';
    }
}

// Variasi program untuk identitas diri
int main(){
    cout << "Program Kalkulator sederhana" << endl;
	cout << "Nama  : Dhoni Ikhsan Widodo" << endl;
	cout << "NIM   : 11180970000024" << endl;
	cout << "Kelas : Fisika Instrumentasi 2018" << endl;
	cout << "\nNote :" << endl;
	cout << "Untuk melihat hasil, sertakan ; lalu tekan enter" << endl;
    cout << "Untuk keluar dari program, ketik q lalu enter" << endl;
	cout << "\nYou can try now: !" << endl;
    while(cin){
		cout << "> "; 
		Token t = ts.get(); // memanggil kembali tokennya
		while (t.kind == ';') t = ts.get(); 
		if(t.kind == 'q') break; // ketik huruf q untuk keluar program 
		ts. putback(t); // balik ke awal proses setelah menekan enter
        cout << "= " << expression() << '\n';//
        calculate(); //fungsi untuk proses perhitungan nya
        return 0;
	 }
}



