#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
using namespace std;


vector<int> gesetzte_punkte(char c, int row)
{

	vector<int> gp;

	switch (toupper(c))
	{
	case 'A':
		if (row == 0) {

			gp.push_back(1);

		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 2) {

			gp.push_back(1);
			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(2);

		}

		break;

	case 'B':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(0);

		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 2) {

			gp.push_back(1);
			gp.push_back(0);


		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(1);

		}

		break;

	case 'C':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(2);

		}

		if (row == 1) {

			gp.push_back(0);


		}

		if (row == 2) {


			gp.push_back(0);


		}

		if (row == 3) {

			gp.push_back(0);


		}

		if (row == 4) {

			gp.push_back(2);
			gp.push_back(1);

		}

		break;


	case 'D':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(0);

		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 2) {

			gp.push_back(2);
			gp.push_back(0);


		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(1);

		}

		break;

	case 'E':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 1) {

			gp.push_back(0);


		}

		if (row == 2) {

			gp.push_back(1);
			gp.push_back(0);


		}

		if (row == 3) {

			gp.push_back(0);


		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(1);
			gp.push_back(2);

		}

		break;



	case 'F':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 1) {

			gp.push_back(0);


		}

		if (row == 2) {

			gp.push_back(1);
			gp.push_back(0);


		}

		if (row == 3) {

			gp.push_back(0);


		}

		if (row == 4) {

			gp.push_back(0);


		}

		break;

	case 'G':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(2);


		}

		if (row == 1) {

			gp.push_back(0);


		}

		if (row == 2) {

			gp.push_back(2);
			gp.push_back(0);


		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(2);
			gp.push_back(1);


		}

		break;



	case 'H':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 2) {

			gp.push_back(2);
			gp.push_back(0);
			gp.push_back(1);


		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(2);
			gp.push_back(0);


		}

		break;









	case 'I':
		if (row == 0) {

			gp.push_back(1);

		}

		if (row == 1) {

			gp.push_back(1);


		}

		if (row == 2) {

			gp.push_back(1);

		}

		if (row == 3) {

			gp.push_back(1);


		}
		if (row == 4) {

			gp.push_back(1);


		}


		break;




	case 'J':
		if (row == 0) {

			gp.push_back(1);
			gp.push_back(2);


		}

		if (row == 1) {


			gp.push_back(2);


		}

		if (row == 2) {

			gp.push_back(2);



		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(1);



		}

		break;




	case 'K':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 1) {


			gp.push_back(2);
			gp.push_back(0);



		}

		if (row == 2) {

			gp.push_back(0);
			gp.push_back(1);


		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(2);


		}

		break;




	case 'L':
		if (row == 0) {

			gp.push_back(0);



		}

		if (row == 1) {



			gp.push_back(0);



		}

		if (row == 2) {

			gp.push_back(0);



		}

		if (row == 3) {

			gp.push_back(0);


		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(2);
			gp.push_back(1);




		}

		break;



	case 'M':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(1);
			gp.push_back(2);



		}

		if (row == 2) {

			gp.push_back(0);
			gp.push_back(1);
			gp.push_back(2);



		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(2);





		}

		break;




	case 'N':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(2);
			gp.push_back(1);



		}

		if (row == 1) {

			gp.push_back(0);

			gp.push_back(2);



		}

		if (row == 2) {

			gp.push_back(0);

			gp.push_back(2);



		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 4) {

			gp.push_back(0);
			gp.push_back(2);



		}

		break;



	case 'O':
		if (row == 0) {


			gp.push_back(1);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);


		}

		if (row == 4) {

			gp.push_back(1);




		}

		break;



	case 'P':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(1);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {

			gp.push_back(0);
			gp.push_back(1);



		}

		if (row == 3) {

			gp.push_back(0);



		}

		if (row == 4) {

			gp.push_back(0);




		}

		break;



	case 'Q':
		if (row == 0) {


			gp.push_back(1);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 3) {

			gp.push_back(1);
			gp.push_back(2);




		}

		if (row == 4) {

			gp.push_back(2);




		}

		break;



	case 'R':
		if (row == 0) {


			gp.push_back(1);
			gp.push_back(0);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {

			gp.push_back(0);
			gp.push_back(1);



		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);




		}

		if (row == 4) {

			gp.push_back(2);
			gp.push_back(0);



		}

		break;




	case 'S':
		if (row == 0) {


			gp.push_back(1);
			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(0);




		}

		if (row == 2) {


			gp.push_back(1);



		}

		if (row == 3) {


			gp.push_back(2);




		}

		if (row == 4) {

			gp.push_back(1);
			gp.push_back(0);



		}

		break;






	case 'T':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(1);
			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(1);




		}

		if (row == 2) {


			gp.push_back(1);



		}

		if (row == 3) {


			gp.push_back(1);




		}

		if (row == 4) {

			gp.push_back(1);




		}

		break;





	case 'U':
		if (row == 0) {

			gp.push_back(0);

			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {



			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 3) {



			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 4) {

			gp.push_back(1);
			gp.push_back(0);
			gp.push_back(2);



		}

		break;





	case 'V':
		if (row == 0) {

			gp.push_back(0);

			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {



			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 3) {



			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 4) {

			gp.push_back(1);

		}

		break;


	case 'W':
		if (row == 0) {

			gp.push_back(0);

			gp.push_back(2);

		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 2) {
			gp.push_back(0);
			gp.push_back(2);
			gp.push_back(1);
		}

		if (row == 3) {


			gp.push_back(1);
			gp.push_back(0);
			gp.push_back(2);

		}

		if (row == 4) {

			gp.push_back(2);
			gp.push_back(0);

		}

		break;


	case 'X':
		if (row == 0) {
			gp.push_back(0);
			gp.push_back(2);
		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);
		}

		if (row == 2) {
			gp.push_back(1);
		}

		if (row == 3) {

			gp.push_back(0);
			gp.push_back(2);
		}

		if (row == 4) {

			gp.push_back(2);
			gp.push_back(0);
		}

		break;


	case 'Y':
		if (row == 0) {

			gp.push_back(0);

			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(0);
			gp.push_back(2);



		}

		if (row == 2) {



			gp.push_back(1);



		}

		if (row == 3) {



			gp.push_back(1);




		}

		if (row == 4) {

			gp.push_back(1);




		}

		break;



	case 'Z':
		if (row == 0) {

			gp.push_back(0);
			gp.push_back(1);
			gp.push_back(2);



		}

		if (row == 1) {

			gp.push_back(2);




		}

		if (row == 2) {



			gp.push_back(1);



		}

		if (row == 3) {



			gp.push_back(0);




		}

		if (row == 4) {

			gp.push_back(1);

			gp.push_back(2);
			gp.push_back(0);

		}

		break;


	case ' ':break;

	default:break;
	}


	/*for (auto i : gp) {
		cout << "stellen: " << i << endl;
	}*/

	return gp;

}

