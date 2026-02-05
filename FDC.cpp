#include <iostream>
#include <string>
#include <cstdlib> // rand, srand
#include <ctime>   // time
using namespace std;

int main() {
    printHeader("Test")
    srand((unsigned)time(0));
    const int MAX = 50;

    // ===== ACTION (15) =====
    string actionTitle[MAX] = {
        "Extraction",
        "The Old Guard",
        "6 Underground",
        "John Wick",
        "Mad Max: Fury Road",
        "The Gray Man",
        "The Raid: Redemption",
        "Mission: Impossible - Fallout",
        "Edge of Tomorrow",
        "Taken",
        "Skyfall",
        "Kingsman: The Secret Service",
        "Atomic Blonde",
        "Top Gun: Maverick",
        "The Equalizer"
    };
    string actionDesc[MAX] = {
        "A mercenary is hired to rescue a kidnapped boy in a deadly city.",
        "Immortal warriors fight to protect their secret while saving the world.",
        "A team of vigilantes takes down criminals in explosive missions.",
        "A retired hitman returns for revenge after losing everything.",
        "Survivors battle across the desert in a high-speed chase for freedom.",
        "A CIA operative becomes the target of a global manhunt full of brutal fights.",
        "An elite team battles through a building filled with criminals to survive.",
        "An agent races against time to stop a deadly plan with nonstop action set pieces.",
        "A soldier relives the same battle day, learning to win one fight at a time.",
        "A former agent uses his skills to rescue his kidnapped daughter abroad.",
        "A spy must stop a dangerous threat while dealing with betrayal and secrets.",
        "A recruit joins a secret agency and faces a stylish, high-stakes mission.",
        "An undercover assassin uncovers a conspiracy and fights her way to the truth.",
        "A veteran pilot returns to train new recruits and faces a personal challenge.",
        "A quiet man with a dark past takes justice into his own hands to protect others."
    };
    int actionCount = 15;

    // ===== COMEDY (15) =====
    string comedyTitle[MAX] = {
        "Murder Mystery",
        "We’re the Millers",
        "The Hangover",
        "Yes Man",
        "Central Intelligence",
        "Game Night",
        "Superbad",
        "21 Jump Street",
        "The Nice Guys",
        "Step Brothers",
        "Bridesmaids",
        "Anchorman: The Legend of Ron Burgundy",
        "Jumanji: Welcome to the Jungle",
        "The 40-Year-Old Virgin",
        "Knives Out"
    };
    string comedyDesc[MAX] = {
        "A vacation turns into a wild crime case with nonstop jokes.",
        "A fake family plan creates chaos during a risky road trip.",
        "A bachelor party goes wrong and no one remembers what happened.",
        "A man’s life changes when he says 'yes' to everything.",
        "An old classmate pulls a regular guy into a funny spy adventure.",
        "Friends play a game night that turns into a real-life mystery.",
        "Teen friends chase one crazy night before graduation.",
        "Two cops go undercover at a school with hilarious results.",
        "A private investigator duo stumbles into a funny crime case.",
        "Two grown men act like kids and destroy everything around them.",
        "Bridesmaids compete and panic while preparing for a wedding.",
        "A news anchor’s ego creates ridiculous moments and chaos.",
        "A group enters a game world and survives funny dangerous missions.",
        "A man tries dating again with awkward and hilarious situations.",
        "A murder investigation becomes clever, dramatic, and very funny."
    };
    int comedyCount = 15;

    // ===== DRAMA (15) =====
    string dramaTitle[MAX] = {
        "The Pursuit of Happyness",
        "A Star Is Born",
        "The Irishman",
        "Marriage Story",
        "The Blind Side",
        "The Shawshank Redemption",
        "Forrest Gump",
        "The Social Network",
        "Moonlight",
        "Whiplash",
        "The Green Mile",
        "Manchester by the Sea",
        "The Pianist",
        "12 Years a Slave",
        "The Revenant"
    };
    string dramaDesc[MAX] = {
        "A father struggles to build a better life while raising his son.",
        "A musician rises to fame while a relationship faces pressure.",
        "A man looks back on a life tied to crime and loyalty.",
        "A couple faces heartbreak and growth during a difficult divorce.",
        "A family changes a teenager’s life, and he changes theirs too.",
        "A prisoner holds onto hope while surviving a harsh prison system.",
        "A kind man lives through major events while searching for love.",
        "The rise of a social media empire creates friendship and betrayal.",
        "A young man grows up while facing identity and family struggles.",
        "A drummer pushes himself under a harsh teacher to reach greatness.",
        "A guard discovers a prisoner with a mysterious gift.",
        "A man returns home and struggles with grief and responsibility.",
        "A musician survives war by using talent and determination.",
        "A free man is forced into slavery and fights to survive.",
        "A hunter fights nature and betrayal to stay alive."
    };
    int dramaCount = 15;

    // ===== HORROR (15) =====
    string horrorTitle[MAX] = {
        "The Conjuring",
        "A Quiet Place",
        "Insidious",
        "The Nun",
        "It",
        "Hereditary",
        "The Babadook",
        "Sinister",
        "Get Out",
        "The Ring",
        "Paranormal Activity",
        "It Follows",
        "The Witch",
        "Lights Out",
        "Train to Busan"
    };
    string horrorDesc[MAX] = {
        "Paranormal investigators face a terrifying case in a haunted home.",
        "A family must stay silent to survive creatures that hunt by sound.",
        "A family discovers dark forces connected to their child’s nightmares.",
        "A demonic presence terrorizes a monastery with chilling secrets.",
        "A group of kids faces an evil that returns to their town.",
        "A family tragedy reveals a disturbing and supernatural secret.",
        "A mother and son face a monster that feeds on fear.",
        "A writer finds footage that reveals a deadly evil presence.",
        "A man visits his girlfriend’s family and uncovers a nightmare.",
        "A cursed videotape brings terror with a deadly countdown.",
        "A home is haunted, and the evidence becomes terrifyingly real.",
        "A strange curse follows whoever becomes the next target.",
        "A family in the wild faces suspicion, fear, and dark forces.",
        "A dark spirit appears when the lights go out.",
        "A zombie outbreak traps passengers on a speeding train."
    };
    int horrorCount = 15;

    // ===== SCI-FI (15) =====
    string scifiTitle[MAX] = {
        "Inception",
        "Interstellar",
        "The Matrix",
        "Arrival",
        "Blade Runner 2049",
        "Dune",
        "Ex Machina",
        "Gravity",
        "The Martian",
        "Minority Report",
        "Ready Player One",
        "Elysium",
        "District 9",
        "Tenet",
        "Looper"
    };
    string scifiDesc[MAX] = {
        "A thief enters dreams to steal secrets—and must plant an idea instead.",
        "Explorers travel through space to save humanity’s future.",
        "A hacker learns reality is a simulation and fights to break free.",
        "A linguist tries to communicate with aliens to prevent a global crisis.",
        "A blade runner uncovers a secret that could change everything.",
        "A young leader rises on a desert planet filled with danger and prophecy.",
        "A programmer tests an AI and questions what is real.",
        "Astronauts struggle to survive after disaster strikes in space.",
        "A stranded astronaut uses science to survive on Mars.",
        "Police use future predictions to stop crimes before they happen.",
        "Players escape into a virtual world hiding a powerful secret.",
        "A divided future society forces one man to fight for a better life.",
        "Aliens are trapped on Earth, creating conflict and secrets.",
        "A spy mission bends time and reality to stop a global threat.",
        "A hitman faces time travel and meets his future self."
    };
    int scifiCount = 15;

    // ===== ROMANCE (15) =====
    string romanceTitle[MAX] = {
        "The Notebook",
        "La La Land",
        "Me Before You",
        "To All the Boys I’ve Loved Before",
        "Crazy Rich Asians",
        "Pride and Prejudice",
        "Titanic",
        "Before Sunrise",
        "The Fault in Our Stars",
        "Notting Hill",
        "About Time",
        "10 Things I Hate About You",
        "The Proposal",
        "Sleepless in Seattle",
        "Pretty Woman"
    };
    string romanceDesc[MAX] = {
        "A lifelong love story tested by time, class, and memory.",
        "Two dreamers fall in love while chasing success in Los Angeles.",
        "A friendship becomes love and changes two lives forever.",
        "A teen’s secret letters lead to unexpected romance and drama.",
        "A woman meets her boyfriend’s wealthy family—with surprises.",
        "Love grows slowly as pride and misunderstandings stand in the way.",
        "A romance blooms aboard a doomed ship with unforgettable moments.",
        "Two strangers share one night that changes their lives.",
        "Two teens fall in love while facing a difficult illness.",
        "A bookstore owner falls for a famous actress in a sweet romance.",
        "A man uses time travel to fix mistakes and protect love.",
        "A fake dating plan turns into real feelings and chaos.",
        "A fake engagement leads to real emotions and funny problems.",
        "Two people connect through a child’s wish and fate.",
        "A rich man’s world changes when he meets a woman with big dreams."
    };
    int romanceCount = 15;

    // ===== ANIMATION (15) =====
    string animationTitle[MAX] = {
        "Spider-Man: Into the Spider-Verse",
        "Toy Story",
        "Frozen",
        "Shrek",
        "How to Train Your Dragon",
        "Coco",
        "Finding Nemo",
        "Up",
        "Inside Out",
        "Moana",
        "The Incredibles",
        "Ratatouille",
        "Kung Fu Panda",
        "Monsters, Inc.",
        "The Lion King"
    };
    string animationDesc[MAX] = {
        "A teen becomes Spider-Man and meets heroes from other universes.",
        "Toys come alive and go on adventures when humans aren’t watching.",
        "Two sisters face magic, fear, and love to save their kingdom.",
        "An ogre and a donkey go on a hilarious quest to rescue a princess.",
        "A boy befriends a dragon and changes his world forever.",
        "A boy travels to the land of ancestors to save his family’s music.",
        "A father fish crosses the ocean to find his missing son.",
        "An old man and a kid go on a floating house adventure.",
        "Emotions inside a girl’s mind learn how to work together.",
        "A brave girl sails the ocean to save her people.",
        "A superhero family returns to action while balancing normal life.",
        "A rat dreams of being a chef in Paris and proves everyone wrong.",
        "A clumsy panda trains to become a true warrior.",
        "Monsters discover laughter is more powerful than fear.",
        "A lion cub learns responsibility and courage after tragedy."
    };
    int animationCount = 15;

    char again = 'y';

    while (again == 'y' || again == 'Y') {
        int choice;
        cout << "\nChoose genre:\n";
        cout << "1. Action\n2. Comedy\n3. Drama\n4. Horror\n5. Sci-Fi\n6. Romance\n7. Animation\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) break;

        cout << "\nRecommended Movie:\n";

        switch (choice) {
            case 1: {
                int r = rand() % actionCount;
                cout << actionTitle[r] << "\n" << actionDesc[r] << "\n";
                break;
            }
            case 2: {
                int r = rand() % comedyCount;
                cout << comedyTitle[r] << "\n" << comedyDesc[r] << "\n";
                break;
            }
            case 3: {
                int r = rand() % dramaCount;
                cout << dramaTitle[r] << "\n" << dramaDesc[r] << "\n";
                break;
            }
            case 4: {
                int r = rand() % horrorCount;
                cout << horrorTitle[r] << "\n" << horrorDesc[r] << "\n";
                break;
            }
            case 5: {
                int r = rand() % scifiCount;
                cout << scifiTitle[r] << "\n" << scifiDesc[r] << "\n";
                break;
            }
            case 6: {
                int r = rand() % romanceCount;
                cout << romanceTitle[r] << "\n" << romanceDesc[r] << "\n";
                break;
            }
            case 7: {
                int r = rand() % animationCount;
                cout << animationTitle[r] << "\n" << animationDesc[r] << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Please enter 0 to 7.\n";
        }

        cout << "\nContinue? (y/n): ";
        cin >> again;
    }

    cout << "\nProgram ended.\n";
    return 0;
}
