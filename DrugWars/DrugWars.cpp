#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

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
            DrugsInfo["WD"] = { "Weed", {"Marijuana", "Cannabis", "Pot"},
                                "Cannabis has been used for various purposes for thousands of years. It gained popularity for recreational use in the 20th century.",
                                "Relaxation, euphoria, altered sensory perception.",
                                {10, 100} };
            DrugsInfo["XN"] = { "Xanax", {"Bars", "Benzos", "Zannies"},
                                "Xanax, a benzodiazepine, is prescribed for anxiety. Its recreational use has become a concern due to the risk of dependence.",
                                "Relaxation, sedation, anti-anxiety effects.",
                                {50, 300} };
        }

        // Function to access drug information for a specific drug code
        void getDrugInfo(const std::string& code) {
            system("cls");
            if (DrugsInfo.find(code) != DrugsInfo.end()) {
                DrugInfo drugInfo = DrugsInfo[code];
                std::cout << "Name: " << drugInfo.Name << std::endl;
                std::cout << "Street Names: ";
                for (const auto& streetName : drugInfo.StreetNames) {
                    std::cout << streetName << ", ";
                }
                std::cout << std::endl;
                std::cout << "History: " << drugInfo.History << std::endl;
                std::cout << "Effects: " << drugInfo.Effects << std::endl;
                std::cout << "Price Range: " << drugInfo.PriceRange.first << " - " << drugInfo.PriceRange.second << std::endl;
            }
            else {
                std::cout << "Drug with code " << code << " not found." << std::endl;
            }
        }
    };

    int main() {
        // Create an object of the Drug class
        Drug drug;
        std::string code;
        // Accessing the information for a specific drug code
        std::cout << "Enter the code of a drug: ";
        std::cin >> code;
        
        drug.getDrugInfo(code);

        return 0;
    }

