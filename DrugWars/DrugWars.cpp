#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <set>

// Define a struct to hold drug information
struct DrugInfo {
    std::string Name;
    std::vector<std::string> StreetNames;
    std::string History;
    std::string Effects;
    std::pair<int, int> PriceRange;
};

class Drug {
public:

    std::string Name;
    std::string Code;
    std::string Description;
    int BasePrice;
    std::vector<int> PriceRange;
    float PriceMultiplier;
    int Quantity;
    // Define the map with string as key and DrugInfo as value
    std::map<std::string, DrugInfo> DrugsInfo;

    // Constructor to initialize drug information
    Drug() {
        DrugsInfo["AD"] = { "Angel Dust", {"PCP", "Sherm", "Embalming Fluid"},
                            "Developed as a dissociative anesthetic, Angel Dust gained popularity in the 1960s. Discontinued for medical use due to its unpredictable and severe side effects.",
                            "Hallucinations, distorted perceptions of reality, increased strength, and a dissociative state.",
                            {500, 2000} };
        DrugsInfo["CD"] = { "Codeine", {"Lean", "Purple Drank", "Sizzurp"},
                            "Codeine is an opiate used for pain relief. It has been used recreationally, often mixed with soda and candy, particularly in hip-hop culture.",
                            "Euphoria, relaxation, and mild sedation.",
                            {20, 150} };
        DrugsInfo["CN"] = { "Cocaine", {"Coke", "Blow", "Snow"},
                            "Derived from coca plants, cocaine became popular in the 1970s and 1980s as a recreational stimulant. Its use is associated with a high risk of addiction.",
                            "Increased energy, alertness, and euphoria.",
                            {100, 500} };
        DrugsInfo["CK"] = { "Crack", {"Freebase", "Rock", "Base"},
                            "Crack cocaine is a crystallized form of cocaine. It emerged in the 1980s, contributing to the \"crack epidemic\" in the United States.",
                            "Intense, short-lived euphoria, increased heart rate, and heightened alertness.",
                            {50, 300} };
        DrugsInfo["DM"] = { "DMT", {"Dimitri", "Businessman's Trip"},
                            "DMT is a naturally occurring psychedelic compound found in certain plants. Its use in shamanic rituals dates back centuries.",
                            "Intense, short-lasting hallucinations, a sense of entering otherworldly realms.",
                            {100, 1000} };
        DrugsInfo["EC"] = { "Ecstasy", {"MDMA", "Molly", "E", "X"},
                            "Originally used in psychotherapy, ecstasy gained popularity in the 1980s as a recreational drug.",
                            "Enhanced sensory perception, increased empathy, and heightened emotions.",
                            {5, 50} };
        DrugsInfo["FT"] = { "Fentanyl", {"China White", "Apache", "Dance Fever"},
                            "Developed as a potent painkiller, fentanyl has been linked to a surge in opioid-related overdoses due to its high potency.",
                            "Intense euphoria, drowsiness, and respiratory depression.",
                            {100, 500} };
        DrugsInfo["HN"] = { "Heroin", {"Smack", "Junk", "H"},
                            "Derived from morphine, heroin was initially marketed as a non-addictive alternative. Its recreational use rose in the mid-20th century.",
                            "Euphoria, sedation, pain relief.",
                            {50, 300} };
        DrugsInfo["HS"] = { "Hash", {"Hashish", "Hash Oil", "Dabs"},
                            "Hash is a concentrated form of cannabis resin. It has a long history of use in various cultures for spiritual and recreational purposes.",
                            "Relaxation, euphoria, altered perception of time.",
                            {10, 100} };
        DrugsInfo["KM"] = { "Ketamine", {"Special K", "K", "Vitamin K"},
                            "Initially used as an anesthetic, ketamine gained popularity as a recreational drug with dissociative effects.",
                            "Hallucinations, dissociation, altered perception of time and space.",
                            {50, 500} };
        DrugsInfo["LD"] = { "LSD", {"Acid", "Tabs", "Blotter"},
                            "Discovered in the 1930s, LSD became popular in the 1960s counter-culture. It's known for its profound psychedelic effects.",
                            "Hallucinations, altered perception of reality, heightened sensory experiences.",
                            {50, 300} };
        DrugsInfo["LU"] = { "Ludes", {"Quaaludes", "Disco Biscuits"},
                            "Methaqualone, commonly known as Quaaludes, was a sedative-hypnotic drug popular in the 1970s. It was later classified as a controlled substance.",
                            "Muscle relaxation, sedation, euphoria.",
                            {100, 800} };
        DrugsInfo["MC"] = { "Mescaline", {"Peyote", "Buttons", "Cactus"},
                            "Mescaline is a naturally occurring psychedelic found in certain cacti, notably peyote. It has been used in Native American rituals for centuries.",
                            "Visual hallucinations, altered perception, and enhanced sensory experiences.",
                            {50, 500} };
        DrugsInfo["MN"] = { "Morphine", {"Dreamer", "Mister Blue"},
                            "Derived from opium, morphine has been used for pain relief since the 19th century. It remains a powerful opioid analgesic.",
                            "Pain relief, euphoria, sedation.",
                            {50, 300} };
        DrugsInfo["MP"] = { "Mephedrone", {"Meph", "Meow Meow", "Bubble"},
                            "Mephedrone emerged as a popular recreational drug in the early 2000s. Initially marketed as a legal high and sold over the internet.",
                            "Euphoria, enhanced sociability, and heightened sensory perception.",
                            {30, 100} };
        DrugsInfo["MT"] = { "Meth", {"Crystal", "Ice", "Glass"},
                            "Methamphetamine, a potent stimulant, gained popularity for recreational use and as an illicit substance in the mid-20th century.",
                            "Increased energy, alertness, euphoria.",
                            {50, 500} };
        DrugsInfo["OP"] = { "Opium", {"Dopium", "Chinese Tobacco", "Midnight Oil"},
                            "Opium has a long history of use dating back centuries. It was widely used for medicinal and recreational purposes, leading to addiction issues.",
                            "Pain relief, relaxation, euphoria.",
                            {100, 800} };
        DrugsInfo["OX"] = { "Oxy", {"Oxycodone", "Hillbilly Heroin", "OxyContin"},
                            "Oxycodone, commonly known as Oxy, is a prescription opioid. It became widely abused for its pain-relieving and euphoric effects.",
                            "Pain relief, relaxation, euphoria.",
                            {50, 300} };
        DrugsInfo["PA"] = { "Peyote", {"Mescaline", "Buttons", "Cactus"},
                            "Peyote is a small, spineless cactus containing mescaline. It has been used in Native American religious ceremonies for centuries.",
                            "Visual hallucinations, altered perception, and enhanced sensory experiences.",
                            {100, 800} };
        DrugsInfo["PO"] = { "Poppers", {"Rush", "Locker Room", "Snappers"},
                            "Poppers are a type of alkyl nitrite inhalant. They have been used recreationally, especially in club and party scenes, for their brief but intense effects.",
                            "Head rush, warm sensations, and intensified sensory experiences.",
                            {5, 50} };
        DrugsInfo["RT"] = { "Ritalin", {"Rids", "Vitamin R", "Skittles"},
                            "Ritalin, or methylphenidate, was developed in the 1950s as a treatment for attention deficit hyperactivity disorder (ADHD). FDA-approved, it has since been prescribed for ADHD and narcolepsy.",
                            "Stimulant effects include increased focus, alertness, and energy.",
                            {5, 50} };
        DrugsInfo["SH"] = { "Shrooms", {"Magic Mushrooms", "Psilocybin", "Caps"},
                            "Psychedelic mushrooms, or shrooms, have been used in various cultures for their hallucinogenic properties. They gained popularity in the counterculture movements of the 1960s.",
                            "Altered perception, visual hallucinations, introspective experiences.",
                            {20, 200} };
        DrugsInfo["SP"] = { "Speed", {"Amphetamine", "Uppers", "Dexies"},
                            "Amphetamines have a long history of medical use and gained popularity as stimulants in the mid-20th century.",
                            "Increased energy, alertness, heightened focus.",
                            {50, 500} };
        DrugsInfo["VI"] = { "Vicodin", {"Hydro", "Vikes", "Watsons"},
                            "Vicodin is a combination of hydrocodone and acetaminophen used for pain relief. It has been widely prescribed but is associated with the risk of addiction.",
                            "Pain relief, relaxation, mild euphoria.",
                            {100, 800} };
        DrugsInfo["WD"] = { "Weed", {"Marijuana", "Pot", "Cannabis"},
                            "Cannabis has been used for medicinal, recreational, and industrial purposes for thousands of years. Its use became widespread in the 20th century.",
                            "Relaxation, euphoria, altered perception of time and space.",
                            {5, 50} };
    }

