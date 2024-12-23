#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	
	int answer;
	char question[200], opt = 'y';
	
	srand (time(NULL));
	
	while (opt == 'y'){
		printf ("Ask the magic ball, and thou shalt receive thy truth!\n");
		getchar();
		fgets (question, 200, stdin);
	
		answer = rand () % 20;
	
		switch (answer){
			case 0:
				printf ("Yea, but only if thou dost promise to wear matching socks.\n");
				break;
			case 1:
				printf ("Ask again when Mercury no longer doth move backward.\n");
				break;
			case 2:
				printf ("Mine sources sayeth: probably not, yet who am I to judge?\n");
				break;
			case 3:
				printf ("It is certain, but the heavens still ponder how.\n");
				break;
			case 4:
				printf ("Yea, but first thou must answer three riddles.\n");
				break;
			case 5:
				printf ("Thou mayst not rely on it, unless thou hast a pet llama.\n");
				break;
			case 6:
				printf ("The stars are aligned... but they seem confused.\n");
				break;
			case 7:
				printf ("Mine crystall ball says: Who cares?\n");
				break;
			case 8:
				printf ("The signs point to yea... if thou canst solve a Rubik's Cube first\n");
				break;
			case 9:
				printf ("Outlook not so good. But perchance thou needest a nap.\n");
				break;
			case 10:
				printf ("Thou mayst rely on it, but first thou must have breakfast.\n");
				break;
			case 11:
				printf ("The answer be as clear as a foggy day in London.\n");
				break;
			case 12:
				printf ("Yea, but beware the wrath of thine Wi-Fi signal.\n");
				break;
			case 13:
				printf ("Outlook unclear, but thy lunch doth look promising.\n");
				break;
			case 14:
				printf ("Thou mayst not count on it, yet I feel generous this day.\n");
				break;
			case 15:
				printf ("Yea, but a dragon may appear first\n");
				break;
			case 16:
				printf ("Indeed, but only if thou dost believe in spaghetti monsters.\n");
				break;
			case 17:
				printf ("It is decided, but the heavens say 'try again' anyway.\n");
				break;
			case 18:
				printf ("Yea, but thou shalt need a time machine to make it so.\n");
				break;
			case 19:
				printf ("Mine intuition saith yea, but mine circuits are confused.\n");
				break;
	}
	
	printf ("\n\nWilt thou ask again? (y/n)");
	scanf (" %c", &opt);
	system ("cls");
	}
	
	
	return 0;
}
