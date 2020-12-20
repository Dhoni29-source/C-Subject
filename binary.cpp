#include "std_lib_facilities.h"

int main()	// use binary input and output
{
	// cout << "Please enter input file name\n";
	// string iname;
	// cin >> iname;
	// ifstream ifs {iname,ios_base::binary};	// note: binary
	// if (!ifs) error("can't open input file ", iname);

	cout << "Please enter output file name\n";
	string oname;
	cin >> oname;
	ofstream ofs {oname,ios_base::binary};	// note: binary
	if (!ofs) error("can't open output file ", oname); 	

	// “binary” tells the stream not to try anything clever with the bytes

vector<int> v;

	// read from binary file:
	// for (int i; ifs.read(as_bytes(i),sizeof(int)); )	// note: reading bytes
	// 	v.push_back(i);	

	// … do something with v …

    // isi file nya
    for (int i=0;i<100;i++) v.push_back(i);
	
    // write to binary file:
	for(int i=0; i<v.size(); ++i)
		ofs.write(as_bytes(v[i]),sizeof(int));	// note: writing bytes
	return 0;
}

// For now, treat as_bytes() as a primitive
// Warning!  Beware transferring between different systems