    void PrintAllDrugs() const {
        for (const auto& entry : DrugsInfo) {
            std::cout << entry.first << ": " << entry.second.Name << std::endl;
        }
    }

    void PrintSpecificDrug(const std::string& drugID) const {
        auto it = DrugsInfo.find(drugID);
        if (it != DrugsInfo.end()) {
            const auto& drugInfo = it->second;
            std::cout << "Name: " << drugInfo.Name << std::endl;
            std::cout << "Street Names: ";
            for (const auto& name : drugInfo.StreetNames) {
                std::cout << name << ", ";
            }
            std::cout << std::endl;
            std::cout << "History: " << drugInfo.History << std::endl;
            std::cout << "Effects: " << drugInfo.Effects << std::endl;
            std::cout << "Price Range: $" << drugInfo.PriceRange.first << " - $" << drugInfo.PriceRange.second << std::endl;
        }
        else {
            std::cout << "Drug not found." << std::endl;
        }
    }
};

// Function to add a random set of available drugs to each city
void addAvailableDrugs(std::map<std::string, std::vector<std::string>>& cityDrugs, const std::vector<std::string>& drugKeys) {
    std::srand(static_cast<unsigned int>(std::time(0)));
    std::set<std::string> chosenDrugs;

    while (chosenDrugs.size() < 6) {
        int randomIndex = std::rand() % drugKeys.size();
        chosenDrugs.insert(drugKeys[randomIndex]);
    }

    for (const auto& drug : chosenDrugs) {
        cityDrugs[drug] = {};  // Initialize with empty vectors
    }
}