//AI
string createBigAscii(string word) {

	int x = word.length();
	int letterWidth = 4;
	x *= 4;
	int y = 5;


	string s[5];//ausgabestrings
	const char whitespace = ' ';//breite 4 für ein buchstabe

								//strings bearbeiten

	s[0] = "";
	s[1] = "";
	s[2] = "";
	s[3] = "";
	s[4] = "";
	for (int i = 0; i < (word.length() * 4); i++) {
		s[0] += whitespace;
		s[1] += whitespace;
		s[2] += whitespace;
		s[3] += whitespace;
		s[4] += whitespace;

	}
	//s[0]="xxxoxxxo"; bei AI

	//cout << "reihenstring[0] groesse: " << s[0].length() << endl;

	for (int i = 0; i < word.length(); i++)
	{

		for (int j = 0; j < 5; j++) {
			vector<int> buffer = gesetzte_punkte(word[i], j);
			//cout << "forschleife\n";
			for (auto ss : buffer) {
				//cout << "werte aus bufffer: " << ss << endl;
			//	cout << "probierte stellen " << (ss + (i * letterWidth)) << endl;
				//cout << "I :" << i << endl;

				s[j].at(ss + (i * letterWidth)) = '#';

			}


		}

	}


	/*cout << s[0] << endl;
	cout << s[1] << endl;
	cout << s[2] << endl;
	cout << s[3] << endl;
	cout << s[4] << endl;*/

	string newstring = "";
	newstring += s[0];
	newstring += "\n";
	newstring += s[1];
	newstring += "\n";
	newstring += s[2];
	newstring += "\n";
	newstring += s[3];
	newstring += "\n";
	newstring += s[4];
	newstring += "\n";

	return newstring;


}


//schreiben
void AsciiToFile(string filecontent) {

	fstream ziel;

	ziel.open("asciiii.asc", ios::out);


	if (!ziel) { printf("asciidatei konnte nicht geöffnet werden!\n"); exit(-1); }

	ziel.width(20); //formatiertes schreiben -> groesse der zeile bzw. breite	
	ziel << filecontent;
	ziel << '\n';
	ziel.close();

}


void printFile(string filename)
{
	fstream ziel;
	string line;

	ziel.open(filename);
	if (!ziel) { printf("asciidatei konnte nicht geöffnet werden!\n"); exit(-1); }

	while (getline(ziel, line))
	{
		cout << line;
	}

}


int main()
{
	bool running = true;
	string toBigAscii;
	string result;
	string toFile;

	while (running)
	{
		cout << "Welches Wort möchten Sie als Ascii-Big dargestellt haben? Leere Eingabe=Programmabruch" << endl;
		getline(cin, toBigAscii);

		if (toBigAscii.length() > 0)
		{

			cout << "Es wird verarbeitet: " << toBigAscii << endl;
			result = createBigAscii(toBigAscii);
			cout << result << endl;
			cout << "Datei erstellen(y/n)?" << endl;
			cin >> toFile;
			

			if (toFile == "Y" || toFile == "J" || toFile == "y" || toFile == "j" || toFile == "yes" || toFile == "ja")  //yes very dynamic!
			{
				cout << "Datei wird erstellt";
				AsciiToFile(result);
				

			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
		else {
			running = false;
		}


	}

	cout << "Programm wird beendet!" << endl;

	return 0;

}



void example()
{
	string asciiCode = createBigAscii("Welcome To Zwen's Ascii-Big Creator");
	AsciiToFile(asciiCode);

	//printFile("c://users//sven//desktop//asciiii.asc");
}


