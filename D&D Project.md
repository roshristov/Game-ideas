to compile the code, use "cmake -G "MinGW Makefiles" -DQt6_DIR:PATH=C:\Qt\6.5.0\mingw_64\lib\cmake\Qt6 -B .\build\".
then use "mingw32-make.exe" in the 'build' folder,
then use ".\Code.exe".

d&d project, ideas for the code

default language: english, with the idea in mind to have more languages placed in the datebase.
there will ALWAYS be three heroes, no more, no less.
in the making of the heroes, there will be two options: default and custom. 
there will be tips to help the player out to make the right choices.

strength - higher strength, better damage; higher strength, more likely to succeed in physical feats.
dexterity - higher dexterity, better evasion; higher dexterity, better damage with ranged weapons (bows); the higher the dexterity, the faster you act in combat.
constitution - higher constitution, higher health.
inteligence - higher inteligence, better spellcasting ability.
wisdom - higher wisdom, more awareness of the enviroment (can spot traps, hidden foes, or the NPC's intentions).
charisma - higher cahrisma, better speaking skils (lying, intimidating, or persuading).

when there is text written, there should be a program to make the text lower case, so that when searching for key words, the case wouldn't be an issue.

the files that need to be made:

main.cpp - nothing special, just the main function to call all the other files.

text.cpp - will have the UI text elements; also the story and the interactions in the gameplay; will have space for other languages for the future.

ui.cpp - will have the look of the UI.

battle.cpp - the battle system; will have the order of the characters and enemies; will get the data of the players and the enemies.

world.cpp - will have the base of the locations where the characters can go; the locations can be as complex as a town and as simple as a hut in the woods.

interactions.cpp - will include the interaction that the characters will see; can be a shop clerk, a bandit outside of town or a secret door that they have uncovered.

character.cpp - will have the setup for making the characters (will have the base of the classes and the species, and also the process of choosing which points go where); also will be the storage for their stats, health and mana(for magic); will also have the actions that they can make.

inventory.cpp - will store the items that the characters will find.

commands.cpp - will have the names and the purposes of commands. (examples: '-inventory <character-name>' for showing the inventory for that character; '-stats' for showing the stats of the characters; '-help' to show all the commands available;)

dice.cpp - will have the dice rolls; the multipliers and the addition will be called outside of this file; it will be called when necessary.

glossary.cpp - will have all the average stats of the enemies, monsters, people and other creatures and what actions they have; will have a set value that can be randomized for variance.

items.cpp - will have a database for all the items the world and characters will have (like swords, bows, potions, etc.); will have stats tied to those items, like price, damage for swords, and defence for armor.

files to be added if there is time:

time.cpp - will add a day/night cycle; will make the interactions more complex and interesting; it isn't needed for now, but would be cool to have if there is time.

sprites.cpp - will have ASCII drawings of characters and enemies; would be cool to add, but it isn't necessary.



which files will call which files:

main.cpp << ui.cpp + commands.cpp;
battle.cpp << character.cpp + glossary.cpp + dice.cpp;
character.cpp << inventory.cpp + text.cpp;
world.cpp << glossary.cpp + items.cpp + interactions.cpp << text.cpp;