// Define a struct to hold city information
struct CityInfo {
    std::string Name;
    std::string FullName; // This seems to be missing in the constructor
    int MaxDrugCount = 10;
    std::vector<std::string> HomeDrugNames;
    std::string GunShopName;
    std::vector<DrugInfo> Drugs;
};

class City {
public:
    // Define the map with string as key and CityInfo as value
    std::map<std::string, CityInfo> CitiesInfo;
    Drug drugDatabase;

    // Constructor
    City() {
        initializeCities();
    }

    // Function to initialize all cities with correct information
    void initializeCities() {
        std::vector<std::string> cityNames = {
            "Acapulco, Mexico", "Amsterdam, Netherlands", "Bangkok, Thailand",
            "Hong Kong, China", "Istanbul, Turkey", "Lisbon, Portugal",
            "London, UK", "Marseilles, France", "Medellin, Colombia",
            "Mexico City, Mexico", "Miami, USA", "Marrakesh, Morocco",
            "New York City, USA", "Panama City, Panama", "Phuket, Thailand",
            "San Francisco, USA", "Sydney, Australia", "Tehran, Iran",
            "Tijuana, Mexico", "Toronto, Canada", "Vancouver, Canada"
        };

        std::vector<std::string> gunShopNames = {
            "Aim High Ammunition Alley", "Ammo-nation", "Angry Hank's Shot Shack",
            "Barrel of Laughs Gun Depot", "Bullet Bonanza Emporium", "Glock 'n Roll Firearms",
            "Guns 'n' Giggles", "Laugh 'n' Load Gunsmiths", "Lock, Stock, and Two Smokin' Barrels",
            "Pistol Puns & Rifled Laughs", "Shoots & Ladders Armoury", "The Bang Theory Firearms",
            "The Bang-Bang Boutique", "The Trigger Happy Gun Shop", "Trigger Treats Gun Emporium"
        };

        for (const auto& cityName : cityNames) {
            std::vector<DrugInfo> drugsAvailable;
            std::vector<std::string> homeDrugNames;

            // Pick two random drugs
            std::set<std::string> addedDrugs;
            for (int i = 0; i < 6; ++i) {
                while (true) {
                    int randomIndex = std::rand() % drugDatabase.DrugsInfo.size();
                    auto it = drugDatabase.DrugsInfo.begin();
                    std::advance(it, randomIndex);
                    if (addedDrugs.find(it->second.Name) == addedDrugs.end()) {  // Check if the drug is already added
                        addedDrugs.insert(it->second.Name);  // Add the drug to the set
                        drugsAvailable.push_back(it->second);
                        break;
                    }
                }
            }

            for (int i = 0; i < 2; ++i) {
                int randomIndex = std::rand() % drugDatabase.DrugsInfo.size();
                auto it = drugDatabase.DrugsInfo.begin();
                std::advance(it, randomIndex);
                homeDrugNames.push_back(it->second.Name);
            }

            // Pick a random gun shop name
            std::string gunShopName = gunShopNames[std::rand() % gunShopNames.size()];

            CitiesInfo[cityName] = { cityName, cityName, 10, homeDrugNames, gunShopName, drugsAvailable };
        }
    }

