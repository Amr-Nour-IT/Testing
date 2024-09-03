// Sequences Game
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

// قراءة من ملف
void loadFromFile(array<int, 5>& nums, int& points, string& name, const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        for (int& num : nums) {
            file >> num;
        }
        file >> points; // قراءة النقاط
        file.ignore(); // تجاهل الباقي من السطر
        getline(file, name); // قراءة الاسم
        file.close();
        cout << "\nData loaded successfully.\n";
    } else {
        cout << "\nUnable to open file for reading.\n";
    }
}

// حفظ النقاط إلى ملف (ستقوم بحذف البيانات القديمة)
void saveToFile(const array<int, 5>& nums, int points, const string& name, const string& filename) {
    ofstream file(filename); // فتح الملف في وضع الكتابة (سيقوم بحذف البيانات القديمة)
    if (file.is_open()) {
        for (int num : nums) {
            file << num << " ";
        }
        file << points << "\n"; // حفظ النقاط
        file << name << "\n";   // حفظ الاسم
        file.close();
        cout << "\nData saved successfully.\n";
    } else {
        cout << "\nUnable to open file for writing.\n";
    }
}

// المتغيرات
string name = "Pro";
int points = 0, answer1, answer2, answer3;
char YOR;

int sequences[3][5] = {
    {1, 5, 10, 16, 23},
    {2, 4, 8, 16, 32},
    {1, 1, 2, 3, 5}
};

array<int, 5> nums = {}; // تأكد من تحديد حجم المصفوفة

string start =  "    _______  _______  _______  _______      _______ _________ _______  _______ _________\n"
                "    (  ____ \\(  ___  )(       )(  ____ \\    (  ____ \\__   __/(  ___  )(  ____ )\\__   __/\n"
                "    | (    \\/| (   ) || () () || (    \\/    | (    \\/   ) (   | (   ) || (    )|   ) (   \n"
                "    | |      | (___) || || || || (__        | (_____    | |   | (___) || (____)|   | |   \n"
                "    | | ____ |  ___  || |(_)| ||  __)       (_____  )   | |   |  ___  ||     __)   | |   \n"
                "    | | \\_  )| (   ) || |   | || (                ) |   | |   | (   ) || (\\ (      | |   \n"
                "    | (___) || )   ( || )   ( || (____/\\    /\\____) |   | |   | )   ( || ) \\ \\__   | |   \n"
                "    (_______)|/     \\||/     \\|(_______/    \\_______)   )_(   |/     \\||/   \\__/   )_(   \n"
                "                                                                                        \n"
                "--------------------------------------------------------------------------------------------\n";
string over =
" ▄▀▀▀▀▄    ▄▀▀█▄   ▄▀▀▄ ▄▀▄  ▄▀▀█▄▄▄▄  \n"
"█         ▐ ▄▀ ▀▄ █  █ ▀  █ ▐  ▄▀   ▐  \n"
"█    ▀▄▄    █▄▄▄█ ▐  █    █   █▄▄▄▄▄   \n"
"█     █ █  ▄▀   █   █    █    █    ▌   \n"
"▐▀▄▄▄▄▀ ▐ █   ▄▀  ▄▀   ▄▀    ▄▀▄▄▄▄    \n"
"▐         ▐   ▐   █    █     █    ▐    \n"
"                  ▐    ▐     ▐         \n"
" ▄▀▀▀▀▄   ▄▀▀▄ ▄▀▀▄  ▄▀▀█▄▄▄▄  ▄▀▀▄▀▀▀▄\n"
"█      █ █   █    █ ▐  ▄▀   ▐ █   █   █\n"
"█      █ ▐  █    █    █▄▄▄▄▄  ▐  █▀▀█▀ \n"
"▀▄    ▄▀    █   ▄▀    █    ▌   ▄▀    █ \n"
"  ▀▀▀▀       ▀▄▀     ▄▀▄▄▄▄   █     █  \n"
"                     █    ▐   ▐     ▐  \n"
"                     ▐                 \n";

string style1 =
" __                                          ___                \n"
"/ _\\ ___  __ _ _   _  ___ _ __   ___ ___    /___\\_ __   ___   _ \n"
"\\ \\ / _ \\/ _\\` | | | |/ _ \\ '_ \\ / __/ _ \\  //  // '_ \\ / _ \\ (_)\n"
"_\\ \\  __/ (_| | |_| |  __/ | | | (_|  __/ / \\_//| | | |  __/  _ \n"
"\\__/\\___|\\__, |\\__,_|\\___|_| |_|\\___\\___| \\___/ |_| |_|\\___| (_)\n"
"            |_|                                                 "
"\n\n_________________________________________________________________________\n\n";

string one =
"  _     _    ____     _    _  ___     _    _  __      _     ___  ___ \n"
" / |   | |  | ___|   | |  / |/ _ \\   | |  / |/ /_    | |   / _ \\/ _ \\\n"
" | |   | |  |___ \\   | |  | | | | |  | |  | | '_ \\   | |   \\// /\\// /\n"
" | |   | |   ___) |  | |  | | |_| |  | |  | | (_) |  | |     \\/   \\/ \n"
" |_|   | |  |____/   | |  |_|\\___/   | |  |_|\\___/   | |     ()   () \n"
"       |_|           |_|             |_|             |_|             \n"
"\n\n_________________________________________________________________________\n\n";

