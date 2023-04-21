#include <iostream>

int twoPower(unsigned int n)
{
	int out = 1;
	for(int i=0; i<n; i++)
	{
		out*=2;
	}
	return out;
}
void printNet(char net, int one)
{
	switch(net)
	{
		case 'A':
		{
			int dots=1;
			std::cout << "11111111.";
			while(one>=8)
			{
				one-=8;
				std::cout << "11111111.";
				dots++;
			}
			for(int i=0;i<one;i++)
			{
				std::cout<<"1";
			}
			for(int i=0;i<8-one;i++)
			{
				std::cout<<"0";
			}
			while(dots<3)
			{
				std::cout << ".00000000";
				dots++;
			}
			std::cout << std::endl;
			if(one<8) std::cout << "0." << twoPower(8-one) << ".0.1" << std::endl;
			else if(one<16) std::cout << "0.0." << twoPower(16-one) << ".1" << std::endl;
			else std::cout << "0.0.0." << twoPower(24-one)+1 << std::endl;

			if(one<8) std::cout << "127." << 255-twoPower(8-one) << "255.254" << std::endl;
			else if(one>16) std::cout << "127.255." << 255-twoPower(16-one) << ".254" << std::endl;
			else std::cout << "127.255.255." << 254-twoPower(24-one) << std::endl;
			break;
		}
		case 'B':
		{
			int dots=2;
			std::cout << "11111111.11111111.";
			while(one>=8)
			{
				one-=8;
				std::cout << "11111111.";
				dots++;
			}
			for(int i=0;i<one;i++)
			{
				std::cout<<"1";
			}
			for(int i=0;i<8-one;i++)
			{
				std::cout<<"0";
			}
			while(dots<3)
			{
				std::cout << ".00000000";
				dots++;
			}
			std::cout << std::endl;
			if(one<8) std::cout << "128.0." << twoPower(8-one) << ".1" << std::endl;
			else std::cout << "128.0.0." << twoPower(16-one)+1 << std::endl;

			if(one<16) std::cout << "191.255." << 255-twoPower(8-one) << ".254" << std::endl;
			else std::cout << "191.255.255." << 254-twoPower(16-one) << std::endl;
			break;
		}
		case 'C':
		{
			std::cout << "11111111.11111111.11111111.";
			for(int i=0;i<one;i++)
			{
				std::cout<<"1";
			}
			for(int i=0;i<8-one;i++)
			{
				std::cout<<"0";
			}
			std::cout << std::endl;
			std::cout << "192.0.0." << 1+twoPower(8-one) << std::endl;
			std::cout << "223.255.255." << 254-twoPower(8-one) << std::endl;
			break;
		}
	}
}
int powerof2(int n)
{
	n+=2;
	int two=1;
	for(unsigned int i=0;i<24;i++)
	{
		if(n-two<=0)
		{
			return i;
		}
		two*=2;
	}
	return -1;
}

int main()
{
    char NetClass;
    int subnetCount, machineCount;
    std::cout << "enter net class(A,B or C): ";
    std::cin >> NetClass;
    std::cout << "enter subnet quantity: ";
    std::cin >> subnetCount;
    std::cout << "enter max computer quantity: ";
    std::cin >> machineCount;
    
	int free;
	switch(NetClass)
	{
		case 'A':
		{
			free = 24;
			break;
		}
		case 'B':
		{
			free = 16;
			break;
		}
		case 'C':
		{
			free = 8;
			break;
		}
		default:
		{
			std::cout << "Incorrect net class." << std::endl;
			return 0;
		}
	}
	if(twoPower(free-powerof2(subnetCount))<machineCount)
	{
		std::cout << "Unable to set this configuration of subnets." << std::endl;
		return 0;
	}
	printNet(NetClass, powerof2(subnetCount));
	return 0;
}