    // Function to access city information for a specific city name
    void getCityInfo(const std::string& cityName) {
        bool found = false;
        for (const auto& city : CitiesInfo) {
            std::size_t commaPos = city.first.find(", ");
            if (commaPos != std::string::npos) {
                std::string extractedCityName = city.first.substr(0, commaPos);
                if (extractedCityName == cityName) {
                    found = true;
                    const CityInfo& cityInfo = city.second;
                    std::cout << "City Name: " << cityInfo.FullName << std::endl;
                    std::cout << "Max Drug Count: " << cityInfo.MaxDrugCount << std::endl;
                    std::cout << "Home Drug Names: ";
                    for (const auto& homeDrugName : cityInfo.HomeDrugNames) {
                        std::cout << homeDrugName << ", ";
                    }
                    std::cout << std::endl;
                    std::cout << "Gun Shop Name: " << cityInfo.GunShopName << std::endl;
                    std::cout << "Drugs Available: " << std::endl;
                    for (const auto& drug : cityInfo.Drugs) {
                        std::cout << "  - " << drug.Name << std::endl;
                    }
                    std::cout << std::endl;
                }
            }
        }
        if (!found) {
            std::cout << "City with name " << cityName << " not found." << std::endl;
        }
    }
};

class Gun {
public:
    std::string Name;
    std::string Type;
    int Price;
    int StoppingPower;
    std::string Description;
    std::string History;

    Gun(std::string name, std::string type, int price, int stoppingPower, std::string description, std::string history) {
        Name = name;
        Type = type;
        Price = price;
        StoppingPower = stoppingPower;
        Description = description;
        History = history;
    }
};

class Player {
private:
    

public:

    std::vector<std::string> Clothing;
    City city;
    int Cash;
    std::vector<Drug> Drugs;
    int GameDay;
    std::vector<Gun> Guns;
    std::string Initials;
    int Pockets;

    std::vector<std::string> starterClothes = {
        "Bell-bottom pants",
        "Flannel shirt (buttoned Cholo-style)",
        "\"I'm with Stupid ->\" T-shirt",
        "Over-sized athletic jersey",
        "Pink Floyd T-shirt",
        "Smelly socks",
        "Smelly socks with a hole in them",
        "Terry-cloth bath robe",
        "Underwear, hanging out",
        "Velour track suit",
        "Wife-beater"
    };

    Player() {
        Drugs = {};
        Guns = {};
        Clothing.push_back(getRandomClothing());
        Pockets = 0;
        GameDay = 1;
    }

    int getFreePocketCount() {
        int totalQuantity = getDrugCount();
        return Pockets - totalQuantity;
    }

    int getDrugCount() {
        int totalQuantity = 0;
        for (auto drug : Drugs) {
            totalQuantity += drug.Quantity;
        }
        return totalQuantity;
    }

    std::vector<Gun> getGuns() {
        return Guns;
    }

