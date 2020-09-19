/*
Nama    : Delanika Olympiani
NPM     : 140810180026
Kelas   : B
Deskripsi : Encrypt Decrypt Shift Cipher
*/

#include <iostream> 
using namespace std; 

string enkripsi(string text, int k) { 
	string result = ""; 

	for (int i=0;i<text.length();i++) {  
		if (isupper(text[i])) 
			result += char(int(text[i]+k-65)%26 +65); 
		else
			result += char(int(text[i]+k-97)%26 +97); 
	} 

	return result; 
} 

string dekripsi(string text, int k){
	string result = "";

	for(int i=0; i<text.length(); i++){
		if(isupper(text[i]))
			result += char(int(text[i]-k-65)%26 +65);
		else
			result += char(int(text[i]-k-97)%26 +97);
	}
	
	return result;
}

int main() { 
	string text;
	int k, pil;
	cout << "====CAESAR CIPHER====" << endl;
	cout << "1. Enkripsi\n2. Dekripsi\n3. Enkripsi & Dekripsi" << endl;
	cout << "Pilihan: "; cin >> pil;
	if(pil==1){
		cout << "Text: "; cin >> text; 
		cout << "Shift: "; cin >> k; 
		cout << "Cipher: " << enkripsi(text, k) << endl;
	}
	else if(pil==2){
		cout << "Text: "; cin >> text; 
		cout << "Shift: "; cin >> k;
		cout << "Plain: " << dekripsi(text, k) << endl;
	}
	else if(pil==3){
		cout << "Text: "; cin >> text; 
		cout << "Shift: "; cin >> k; 
		text = enkripsi(text, k);
		cout << "Cipher: " << text << endl;
		cout << "Plain: " << dekripsi(text, k) << endl;
	}
	else{
		cout << "Pilihan error!" << endl;
		return 0; 
	}
} 