string style2 =
" __                                        _____                    \n"
"/ _\\ ___  __ _ _   _  ___ _ __   ___ ___  /__   \\__      _____    _ \n"
"\\ \\ / _ \\/ _\\` | | | |/ _ \\ '_ \\ / __/ _ \\   / /\\/\\ \\ /\\ / / _ \\  (_)\n"
"_\\ \\  __/ (_| | |_| |  __/ | | | (_|  __/  / /    \\ V  V / (_) |  _ \n"
"\\__/\\___|\\__, |\\__,_|\\___|_| |_|\\___\\___|  \\/      \\_/\\_/ \\___/  (_)\n"
"            |_|                                                     \n"
"\n\n_________________________________________________________________________\n\n";

string two =
"  ____      _    _  _      _     ___     _    _  __      _     ___  ___ \n"
" |___ \\    | |  | || |    | |   ( _ )   | |  / |/ /_    | |   / _ \\/ _ \\\n"
"   __) |   | |  | || |_   | |   / _ \\   | |  | | '_ \\   | |   \\// /\\// /\n"
"  / __/    | |  |__   _|  | |  | (_) |  | |  | | (_) |  | |     \\/   \\/ \n"
" |_____|   | |     |_|    | |   \\___/   | |  |_|\\___/   | |     ()   () \n"
"           |_|            |_|           |_|             |_|             \n"
"\n\n_________________________________________________________________________\n\n";

string style3 =
" __                                        _____ _                       \n"
"/ _\\ ___  __ _ _   _  ___ _ __   ___ ___  /__   \\ |__  _ __ ___  ___   _ \n"
"\\ \\ / _ \\/ _\\` | | | |/ _ \\ '_ \\ / __/ _ \\   / /\\/ '_ \\| '__/ _ \\/ _ \\ (_)\n"
"_\\ \\  __/ (_| | |_| |  __/ | | | (_|  __/  / /  | | | | | |  __/  __/  _ \n"
"\\__/\\___|\\__, |\\__,_|\\___|_| |_|\\___\\___|  \\/   |_| |_|_|  \\___|\\___| (_)\n"
"            |_|                                                          \n"
"\n\n_________________________________________________________________________\n\n";

string three =
"  _     _    _    _    ____     _    _____    _     ___  ___ \n"
" / |   | |  / |  | |  |___ \\   | |  |___ /   | |   / _ \\/ _ \\\n"
" | |   | |  | |  | |    __) |  | |    |_ \\   | |   \\// /\\// /\n"
" | |   | |  | |  | |   / __/   | |   ___) |  | |     \\/   \\/ \n"
" |_|   | |  |_|  | |  |_____|  | |  |____/   | |     ()   () \n"
"       |_|       |_|           |_|           |_|             \n"
"\n\n_________________________________________________________________________\n\n";


// The Game Begin
void game(int& points){
    int answer1, answer2, answer3;
    bool a1 = false, a2 = false, a3 = false;

    cout << start; // Game Start

    cout << style1 << one;
    cout << "Enter The Answer\n   >> "; cin >> answer1;
    if (answer1 == sequences[0][4])
        a1 = true;

    cout << style2 << two;
    cout << "Enter The Answer\n   >> "; cin >> answer2;
    if (answer2 == sequences[1][4])
        a2 = true;

    cout << style3 << three;
    cout << "Enter The Answer\n   >> "; cin >> answer3;
    if (answer3 == sequences[2][4])
        a3 = true;

    if (a1 && a2 && a3) {
        cout << "Congratulations, You Got All The Answer Rghit :)\n";
        points += 3;
    } else if (!a1 && !a2 && !a3) {
        cout << "All The Answer is Wrong :(, You Will Lose Some Points :/\n";
        points -= 3;
        cout << over;

    } else {
        cout << "Not All The Answer is Rghit :/\n";
        points += 1;
    }
}

// The Game End

int main() {
    // تحميل البيانات من الملف
    loadFromFile(nums, points, name, "game_save.txt");

    cout << "    ========================\n";
    cout << "    |=== Sequences Game ===|\n";
    cout << "    ========================\n";

    cout << "Hi " << name << "\n";
    cout << "Enter Your Name\n >> "; cin >> name;

    cout << "################################\n";
    cout << "           Welcome \n";
    cout << "           {" << name << "}\n";
    cout << "################################\n\n";

    cout << "Your Points is : { " << points << " }" << ((points >= 10) ? " :)\nI will Say Good\n" : " :(\nNot Good Enough\n");
    cout << "Do you Want to Play?\n [1]- Yes\n [2]- No\n   >> "; cin >> YOR;

    switch (YOR)
    {
    case '1':
        game(points);
        break;
    case '2':
        cout << "Ok Good Bye!";
        break;
    default:
        cout << "Invalid Value!";
        break;
    }

    // قم بحفظ البيانات إلى ملف عند الحاجة
    saveToFile(nums, points, name, "game_save.txt");

    return 0;
}