    void dumpGuns() {
        Guns.clear();
    }

    bool addGun(Gun gun) {
        if (Guns.size() >= 2) {
            // Handle message for too many guns
            return false;
        }
        Guns.push_back(gun);
        return true;
    }

    bool addGun(Gun gun, bool silent) {
        // Implement addGun method with silent parameter
        return false;
    }

    // Implement other methods...

    void displayPlayer() const {
        std::cout << "Player Information:" << std::endl;
        std::cout << "-------------------\n" << std::endl;
        std::cout << "Clothing:\n" << std::endl;
        for (const auto& item : Clothing) {
            std::cout << "- " << item << "\n" << std::endl;
        }
        std::cout << "Pockets: " << 99 << " free pockets" << std::endl;
        std::cout << "Drugs: " << 0 << " total quantity" << std::endl;
        std::cout << "Guns: " << Guns.size() << " total guns" << std::endl;
        std::cout << "Game Day: " << GameDay << "" << std::endl;
    }

private:
    std::string getRandomClothing() {
        std::srand(static_cast<unsigned int>(std::time(0)));
        int randomIndex = std::rand() % starterClothes.size();
        return starterClothes[randomIndex];
    };
};

void WriteCentered(const std::string& text, int width) {
    int padding = width - text.length();
    int leftPadding = padding / 2;
    int rightPadding = padding - leftPadding;

    // Print left padding
    for (int i = 0; i < leftPadding; ++i) {
        std::cout << " ";
    }

    // Print text
    std::cout << text;

    // Print right padding
    for (int i = 0; i < rightPadding; ++i) {
        std::cout << " ";
    }

    std::cout << std::endl;
}

char ShowMainMenu(Player& player) {

    std::cout << std::endl;

    // Display Inventory
    int columnWidth = 40;

    std::vector<std::string> gunEntries;

    std::vector<std::string> otherInventory = {"Bell-Bottom Pants"};
    otherInventory.insert(otherInventory.end(), gunEntries.begin(), gunEntries.end());

    WriteCentered("Your drugs:", columnWidth);
    WriteCentered("Other Inventory:", columnWidth);

    int maxCount = (player.Drugs.size() > otherInventory.size()) ? player.Drugs.size() : otherInventory.size();

    for (int i = 0; i < maxCount; ++i) {
        std::string dispDrug = "· You have 0 marijuanas.";
        std::string dispOtherInventory = (i < otherInventory.size()) ? "· " + otherInventory[i] : (i == 0) ? "· You are naked." : "";
        WriteCentered(dispDrug, columnWidth);
        WriteCentered(dispOtherInventory, columnWidth);
    }

    std::cout << std::endl;

    // Display menu options
    std::cout << "[B]uy drugs" << std::endl;
    std::cout << "[S]ell drugs" << std::endl;
    std::cout << "[F]lush drugs" << std::endl;
    std::cout << std::endl;

    //if (player.HasGunShop()) {
    //    std::cout << "[G]un shop" << std::endl;
    //    std::cout << std::endl;
    //}

    std::cout << "[J]et to another city" << std::endl;
    std::cout << "[D]rug-o-pedia" << std::endl;
    std::cout << std::endl;
    std::cout << "[Q]uit" << std::endl;
    std::cout << "[?]Help" << std::endl;
    std::cout << std::endl;
    std::cout << "What now, boss? ";

    // Wait for user input
    char choice;
    std::vector<char> choices = { 'B', 'S', 'F', 'J', 'Q', '?', 'D' };
    //if (player.HasGunShop()) {
    //    choices.push_back('G');
    //}
    std::cin >> choice;

    while (std::find(choices.begin(), choices.end(), choice) == choices.end()) {
        std::cin >> choice;
    }

    return choice;
}

void messageLoop() {
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        if (msg.message == WM_KEYDOWN) {
            int keyCode = static_cast<int>(msg.wParam);
            // Handle the key press, keyCode contains the key code
            std::cout << "Key pressed: " << keyCode << std::endl;
        }
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

int main() {
    Player player;
    player.city;

    // messageLoop();

    char userChoice = ShowMainMenu(player);
    

    // Handle user choice

    return 0;
}
 