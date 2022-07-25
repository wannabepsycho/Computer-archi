#include<iostream>
using namespace std;
void main_screen()
{
	cout<<"\t\t\t  NOKIA\n";
	cout<<"\t\t#########################\n";
	cout<<"\t\t#\t\t\t#\n\t\t# ##################### # \t PRESS 1 twice for '#' , thrice for '*' and four times for '+'\n";
	cout<<"\t\t# # \t\t      # # \t PRESS 2 twice for 'a' , thrice for 'b' and four times for 'c'\n";
	cout<<"\t\t# # \t\t      # # \t PRESS 3 twice for 'd' , thrice for 'e' and four times for 'f'\n";
	cout<<"\t\t# # \t\t      # # \t PRESS 4 twice for 'g' , thrice for 'h' and four times for 'i'\n";
	cout<<"\t\t# # \t\t      # # \t PRESS 5 twice for 'j' , thrice for 'k' and four times for 'l'\n";
	cout<<"\t\t# # \t\t      # # \t PRESS 6 twice for 'm' , thrice for 'n' and four times for 'o'\n";
	cout<<"\t\t# ##################### # \t PRESS 7 twice for 'p' , thrice for 'q' and four times for 'r'\n";
	cout<<"\t\t#\t\t\t# \t PRESS 8 twice for 's' , thrice for 't' , four times for 'u' and\n";
	cout<<"\t\t#\t\t\t# \t five times for 'v'\n";
	cout<<"\t\t#\t\t\t# \t PRESS 9 twice for 'w' , thrice for 'x' and four times for 'y' and\n";
	cout<<"\t\t#   1\t    2\t    3\t# \t five times for 'z'\n";
	cout<<"\t\t#\t\t\t# \t PRESS 0 once for '0'\n";
	cout<<"\t\t#   4\t    5\t    6\t#\n\t\t#\t\t\t#\n";
	cout<<"\t\t#   7\t    8\t    9\t#\n\t\t#\t\t\t#\n";
	cout<<"\t\t#    \t    0\t     \t#\n\t\t#\t\t\t#\n";
	cout<<"\t\t#########################\n";
	
}
void checkforhit()
{
	printf("Enter what you want to type:");
	int press;
	scanf("%d",&press);
	switch(press)
	{
		case 1:
			printf("1");
			break;
		case 11:
			printf("#");
			break;
		case 111:
			printf("*");
			break;
		case 1111:
			printf("+");
			break;
		case 2:
			printf("2");
			break;
		case 22:
			printf("a");
			break;
		case 222:
			printf("b");
			break;
		case 2222:
			printf("c");
			break;
		case 3:
			printf("3");
			break;
		case 33:
			printf("d");
			break;
		case 333:
			printf("e");
			break;
		case 3333:
			printf("f");
			break;
		case 4:
			printf("4");
			break;
		case 44:
			printf("g");
			break;
		case 444:
			printf("h");
			break;
		case 4444:
			printf("i");
			break;
		case 5:
			printf("5");
			break;
		case 55:
			printf("j");
			break;
		case 555:
			printf("k");
			break;
		case 5555:
			printf("l");
			break;
		case 6:
			printf("6");
			break;
		case 66:
			printf("m");
			break;
		case 666:
			printf("n");
			break;
		case 6666:
			printf("o");
			break;	
		case 7:
			printf("7");
		case 77:
			printf("p");
			break;
		case 777:
			printf("q");
			break;
		case 7777:
			printf("r");
			break;
		case 8:
			printf("8");
			break;
		case 88:
			printf("s");
			break;
		case 888:
			printf("t");
			break;
		case 8888:
			printf("u");
			break;
		case 88888:
			printf("v");
			break;
		case 9:
			printf("9");
			break;
		case 99:
			printf("w");
			break;
		case 999:
			printf("x");
			break;
		case 9999:
			printf("y");
			break;
		case 99999:
			printf("z");
			break;
		case 0:
			printf("0");
			break;
	}
}
int main()
{
	main_screen();
	checkforhit();
	return 0;
}
