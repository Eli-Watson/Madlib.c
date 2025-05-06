// words.c 
// database from witch the program gets its options

#include "words.h"

char *adj[] = {
    "good",        "new",       "first",       "last",      "long",
    "great",       "little",    "own",         "other",     "old",
    "right",       "big",       "high",        "different", "small",
    "large",       "next",      "early",       "young",     "important",
    "few",         "public",    "bad",         "same",      "able",
    "happy",       "clear",     "whole",       "easy",      "strong",
    "free",        "true",      "full",        "special",   "hard",
    "simple",      "cold",      "real",        "available", "likely",
    "short",       "single",    "medical",     "current",   "wrong",
    "private",     "past",      "foreign",     "fine",      "common",
    "poor",        "natural",   "significant", "similar",   "hot",
    "dead",        "central",   "nice",        "final",     "main",
    "successful",  "serious",   "ready",       "green",     "blue",
    "interesting", "beautiful", "huge",        "popular",   "traditional",
    "cultural",    "rich",      "famous",      "basic",     "aware",
    "heavy",       "valuable",  "modern",      "dark",      "various",
    "entire",      "fast",      "close",       "quiet",     "soft",
    "clean",       "warm",      "fresh",       "sweet",     "cool",
    "funny",       "friendly",  "crazy",       "dangerous", "tall",
    "smart",       "cute",      "lazy",        "loud",      "mean"};

char *verb[] = {
    "running",   "jumping",   "dancing",    "singing",    "laughing",
    "eating",    "sleeping",  "swimming",   "drinking",   "screaming",
    "climbing",  "flying",    "crawling",   "hiding",     "barking",
    "meowing",   "farting",   "burping",    "whistling",  "snoring",
    "kicking",   "hugging",   "licking",    "spitting",   "grinning",
    "skipping",  "sliding",   "falling",    "bouncing",   "twirling",
    "painting",  "drawing",   "writing",    "typing",     "racing",
    "chasing",   "picking",   "pushing",    "pulling",    "tickling",
    "shouting",  "crying",    "begging",    "juggling",   "jogging",
    "punching",  "sneezing",  "sniffing",   "blinking",   "blushing",
    "shopping",  "cooking",   "baking",     "burning",    "digging",
    "splashing", "stomping",  "spinning",   "winking",    "cheering",
    "cleaning",  "fighting",  "flipping",   "grabbing",   "napping",
    "ripping",   "roaring",   "swinging",   "tapping",    "tossing",
    "typing",    "whining",   "wiggling",   "yawning",    "zipping",
    "zooming",   "clapping",  "decorating", "drooling",   "escaping",
    "freezing",  "giggling",  "glowing",    "growling",   "hammering",
    "howling",   "knitting",  "munching",   "painting",   "planting",
    "plotting",  "pranking",  "scooting",   "scribbling", "scratching",
    "snacking",  "snuggling", "sticking",   "stumbling",  "yelling"};

char *noun[] = {
    "banana",      "toilet",      "unicorn",     "dinosaur",    "pirate",
    "zombie",      "monkey",      "robot",       "pickle",      "pumpkin",
    "wig",         "spaceship",   "underwear",   "sock",        "alien",
    "kangaroo",    "slime",       "bubble",      "hamster",     "pogo stick",
    "marshmallow", "toaster",     "taco",        "spoon",       "jellybean",
    "cookie",      "hamburger",   "cactus",      "lava lamp",   "penguin",
    "chair",       "waffle",      "suitcase",    "ice cream",   "dragon",
    "balloon",     "trombone",    "diaper",      "whale",       "burrito",
    "ghost",       "ninja",       "fart",        "mud puddle",  "giraffe",
    "shampoo",     "snowman",     "noodle",      "cupcake",     "bicycle",
    "lollipop",    "sock puppet", "moose",       "hedgehog",    "octopus",
    "snail",       "trombone",    "glue stick",  "donut",       "muffin",
    "clown",       "yeti",        "thumbtack",   "popcorn",     "meatball",
    "spatula",     "eyeball",     "broomstick",  "banana peel", "fuzzy hat",
    "cereal box",  "ice cube",    "rubber duck", "tissue",      "cheeseburger",
    "sandwich",    "backpack",    "beanbag",     "toothbrush",  "keytar",
    "squirrel",    "lawn gnome",  "snow globe",  "pizza",       "slipper",
    "toy car",     "sunglasses",  "tutu",        "fingernail",  "scooter",
    "tooth",       "pillow",      "lamp",        "book",        "tv remote",
    "carrot",      "hat",         "cloud",       "button",      "sock drawer"};

int num[] = {
    0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    33,    37,    42,    50,    64,    69,    72,    77,    81,
    88,    90,    99,    100,   101,   111,   123,   144,   150,   172,
    200,   222,   256,   300,   314,   333,   360,   404,   420,   444,
    500,   512,   555,   600,   666,   700,   720,   777,   800,   808,
    888,   900,   911,   999,   1000,  1234,  1337,  1500,  2000,  2020,
    2468,  3000,  3333,  4000,  4321,  5000,  6000,  7000,  8008,  9000,
    10000, 12345, 22222, 31415, 42000, 50000, 60000, 65535, 70000, 99999};

char *color[] = {"red", "blue", "green", "yellow", "purple", "orange", "pink", "black", "white", "gray",
    "brown", "turquoise", "teal", "lime", "magenta", "maroon", "navy", "olive", "peach", "lavender",
    "gold", "silver", "bronze", "aqua", "beige", "cyan", "coral", "plum", "mint", "indigo",
    "tan", "violet", "amber", "ivory", "charcoal", "salmon", "cherry", "bubblegum", "sky blue", "neon green",
    "electric blue", "lemon yellow", "hot pink", "forest green", "fire engine red", "midnight blue", "mustard", "rust", "periwinkle", "seafoam",
    "copper", "burgundy", "eggplant", "snow white", "ash gray", "blush", "dusty rose", "sunset orange", "cloud gray", "chocolate brown",
    "grape", "banana yellow", "apple red", "watermelon pink", "cantaloupe", "cotton candy", "lime green", "mud brown", "sky gray", "minty fresh",
    "laser lemon", "blueberry", "raspberry", "blackberry", "cranberry", "peacock blue", "steel blue", "neon pink", "glitter gold", "frost white",
    "unicorn sparkle", "dragonfire red", "swamp green", "zombie gray", "wizard purple", "nuclear orange", "moonlight silver", "sunburn red", "ghost white", "pumpkin orange",
    "owl feather gray", "toxic green", "candy corn yellow", "galaxy purple", "space black", "lava red", "bubblegum blue", "rainbow", "slime green", "mud puddle brown"
};
