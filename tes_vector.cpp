#include <initializer_list>
#include <algorithm>
#include <iostream>

// using namespace std;

class vector {
    int sz; // the size
    double* elem; // pointer to elements    
public:
    vector& operator=(const vector& a); // copy assignment: define copy 
    vector(const vector&) ;
    explicit vector(int s);
    vector(std::initializer_list<double> lst); // constructor
    // new allocates memory
    ~vector() { delete[ ] elem; } // destructor
    // delete[] deallocates memory
    double get(int n) { return elem[n]; } // access: read
    void set(int n, double v) { elem[n]=v; }// access: write
    int size() const { return sz; } // the number of elements
    void push_back(double);
    vector(vector&&); // move constructor: “steal” the elements
    vector& operator=(vector&&); // move assignment: destroy target and “steal” the elements
};


vector::vector(int s): sz{s}, elem{new double[s]}{
    for (int i=0; i<sz; ++i) elem [i]=0;
}

vector::vector(std::initializer_list<double> lst):sz{lst.size()}, elem{new double}{
    std::copy(lst.begin(),lst.end(),elem);
}

// Push_back function yg dibikin sendiri sesuai keadaan, namun masih ada kelemahan
// Ganti pusback nya dgn yg benar
void vector::push_back(double a){
    if (elem[0] == 0) elem[0] == a;
    else {
        int index = 1;
        for (int i=0;i<sz; i++) {
            if (elem[1] == 0) {
                elem[1] == a;
                break;
            }
        }
    }
}

// Move consider
vector fill(std::istream& is)
{
    vector res(10);
    for (double x; is>>x; ) res.push_back(x);
    return res; // returning a copy of res could be expensive
    // returning a copy of res would be silly!
}

// copy constructor
vector::vector(const vector& a)
:sz{a.sz}, elem{new double[a.sz]}
// allocate space for elements, then initialize them (by copying)
{
    for (int i = 0; i<sz; ++i) elem[i] = a.elem[i];
}

// Copy assignment
vector& vector::operator=(const vector& a)
{
    double* p = new double[a.sz]; // allocate new space
    for (int i = 0; i<a.sz; ++i) p[i] = a.elem[i]; // copy elements
    delete[ ] elem; // deallocate old space
    sz = a.sz;      // set new size
    elem = p;       // set new elements
    return *this;   // return a self-reference
                    // The this pointer is explained in Lecture 19
                    // and in 17.10
}

// Copy with assignmnet
// void f(int n)
// {
//     vector v1 {6,24,42};
//     vector v2(4);
//     v2 = v1; // assignment
// }

// Move implementation
vector::vector(vector&& a) // move constructor
 :sz{a.sz}, elem{a.elem} // copy a’s elem and sz
{
    a.sz = 0; // make a the empty vector
    a.elem = nullptr;
}

// Move implementation
vector& vector::operator=(vector&& a) // move assignment
{
    delete[] elem; // deallocate old space
    elem = a.elem; // copy a’s elem and sz
    sz = a.sz;
    a.elem = nullptr; // make a the empty vector
    a.sz = 0;
    return *this; // return a self-reference (see §17.10)
}


// int main()	// use binary input and output
// {
// 	cout << "Please enter input file name\n";
// 	string iname;
// 	cin >> iname;
// 	ifstream ifs {iname,ios_base::binary};	// note: binary
// 	if (!ifs) error("can't open input file ", iname);

// 	// cout << "Please enter output file name\n";
// 	// string oname;
// 	// cin >> oname;
// 	// ofstream ofs {oname,ios_base::binary};	// note: binary
// 	// if (!ofs) error("can't open output file ", oname); 	

// 	// “binary” tells the stream not to try anything clever with the bytes

// vector v(10);

// 	// read from binary file:
// 	for (int i; ifs.read(as_bytes(i),sizeof(int)); )	// note: reading bytes
// 		v.push_back(i);	

//     // isi file nya
//     // for (int i=0;i<100;i++) v.push_back(i);
	
//     // write to binary file:
// 	// for(int i=0; i<v.size(); ++i)
// 	// 	ofs.write(as_bytes(v[i]),sizeof(int));	// note: writing bytes
// 	// return 0;
// }


// int main(){
//     vector v1(20);
//     vector v2{1,2,3,4,5};
//     for(int i=0; i<v2.size(); i++) std::cout<<v2.get(i);
// }


int main(){
    std::cout <<"Please enter input file name";
    std::string iname;
    std::cin >> iname;
    std::ifstream ifs {iname,ios_base::binary};
    if (!ifs) error("can not open input file", iname);

vector v(10);
    for (int i=0; i<v.size(); ++i)
        ofs.write(as_bytes(v[i]),sizeof(int));
    return 0;

}

