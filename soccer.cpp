#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
#include<string>

using namespace std;
class Team
{
	public:
	string teamName;
	string toUpper;
	int pts,game,win,lose,tie,goalsc,goalag;
	Team(string s)
	{
		teamName=s;
		transform(s.begin(),s.end(),toUpper.begin(), ::toupper);
		pts=game=win=lose=tie=goalsc=goalag=0;
	}
	void updateInfo(string s,int gs,int ga)
	{
		if(gs>ga)
		{
			pts+=3;
			win++;
		}
		else if(gs==ga)
		{
			pts+=1;
			tie++;
		}
		else
			lose++;
			
		goalsc+=gs;
		goalag+=ga;
	}
	
};
bool compareTeams(const Team & t1, const Team & t2)
{
	if(t1.pts!=t2.pts)
		return t1.pts>t2.pts;
	if(t1.win!=t2.win)
		return t1.win>t2.win;
	if((t1.goalsc-t1.goalag)!=(t2.goalsc-t2.goalag))
		return ((t1.goalsc-t1.goalag)>(t2.goalsc-t2.goalag));
	if(t1.game!=t2.game)
		return t1.game<t2.game;
	
	return t1.toUpper<t2.toUpper;
}

int main()
{
	int N;
	cin>>N;
	cin.ignore(1000,'\n');
	for (int i=0;i<N;i++)
	{
		string tn,team1,team2;
		int T,G,goal1,goal2;
		vector<Team> Teams;
		getline(cin,tn);
		//cin.ignore(1000,'\n');
		//cout<<tn;
		cin>>T;
		cin.ignore(1000,'\n');
		//cout<<T;
		for(int j=0;j<T;j++)
		{
			string ss;
			getline(cin,ss);
			//cin.ignore(1000,'\n');
			Teams.push_back(Team(ss));
		}
		//cout<<i<<endl;
		cin>>G;
		cin.ignore(1000,'\n');
		for(int k=0;k<G;k++)
		{
			getline(cin,team1,'#');
			cin>>goal1;
			cin.ignore(10,'@');
			cin>>goal2;
			cin.ignore(10,'#');
			getline(cin,team2);
			int c=0;
			for(vector<Team> :: iterator ii=Teams.begin();ii!=Teams.end();++ii)
			{
				if(ii->teamName==team1)
				{
					ii->updateInfo(team1,goal1,goal2);
					++c;
					//cout<<team1<<"-->"<<team2<<endl;
				}
				if(ii->teamName==team2)
				{
					ii->updateInfo(team2,goal2,goal1);
					++c;
				}
				if(c==2) break;
				
			}
			
		}
		sort(Teams.begin(),Teams.end(),compareTeams);
		cout<<tn<<endl;
		int i=0;
		for(vector<Team> :: iterator ii=Teams.begin();ii!=Teams.end();++ii)
		{
			i++;
			cout<<i<<") "<<ii->teamName<<" "<<ii->pts<<"p, "<<ii->game<<"p "<<"("<<ii->win<<"-"<<ii->tie<<"-"<<ii->lose<<"), "<<(ii->goalsc - ii->goalag)<<"gd "<<"("<<ii->goalsc<<"-"<<ii->goalag<<")"<<endl;
		}
		if(N>0)
			cout<<endl;
	}
	return 0;
}
