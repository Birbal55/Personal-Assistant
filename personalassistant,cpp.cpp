#include<bits/stdc++.h>
#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<ctime>

using namespace std;

//function to greet the user according to time 
void greetings()
{
	//current date and time based on your system timezone
	time_t now =time(0);
	tm *time=localtime(&now);
	
	if(time->tm_hour<12)
	{
		cout<<"Good Morning Master Birbal"<<endl;
		string phrase="Good Morning Master Birbal";
		string command="espeak\""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
	}
	else if(time->tm_hour>=12 && time->tm_hour<=16)
	{
		cout<<"Good Afternoon Master Birbal"<<endl;
		string phrase="Good Afternoon Master Birbal";
		string command="espeak\""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
	}
	else if(time->tm_hour>16 && time->tm_hour <24)
	{
		cout<<"Good Evening Master Birbal"<<endl;
		string phrase="Good Evening Master Birbal";
		string command="espeak\""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
	}
}
void datetime()
{
	time_t now=time(0);
	char *dt=ctime(now);
	cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()

{
	system("cls");
	cout<<"\t*************************************PERSONAL ASSISTANT*****************************";
	string password;//to take password
	string command;//to take command from the user
	
	do 
	{
		cout<<"********************************************************"<<endl;
		cout<<"|ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER BIRBAL|"<<endl;
		cout<<"********************************************************"<<endl;
		string phrase="ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER BIRBAL"<<endl;
		string command="espeak\""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
		
		getline(cin,password);
		
		STARTUPINFO startInfo={0};
		PROCESS_INFORMATION processInfo={0};
		
		if(password=="birbal")
		{
			cout<<"\n<****************************************************>\n";
			greetings();
			do
			{
				cout<<"\n<**************************************************>\n";
				cout<<endl<<"How can I heip you Master Birbal...."<<endl<<endl;
				
				string phrase="How can I help you Master Birbal";
				string command="espeak\""+phrase+"\"";
				const char *charCommand.c_str();
				system(charCommand);
				
				cout<<"Enter your question===>";
				getline(cin,command);
				cout<<endl;
				cout<<"Answer to your question is ===>";
				
				if(command=="hello" || command=="hi")
				{
					cout<<"Hello Master Birbal....."<<endl;
				    string phrase="Hello Master Birbal";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
				}
				else if(command=="what is the time")
				{
					
				}
				else if(command=="who are you" || command=="who is speaking")
				{
					cout<<"I am a personal assistant created by Master Birbal"<<endl;
				    string phrase="I am a personal assistant created by Master Birbal";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
				}
				else if(command=="open notepad")
				{
					cout<<"opening notepad"<<endl;
				    string phrase="opening notepad";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
			    	CreateProcess(TEXT("c:\\Windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open writepad")
				{
					cout<<"opening writepad"<<endl;
				    string phrase="opening writepad";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
			    	CreateProcess(TEXT("c:\\Windows\\write.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open Microsoft Excel")
				{
					cout<<"opening Microsoft Excel"<<endl;
				    string phrase="opening Microsoft Excel";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
			    	CreateProcess(TEXT("c:\\Windows\\write.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open Microsoft Word")
				{
					cout<<"opening Microsoft Word"<<endl;
				    string phrase="opening Microsoft Word";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
			    	CreateProcess(TEXT("c:\\Windows\\write.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="open Microsoft Paint")
				{
					cout<<"opening Micrisoft Paint"<<endl;
				    string phrase="opening Microsoft Paint";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
			    	CreateProcess(TEXT("c:\\Windows\\write.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				}
				else if(command=="play music")
				{
					cout<<"playing music now"<<endl;
				    string phrase="playing music now";
			      	string command="espeak\""+phrase+"\"";
					const char *charCommand.c_str();
			    	system(charCommand);
			    	mciSendString("open\"despacito_justin_bieber.mp3\" type mpegvideo alias mp3);
			    	//time t t1-time(0);
					mciSendString("play mp3",NULL,0,NULL);
					CreateProcess(TEXT("c:\\Windows\\write.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
				
					
				}
				 
			}
		}
		
		{
		cout<<"********************************************************"<<endl;
		cout<<"|ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER BIRBAL|"<<endl;
		cout<<"********************************************************"<<endl;
		string phrase="ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER BIRBAL"<<endl;
		string command="espeak\""+phrase+"\"";
		const char *charCommand=command.c_str();
		system(charCommand);
		
			
			}	
	}
}
