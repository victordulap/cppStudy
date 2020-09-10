#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

string digit(char c)
{
	string str;
	switch(c)
	{
		case '0' : { str = ""; break; }
		case '1' : { str = "One"; break; }
		case '2' : { str = "Two"; break; } 
		case '3' : { str = "Three"; break; } 
		case '4' : { str = "Four"; break; } 
		case '5' : { str = "Five"; break; } 
		case '6' : { str = "Six"; break; } 
		case '7' : { str = "Seven"; break; } 
		case '8' : { str = "Eight"; break; } 
		case '9' : { str = "Nine"; break; }   
	}
	return str;
}

int main()
{
	string str = "";
	string strr;
	int len=0;
	int nr;
	
	for(int i=1; i<1000; i++)
	{
		nr = i;
		strr = to_string(nr);
		str = "";
		
		if(strr.length() == 3)
		{
			switch(strr[0])
			{
				case '0' : { str += "Zero"; break; } 
				case '1' : { str += "One"; break; }
				case '2' : { str += "Two"; break; } 
				case '3' : { str += "Three"; break; } 
				case '4' : { str += "Four"; break; } 
				case '5' : { str += "Five"; break; } 
				case '6' : { str += "Six"; break; } 
				case '7' : { str += "Seven"; break; } 
				case '8' : { str += "Eight"; break; } 
				case '9' : { str += "Nine"; break; }  
			}
			str = str + "Hundred";
			if(i%100!=0)
			{ str = str + "And"; }
			
			switch(strr[1])
			{
				case '0' :
				{
					str += digit(strr[2]);
					break; 
				}
				case '1' : 
				{
					switch(stoi(strr.substr(1,2)))
					{
						case 10 : { str += "Ten"; break; }
						case 11 : { str += "Eleven"; break; }
						case 12 : { str += "Twelve"; break; }
						case 13 : { str += "Thirteen"; break; }
						case 14 : { str += "Fourteen"; break; }
						case 15 : { str += "Fifteen"; break; }
						case 16 : { str += "Sixteen"; break; }
						case 17 : { str += "Seventeen"; break; }
						case 18 : { str += "Eighteen"; break; }
						case 19 : { str += "Nineteen"; break; }
					} break; 
				}
				case '2' :
				{
					str += "Twenty";
					str += digit(strr[2]);
					break;	
				}
				case '3' :
				{
					str += "Thirty";
					str += digit(strr[2]);
					break;	
				}
				case '4' :
				{
					str += "Forty";
					str += digit(strr[2]);
					break;	
				}
				case '5' :
				{
					str += "Fifty";
					str += digit(strr[2]);
					break;	
				}
				case '6' :
				{
					str += "Sixty";
					str += digit(strr[2]);
					break;	
				}
				case '7' :
				{
					str += "Seventy";
					str += digit(strr[2]);
					break;	
				}
				case '8' :
				{
					str += "Eighty";
					str += digit(strr[2]);
					break;	
				}
				case '9' :
				{
					str += "Ninety";
					str += digit(strr[2]);
					break;	
				}
			}	
		}
		
		else if(strr.length() == 2)
		{
			switch(strr[0])
			{
				case '0' :
				{
					str += digit(strr[1]);
					break; 
				}	
				case '1' : 
				{
					switch(stoi(strr))
					{
						case 10 : { str += "Ten"; break; }
						case 11 : { str += "Eleven"; break; }
						case 12 : { str += "Twelve"; break; }
						case 13 : { str += "Thirteen"; break; }
						case 14 : { str += "Fourteen"; break; }
						case 15 : { str += "Fifteen"; break; }
						case 16 : { str += "Sixteen"; break; }
						case 17 : { str += "Seventeen"; break; }
						case 18 : { str += "Eighteen"; break; }
						case 19 : { str += "Nineteen"; break; }
					} break; 
				}
				case '2' :
				{
					str += "Twenty";
					str += digit(strr[1]);
					break;	
				}
				case '3' :
				{
					str += "Thirty";
					str += digit(strr[1]);
					break;	
				}
				case '4' :
				{
					str += "Forty";
					str += digit(strr[1]);
					break;	
				}
				case '5' :
				{
					str += "Fifty";
					str += digit(strr[1]);
					break;	
				}
				case '6' :
				{
					str += "Sixty";
					str += digit(strr[1]);
					break;	
				}
				case '7' :
				{
					str += "Seventy";
					str += digit(strr[1]);
					break;	
				}
				case '8' :
				{
					str += "Eighty";
					str += digit(strr[1]);
					break;	
				}
				case '9' :
				{
					str += "Ninety";
					str += digit(strr[1]);
					break;	
				}
			}
		}
		else if(strr.length() == 1)
		{
			switch(nr)
			{
				case 0 : { str = "Zero"; break; } 
				case 1 : { str = "One"; break; }
				case 2 : { str = "Two"; break; } 
				case 3 : { str = "Three"; break; } 
				case 4 : { str = "Four"; break; } 
				case 5 : { str = "Five"; break; } 
				case 6 : { str = "Six"; break; } 
				case 7 : { str = "Seven"; break; } 
				case 8 : { str = "Eight"; break; } 
				case 9 : { str = "Nine"; break; }  
			}
		}
		len += str.length();
		cout<<i<<". "<<str<<endl;
		//system("pause");
	}
	str = "OneThousand";
	len += str.length();
	cout << "\nlength = " << len;
	
	return 0;
}
