// Daily Routine App
// License: UNLICENSED
// This program is free to use, modify, and distribute without any restrictions.
#include <vector>
#include <string>
#include <ctime>
using namespace std;

// Include necessary headers
// This program uses the standard library for vectors, strings, and time handling
// The program is designed to manage a daily routine with tasks and motivational quotes
// The program will display the current time, a greeting, and the current task based on the time of day
// It will also provide motivational quotes and allow the user to view the entire daily routine
// The program is structured to be user-friendly and informative, guiding the user through their daily tasks

int main() {
	
	// Vector to hold the daily routine tasks
	std::vector<std::string> dailyRoutine = {
		"08:00 - Herää",
		"08:15 - Aamiainen kahvin kanssa",
		"08:45 - Lue uutiset tai katso puhelimelta",
		"09:00 - Työskentele tai opiskele - keskittynyt työ 30 minuuttia",
		"09:30 - Tauko - venyttele tai kävele",
		"09:45 - Ole puhelimella tai tee jotain rentouttavaa",
		"10:15 - Tauko - juo vettä tai teetä",
		"10:30 - Jatka työskentelyä tai opiskelua - keskittynyt työ 30 minuuttia",
		"11:00 - Tauko - Tee hengitysharjoitus tai meditoi 15 minuuttia",
		"11:15 - Ole puhelimella tai tee jotain rentouttavaa",
		"11:45 - Tauko - venyttele tai tee lyhyt kävely",
		"12:00 - Lounas",
		"12:30 - Lepää tai tee jotain rentouttavaa",
		"13:00 - Jatka työskentelyä tai opiskelua - keskittynyt työ 30 minuuttia",
		"13:30 - Tauko - juo vettä tai teetä",
		"13:45 - Ole puhelimella tai tee jotain rentouttavaa",
		"14:15 - Tauko - hengitä syvään tai meditoi 15 minuuttia",
		"14:30 - Jatka työskentelyä tai opiskelua - keskittynyt työ 30 minuuttia",
		"15:00 - Tauko - venyttele tai tee lyhyt kävely",
		"15:15 - Ole puhelimella tai tee jotain rentouttavaa",
		"15:45 - Tauko - juo vettä tai teetä",
		"16:00 - Jatka työskentelyä tai opiskelua - keskittynyt työ 30 minuuttia",
		"16:30 - Tauko - hengitä syvään tai meditoi 15 minuuttia",
		"16:45 - Ole puhelimella tai tee jotain rentouttavaa",
		"17:15 - Tauko - venyttele tai tee lyhyt kävely",
		"17:30 - Päivän lopetus - tee yhteenveto tai suunnittele seuraava päivä",
		"18:00 - Illallinen",
		"18:30 - Rentoudu tai tee jotain mieluisaa",
		"19:00 - Katso elokuva tai sarja",
		"21:00 - Valmistaudu nukkumaan - lue kirjaa tai kuuntele musiikkia",
		"22:00 - Nukkumaan"
	};

	// Vector to hold motivational quotes
	std::vector<string> motivationalQuotes = {
		"Usko itseesi ja kaikki on mahdollista.",
		"Jokainen päivä on uusi mahdollisuus.",
		"Älä anna periksi, unelmasi ovat saavutettavissa.",
		"Työskentele kovasti ja unelmat toteutuvat.",
		"Elämä on täynnä mahdollisuuksia, tartu niihin.",
		"Onnistuminen on matka, ei määränpää.",
		"Älä pelkää epäonnistumista, se on osa oppimista.",
		"Jokainen askel vie sinut lähemmäs tavoitettasi.",
		"Elä hetkessä ja nauti matkasta.",
		"Ympäröi itsesi positiivisilla ihmisillä ja ajatuksilla.",
		"Älä vertaa itseäsi muihin, keskity omaan polkuusi.",
		"Onni löytyy pienistä asioista.",
		"Älä odota täydellistä hetkeä, tee hetkestä täydellinen.",
		"Elämä on seikkailu, nauti siitä.",
		"Jokainen päivä on uusi mahdollisuus oppia ja kasvaa.",
		"Älä pelkää unelmoida suuria, sillä suurimmat unelmat voivat toteutua.",
		"Elämä on liian lyhyt murehtimiseen, nauti siitä.",
		"Älä anna menneisyyden määrittää tulevaisuuttasi.",
		"Jokainen päivä on uusi mahdollisuus olla parempi versio itsestäsi.",
		"Elämä on lahja, käytä se viisaasti.",
		"Älä koskaan luovuta, sillä voit saavuttaa mitä tahansa.",
		"Onni on asenne, ei olosuhde.",
		"Elämä on täynnä mahdollisuuksia, tartu niihin rohkeasti.",
		"Älä pelkää epäonnistumista, se on askel kohti menestystä.",
		"Jokainen päivä on uusi mahdollisuus tehdä jotain suurta.",
		"Elämä on kuin polku, joka vie sinut kohti unelmiasi.",
		"Älä koskaan aliarvioi itseäsi, olet kykenevä mihin tahansa.",
		"Elämä on täynnä kauneutta, opi näkemään se.",
		"Älä pelkää ottaa riskejä, sillä ne voivat johtaa suuriin saavutuksiin.",
		"Jokainen päivä on uusi mahdollisuus tehdä maailmasta parempi paikka.",
		"Elämä on kuin kirja, ja sinä olet sen kirjoittaja.",
		"Älä anna muiden mielipiteiden vaikuttaa siihen, kuka olet."
	};

	// Get the current time
	// This will be used to display the current time in the routine
	time_t currenttime = time(0);
	tm *ltm = localtime(&currenttime);

	// Print the current time
	cout << "Nykyinen aika: " 
	     << ltm->tm_hour << ":" 
	     << ltm->tm_min << ":" 
	     << ltm->tm_sec << endl;

	// Print a greeting message
	cout << "Tervetuloa päivärutiiniin!" << endl;

	// Print the current date
	cout << "Tänään on: " 
	     << ltm->tm_mday << "." 
	     << (ltm->tm_mon + 1) << "." 
	     << (ltm->tm_year + 1900) << endl;

	// If the current hour is before 8 AM, print a message
	if (ltm->tm_hour < 8) {
		cout << "On vielä liian aikaista aloittaa päivärutiini." << endl;
		return 0; // Exit the program if it's too early
	}

	// If the current hour is after 10 PM, print a message
	if (ltm->tm_hour >= 22) {
		cout << "Päivärutiini on päättynyt, on aika mennä nukkumaan." << endl;
		return 0; // Exit the program if it's too late
	}

	// Print a separator line
	cout << "------------------------" << endl;

	// Print the current hour in a friendly format
	cout << "Tämän tunnin tehtävä:" << endl;

	// Get the current task based on the current time and daily routine timepoints
	int currentHour = ltm->tm_hour;
	int currentMinute = ltm->tm_min;
	string currentTask = "Ei tehtävää tälle tunnille.";

	// Loop through the daily routine to find the current task
	for (const auto& task : dailyRoutine) {
		// Split the task string to get the time and description
		size_t pos = task.find(" - ");
		if (pos != string::npos) {
			string timePart = task.substr(0, pos);
			string taskDescription = task.substr(pos + 3);

			// Parse the time part to get hour and minute
			int taskHour, taskMinute;
			sscanf(timePart.c_str(), "%d:%d", &taskHour, &taskMinute);

			// Check if the current time matches the task time or is within the task time
			// If the current localtime matches the range of the task time, set the current task
			if (taskHour == currentHour && taskMinute <= currentMinute) {
				currentTask = taskDescription;
			} else if (taskHour < currentHour || 
			           (taskHour == currentHour && taskMinute <= currentMinute)) {
				currentTask = taskDescription;
			} else if (taskHour > currentHour || 
			           (taskHour == currentHour && taskMinute > currentMinute)) {
				// If the task is in the future, we can break out of the loop
				break;
			}
		}
	}

	// Print the current task
	cout << "Nykyinen tehtävä: " << currentTask << endl;

	// Print a separator line
	cout << "------------------------" << endl;

	// Print a random motivational quote
	// This will print a motivational quote based on the current hour
	// The quote is selected based on the current hour modulo the size of the quotes vector
	cout << "Motivoiva lainaus: " 
	     << motivationalQuotes[ltm->tm_hour % motivationalQuotes.size()] << endl;

	// Print a separator line
	cout << "------------------------" << endl;

	// Ask the user if they want to see the entire daily routine
	cout << "Haluatko nähdä koko päivärutiinin? (k/e): ";
	char choice;
	cin >> choice;

	// If the user chooses 'k', print the entire daily routine
	if (choice == 'k' || choice == 'K') {
		cout << "Koko päivärutiini:\n" << endl;
	} else {
		cout << "Hyvä on, jatketaan!" << endl;
	}

	// Print a separator line
	cout << "------------------------" << endl;

	// Print a message indicating the start of the daily routine
	cout << "Aloitetaan päivärutiini..." << endl;

	// Loop through the daily routine and print each task
	for (const auto& task : dailyRoutine) {
		cout << task << endl;
	}
	// Print a separator line
	// This line separates the daily routine tasks from the closing message
	cout << "------------------------" << endl;

	// Print a message indicating the end of the daily routine
	cout << "Päivärutiini on päättynyt." << endl;
	
	// Print a closing message
	cout << "Kiitos, että käytit päivärutiini-sovellusta!" << endl;

	// Return 0 to indicate successful execution
	return 0;
}
