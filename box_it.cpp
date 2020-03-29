#include<bits/stdc++.h>
#include <iostream>

using namespace std;

class Box{
private:
	int l, b, h;
public:
	Box(){
		this->l = 0;
		this->b = 0;
		this->h = 0;
	}
	Box(int length, int breadth, int height){
                this->l = length;
                this->b = breadth;
                this->h = height;
        }
	Box(const Box& other){
                this->l = other.getLength();
                this->b = other.getBreadth();
                this->h = other.getHeight();
        }
	
	const int getLength() const{
		return this->l;
	}
	const int getBreadth() const{
                return this->b;
        }
	const int getHeight() const{
                return this->h;
        }
	const long long CalculateVolume() const{
		long long res = this->l;
		return res * this->b * this->h;
	}
	bool operator<(const Box& other){
		if(this->l == other.getLength()){
			if(this->b == other.getBreadth()){
				return this->h < other.getHeight();
			}else{
				return this->b < other.getBreadth();
			}
		}else{
			return this->l < other.getLength();
		}
	}
};

ostream& operator<<(ostream& os, const Box& b){
	os << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
	return os;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
