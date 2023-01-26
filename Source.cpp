#include <iostream>   
#include <string>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include < windows.h>
#include <locale>

using namespace std;


string Buffer1D;
string Valuse[100];
string ValuseFinal[100];
string ValuseFinal2[100];
string ValuseFinal3[100];
string CompanyValue[100];
int Count = 1;

static const int tablesize = 300;

string Matrix[64][64];

const char * Space;
string DriveE = "E:",DriveF = "F:",DriveC = "C:",DriveD = "D:",DriveG = "G:",DriveA = "A:";
string space = " ",qutation = "\"",semicolon = ";",comma = "'",startBraket = "(",endBraket = ")",Space1 = " ",Space2= " ";	
string number0 = "0",number1 = "1",number2 = "2",number3 = "3",number4 = "4",number5 = "5",number6 = "6",number7 = "7",number8 = "8",number9 = "9";

struct MessageName{
	string Message;
	string Signal1[100];
	string PeridicType;
	string PeridicType2;
	string TX_RX2; 
	string ByteOrder[100];
	string ReciverNode[31];
	string transmiterNode;
	
	long int PeridicValue;
	long int DID;
	long int DLC3;
	short int lenght[100][100];
	int StartBit3[100][100];
	int Count[300];
	MessageName* next;
};

string AllNodes[10];
MessageName * Print[tablesize];

string ID_Struct;
string Signal_Struct[300][300];
string TX_Signal[300];
string RX_Signal[300];

int long Ofset[300][300];
int long Factor[300][300];;
int long MIN[300][300];
int long MAX[300][300];
int long DID2[300];
int long DID3[300];

int TypeCounte;
int SignalCounter3;
int LineCounter,LineCounter2,LineCounter3;
int DID_Counter = 0,DID_Counter2 = 0,ID_Counter = 0,DID_Count = 0 ;;
int PeridicTypeCounter = 0;
int PeridicValueCounter = 0;
int signal_Counter[300][300];
int signal_x,signal_y;
int SigalCounter=0,SigalCounter2,SigalCounter3 = 0;
int ID_Counter2=0;
int count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0;
int TX_RX_Counter;
int DLC_Counter = 0;
int counter4 = 0,counter5;
int lenghtDetect;
int Variable;
int END_Number;

string  TX_RX[300],TX_RX1[300];
string  Signals[300];
string  StartBit1[300];
int		StartBit2[300];
string  IntelMotorola1[300];
int		IntelMotorola2[300];
string	IntelMotorola3[300];
string  Lenght1[300];
int     Lenght2[300];
string  Factor1[300];
double  Factor2[300];
string  Ofset1[300];
double  Ofset2[300];
string  Min1[300];
double  Min2[300];
string  Max1[300];
double  Max2[300];
string  Periodic1[300];
int		Periodic2[300];
string  Periodic1_1[300];
int		Periodic2_2[300];
string  Periodic3[300];
string  Periodic4[300];
int Periodic4_4[300];
string  DLC[300];
string  DLC1[300];
int     DLC2[300];
string  Node[300];
string  NodeT[300];
string  Inputs[300];
int InputsCounter = 0,InputsCounter2[300];
string Lenght_t[300];
int Lenght_tt[300],Lenght_Counter;

string SignalBuffer[300];
int SignalBufferCounter = 0;

string ans[300][300] ;
string signalName[300][300];
string signalValue[300][300];
string Massagese[300];

string Buffer[300];
string Buffer2[1300];
string Buffer2D[300][300];

int lineCounter6 = 0;
int SignalCounter5 = 0;
int ID_Counter5 =0;
int ID_Counter6 =-1;
int TimeCounter = 0;

string Lenght_S[300];
string StartBit_S[300];
string DID_S[300];

string DID_Range;
int DID_Range_Numb;
int DID_Range_Counter = 0;

string Invalid_ID[3];

int NameCounter_S,NameCounter2_S,NameCounter6_S,NameCounter7_S,NameCounter9=1,NameCounter4_S=1;
bool NameCounter3_S,NameCounter5_S,NameCounter9_S;
string Nodes[50];
int Nodes_Count = 0;
string  NodeSignal[300];
int NodeSignalCounter;
string  PeriodicBuffer;
string  PeriodicDID[300];
string  PeiodicValue[300];
int PeiodicValueInt[300];
int PeriodicCounter = 0;
string DLC3[300];
int DLC_Counter2;
string TXRX_Buffer;
string TXRX[300];
int TXRX_Counter;

string TrigerBuffer;
int TrigerCounter = 0;
int TrigerCounter2 = 0;

string RX_NodesBuffer;
string RX_NodesBuffer3;
string RX_NodesBufferCounter[300];
string RX_NodesBufferID[300];
int RX_NodesBufferID_Counter = 0;

bool RX_NodesBuffer2 = false;
int BufferCounter;
string RX_NodesValues;
string RX_NodesValues2;

string NodeBuffer;
int NodeCounter;
int FrameCounter = 0;
int BreakCounter = 0;

bool P_Information = false;
bool Weakup = false;
bool FAULT_REPORT = false;
bool SUPERVISION = false;
bool NETWORK_MANAGEMENT = false;

string FrameNode[300],FrameNode2[300],FrameNode3[300],FrameNode4[300],FrameNode5[300];
int FrameNodeCounter,FrameNodeCounter2,FrameNodeCounter3,FrameNodeCounter4,FrameNodeCounter5;
int TXRXCounter,TXRXCounter2,TXRXCounter3,TXRXCounter4,TXRXCounter5;

string forloop[300];
int forCounter = 0;

string RXs[300];
int RXsCounter;

string P_Bufer;
string P_BuferArray[300];
int P_BuferCounter = 0;
string P_DID[300];
int P_DID_N[300];
string P_Vlaue[300];
string Default_P;
int Default_P_N;

string Supervision[300];
string SupervisionDID[300];
int SupervisionDID_N[300];
string SupervisionFinal[300];
string SupervisionBuffer;
string SupervisionDEF;
int SupervisionCounter = 0;


string OffsetBuffer;
string OffsetBufferDEF;
string OffsetFinal[300];
string OffsetDID[300];
int OffsetDID_N[300];
string OffsetValue[300];
int OffsetCounter;

string AppLayerBuffer;
string AppLayerValue[1500];
string AppLayerSignal[1500];
int AppLayerCounter=0;

string Triger2Buffer;
string Triger2Value[300];
string Triger2Value2;
string Triger2Signal[300];
string Triger2Signal2;
int Triger2Counter = 0;
int SourtCounter = 0;

string PRODBuffer;
string PROD_Value[300];
string PROD_Value2;
int PROD_Value_N[300];
int PROD_Value_N2;
string PROD_SignalValue[300];
string PROD_SignalValue2;
int PROD_Counter;
string CONS_INITBuffer;
string CONS_INIT_Value[300];
string CONS_INIT_Value2;
int CONS_Value_N[300];
int CONS_Value_N2;
string CONS_SignalValue[300];
string CONS_SignalValue2;
int CONS_INIT_Counter;
string PROD_DEF;
int PROD_DEF_N;
string CONS_DEF;
int CONS_DEF_N;

string FIFO_Buffer;
string FIFO_BufferArray[300];
string FIFO_Value[300];
string FIFO_DID[300];
int FIFO_DID_N[300];
int FIFO_BufferCounter;
string Default_FIFO;

int Default_FIFO_N;
int FIFO[300];

string LastTX_MSG;
string LastRX_MSG;

string ResponceID;
string RequestID;
bool Responce = false;
bool Request = false;

string Descrip[64][64];

string typeOfMSG_Buffer;
string typeOfMSG_Value;
string typrOfMSG_DID;
int typrOfMSG_DID_N;
int typrOfMSG_Counter = 0;
int typeOfMSG_ValueFinal_N[100];

string ID_Type0[50];
short int ID_Type0Counter;
string ID_Type1[50];
short int ID_Type1Counter;
string ID_Type2[50];
short int ID_Type2Counter;
string ID_Type3[50];
short int ID_Type3Counter;
string ID_Type4[50];
short int ID_Type4Counter;
string ID_Type5[50];
short int ID_Type5Counter;
string ID_Type6[50];
short int ID_Type6Counter;

string Signal[100];
short int SignalCounter = 0;

char filenameC[ MAX_PATH ];

struct MessageStruct2{
	string ID;
	string Signal1[300];
	string Description[300];
	int StartBit[300];
	int Lenght[300];
	int DID;
	int Signal_Counter;
	string Node;
	MessageStruct2 * Next;
};

MessageStruct2 * Print2[tablesize];

//**************************************Defualt Values*********************************************************//

	string HeaderName = "D:/Temp.h";
	string DBC_Address;
	string Selected_Node = "NBCM";
	string Selected_Node2 = "";
	string Selected_Node3 = "";
	string Selected_Node4 = "";
	string Selected_Node5 = "";
	string Hname = "D:/HSDef_CAN_DataBase_P3L_HS.h";
	string Hname2 = "D:/CAN_signal_IDS_P3L_HS.h";
	string C_Address = "D:/CANSignalManegment_P3L_HS.c";
	string FileName = "_CAN_DATABASE_DEF_INCLUDED";
	string Version = "1.1";
	string Author = "Bakhtiary";

//****************************************************************************************************************//

void ReadSelectedNodes(){

	ifstream ReadSelectedNodes1;
	ReadSelectedNodes1.open("Node1.txt");
	getline(ReadSelectedNodes1,Selected_Node,'\n');
	ReadSelectedNodes1.close();

	ifstream ReadSelectedNodes2;
	ReadSelectedNodes2.open("Node2.txt");
	getline(ReadSelectedNodes2,Selected_Node2,'\n');
	ReadSelectedNodes2.close();

	ifstream ReadSelectedNodes3;
	ReadSelectedNodes3.open("Node3.txt");
	getline(ReadSelectedNodes3,Selected_Node3,'\n');
	ReadSelectedNodes3.close();

	ifstream ReadSelectedNodes4;
	ReadSelectedNodes4.open("Node4.txt");
	getline(ReadSelectedNodes4,Selected_Node4,'\n');
	ReadSelectedNodes4.close();

	ifstream ReadSelectedNodes5;
	ReadSelectedNodes5.open("Node5.txt");
	getline(ReadSelectedNodes5,Selected_Node5,'\n');
	ReadSelectedNodes5.close();

}

int pow(int a,int b){
	int Pow = a;
	for(int i = 1 ; i < b ; i++){
		Pow *= a;
	}
	return Pow;
}

string currentDateTime(void) {

	time_t rawtime;
	struct tm timeinfo;
	time(&rawtime);
	char buf[80];
	localtime_s(&timeinfo, &rawtime);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &timeinfo);
	return buf;
}

string currentDate(void) {

	time_t rawtime;
	struct tm timeinfo;
	time(&rawtime);
	char buf[80];
	localtime_s(&timeinfo, &rawtime);
	strftime(buf, sizeof(buf), "%Y-%m-%d", &timeinfo);
	return buf;
}

int FindSubstringString(string str,string str2){
 
  size_t found = str.find(str2);

  if(str.find(str2)!= std::string::npos){
	  return 0;
  }
  return 1;
}

string get_last_word(string s) {
  auto index = s.find_last_of(' ');
  std::string last_word = s.substr(++index);
  return last_word;
}

string get_last_STH(string str,char charactet) {
  auto index = str.find_last_of(charactet);
  std::string last_word = str.substr(++index);
  return last_word;
}

string ReplaceString(string & data, string toSearch, string replaceStr)
{
	// Get the first occurrence
	size_t pos = data.find(toSearch);
	
	// Repeat till end is reached
	while( pos != string::npos)
	{
		// Replace this occurrence of Sub String
		data.replace(pos, toSearch.size(), replaceStr);
		// Get the next occurrence from the current position
		pos =data.find(toSearch, pos+ toSearch.size());
	}

	return data;
}

string RemoveString(string& String, string& StringToRemove) { 
  string::size_type n = StringToRemove.length();
  for (string::size_type Pointer = String.find(StringToRemove);
      Pointer != string::npos;
      Pointer = String.find(StringToRemove))
      String.erase(Pointer, n);

  return String;
}

void Massage(string Address,const char* MSG){


	int edit = (11 - (strlen(MSG)/2)); 

	if(edit <2){
				
		ofstream HeadeerText0;

		HeadeerText0.open(Address, ios_base::app | ios_base::out);

		HeadeerText0 << "\n" << endl;
		HeadeerText0 << "//***************************************************//" << endl;
		HeadeerText0 << "//" <<  MSG << "//" << endl;
		HeadeerText0 << "//***************************************************//" << endl;
		HeadeerText0 << "\n" << endl;

		HeadeerText0.close();
	}
	else{

		for(int Counter = 0 ; Counter< edit; Counter++){
			Space1.append(Space2);
		}

		Space = Space1.c_str();


		ofstream HeadeerText;

		HeadeerText.open(Address, ios_base::app | ios_base::out);

		int ExtraSpace = edit%2;
		if( ExtraSpace == 0){
			HeadeerText << "\n" << endl;
			HeadeerText << "//***************************************************//" << endl;
			HeadeerText << "//" << Space <<  MSG <<  Space << "//" << endl;
			HeadeerText << "//***************************************************//" << endl;
			HeadeerText << "\n" << endl;

			HeadeerText.close();
		}
		else{
			HeadeerText << "\n" << endl;
			HeadeerText << "//***************************************************//" << endl;
			HeadeerText << "//" << Space <<  MSG <<  Space << " //" << endl;
			HeadeerText << "//***************************************************//" << endl;
			HeadeerText << "\n" << endl;

			HeadeerText.close();
		}
	}
}

void Massage_Small(string Address,const char* MSG){
				
		ofstream HeadeerText0;

		HeadeerText0.open(Address, ios_base::app | ios_base::out);
		HeadeerText0 << "\n" << endl;
		HeadeerText0 << "//*****************//" << endl;
		HeadeerText0 << "//" <<  MSG << "//" << endl;
		HeadeerText0 << "//*****************//" << endl;
		HeadeerText0 << "\n" << endl;
		HeadeerText0.close();
}

void Header(string Address){

	const char * H_Address = Address.c_str();
	string Space1 = " ",Space2= " ";
	const char * Space;
	int edit = (24 - (strlen(H_Address)/2)); 

	if(edit <2){
				
		ofstream HeadeerText2;

		HeadeerText2.open(Address, ios_base::app | ios_base::out);

		HeadeerText2 << "//*****************  H header file  *****************//" << endl;
		HeadeerText2 << "// Copyright (C) "<< currentDateTime() <<" by IKCO , all rights reserved  //" << endl;
		HeadeerText2 << "//***************************************************//" << endl;

		HeadeerText2.close();
	}
	else{

		for(int Counter = 0 ; Counter< edit; Counter++){
			Space1.append(Space2);
		}

		Space = Space1.c_str();


		ofstream HeadeerText2;

		HeadeerText2.open(Address, ios_base::app | ios_base::out);

		int ExtraSpace = edit%2;
		if( ExtraSpace == 0){
			HeadeerText2 << "\n" << endl;
			HeadeerText2 << "//*****************  H header file  *****************//" << endl;
			HeadeerText2 << "// Copyright (C) "<< currentDateTime() <<" by IKCO , all rights reserved // " << endl;
			HeadeerText2 << "//***************************************************//" << endl;
			HeadeerText2 << "\n" << endl;

			HeadeerText2.close();
		}
		else{
			HeadeerText2 << "//*****************  H header file  *****************//" << endl;
			HeadeerText2 << "// Copyright (C) "<< currentDateTime() <<" by IKCO , all rights reserved  //" << endl;
			HeadeerText2 << "//***************************************************//" << endl;

			HeadeerText2.close();
		}
	}
}

void C_Header(string Address,string Year,string ProjectName){

	const char * H_Address = Address.c_str();
	string Space1 = " ",Space2= " ";
	const char * Space;
	int edit = (24 - (strlen(H_Address)/2)); 

	if(edit <2){
				
		ofstream HeadeerText2;

		HeadeerText2.open(Address, ios_base::app | ios_base::out);

		HeadeerText2 << "//*****************  C header file  *****************//" << endl;
		HeadeerText2 << "//***************************************************//" << endl;
		HeadeerText2 <<  "//" << Address <<  "//" << endl;
		HeadeerText2 <<  "//" << ProjectName <<  "//" << endl;
		HeadeerText2 << "//***************************************************//" << endl;
		HeadeerText2 << "// Copyright (C) "<< Year <<" by IKCO , all rights reserved  //" << endl;
		HeadeerText2 << "//***************************************************//" << endl;

		HeadeerText2.close();
	}
	else{
		for(int Counter = 0 ; Counter< edit; Counter++){
			Space1.append(Space2);
		}
		Space = Space1.c_str();


		ofstream HeadeerText2;

		HeadeerText2.open(Address, ios_base::app | ios_base::out);

		int ExtraSpace = edit%2;
		if( ExtraSpace == 0){
			HeadeerText2 << "\n" << endl;
			HeadeerText2 << "//*****************  C header file  *****************//" << endl;
			HeadeerText2 << "//***************************************************//" << endl;
			HeadeerText2 << "//" << Space <<  Address << "//" << Space  << endl;
			HeadeerText2 << "//" << Space <<  ProjectName << "//" << Space << endl;
			HeadeerText2 << "// Copyright (C) "<< Year <<" by IKCO , all rights reserved // " << endl;
			HeadeerText2 << "//***************************************************//" << endl;
			HeadeerText2 << "\n" << endl;
			HeadeerText2.close();
		}
		else{
			HeadeerText2 << "//*****************  C header file  *****************//" << endl;
			HeadeerText2 << "//***************************************************//" << endl;
			HeadeerText2 << "//" <<Space <<  Address <<  Space << "//" <<endl;
			HeadeerText2 << "//" <<Space <<  ProjectName <<  Space << "//" << endl;
			HeadeerText2 << "// Copyright (C) "<< Year <<" by IKCO , all rights reserved  //" << endl;
			HeadeerText2 << "//***************************************************//" << endl;

			HeadeerText2.close();
		}
	}
}

void Header2(string Address,string Version, string Name){
				
		ofstream HeadeerText;

		HeadeerText.open(Address, ios_base::app | ios_base::out);

		HeadeerText << "#ifndef QAC_CHECKER" << "\n" << endl;	
		HeadeerText << "//" << "\t" << currentDateTime() << "\t" << "\t" << "//" << endl;
		HeadeerText << "//" << "\t" << "Version:" << Version <<  "\t" << "\t" << "//"	 << endl;
		HeadeerText << "//" << "\t" << "Name:"	  << Name	 <<  "\t" << "\t" << "//"	 << endl;
		HeadeerText << "\n" << endl;
		HeadeerText << "#endif " <<"\n" ;

		string ProjectName = RemoveString(ReplaceString(Address," ", "_"),DriveE);
	
		ProjectName = RemoveString(ProjectName,DriveE);
		ProjectName = RemoveString(ProjectName,DriveF);
		ProjectName = RemoveString(ProjectName,DriveC);
		ProjectName = RemoveString(ProjectName,DriveD);
		ProjectName = RemoveString(ProjectName,DriveG);
		ProjectName = RemoveString(ProjectName,DriveA);

		HeadeerText << "#ifndef " << FileName <<"\n" << "#define " << FileName << endl;

		HeadeerText.close();

}

string get_all_text_after( const std::string& str, char delimiter )
{
    std::size_t pos = str.find(delimiter) ;
    return pos != std::string::npos ? str.substr( pos+1 ) : "" ;
}

void Read_Suffix(string FileName, string str1 , string str2){

	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);
	
	while( (FindSubstringString(Information,str1)) ){
		LineCounter++;
		getline(ReadLayout,Information,'\n');

		if(LineCounter > 1000){
			break;
		}
		while( (FindSubstringString(Information,str2)) )  {
				getline(ReadLayout,Information,'\n');
				LineCounter++;
			if(LineCounter > 1000){
			break;
			}
		}

		if(FindSubstringString(Information,"CM_ ") == 0){
			break;
		}
		//cout << Information << "_" << LineCounter3 << "_" << endl;
		//system("pause");
		Buffer[LineCounter3] = Information;
		LineCounter3++;
	}

	//system("pause");
ReadLayout.close();

}

void Read_Suffix2(string FileName, string str1 , string str2){

	LineCounter = 0;

	string Information;
	ifstream ReadLayout;
	ReadLayout.open(FileName);
	while( (FindSubstringString(Information,str1)) ){
		LineCounter++;
		getline(ReadLayout,Information,'\n');

		if(LineCounter > 500){
			break;
		}
		while( (FindSubstringString(Information,str2)) )  {
				getline(ReadLayout,Information,'\n');
				LineCounter++;
			if(LineCounter > 500){
			break;
			}
		}
	//cout << Information << endl;	
	Buffer2[LineCounter] = Information;		
	}
	//system("PAUSE");

ReadLayout.close();

}

void getSignals(string FileName){

	string Information;

	ifstream ReadLayout;

	ReadLayout.open(FileName);

	while(!ReadLayout.eof()){
		getline(ReadLayout,Information,'\n');
		if(FindSubstringString(Information,"SG_ ") == 0){
			SignalBuffer[SignalBufferCounter] = Information;
				SignalBufferCounter++;
				//cout << Information << endl;			
		}
	}
	//system("pause");
}

void Read_Suffix_Double(string FileName, string str1, string str2){

	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);
	
	while( FindSubstringString(Information,str1))   {
		getline(ReadLayout,Information,'\n');
		LineCounter++;
		if(LineCounter > 1000){
			break;
		}
	}

	while( FindSubstringString(Information,str2))   {
		getline(ReadLayout,Information,'\n');
		if(!FindSubstringString(Information,str2)){
			break;
		}
		LineCounter++;
		if(LineCounter > 1000){
			break;
		}
		Buffer[LineCounter2] = Information;
		//cout << Information << "&" << LineCounter2 << endl;
		LineCounter2++;
	}
	
ReadLayout.close();

}

void Read_Suffix_2D(string FileName, string str1 , string str2){

	string Information;
	ifstream ReadLayout;

	signal_x = 0;

	ReadLayout.open(FileName);
	
	while( (FindSubstringString(Information,str1)) ){
		signal_y++;
		getline(ReadLayout,Information,'\n');
		if(signal_y > 3000){
			break;
		}
		while( (FindSubstringString(Information,str2)) )  {
			signal_y++;
			getline(ReadLayout,Information,'\n');
			if(signal_y > 3000){
			break;
			}
		}
	//cout << Information << endl;
	Buffer[signal_x] = Information;
	//cout << signal_x  << "\t" <<  Buffer[signal_x] << endl;
	signal_x++;	
	}
	//TestCase = atoi(StringNumber.c_str());
ReadLayout.close();

}

void Read_Suffix_2D_2(string FileName, string str1 , string str2){

	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);
	
	while( (FindSubstringString(Information,str1)) ){
		signal_y++;
		getline(ReadLayout,Information,'\n');
		if(signal_x > 220){
			break;
		}
		while( (FindSubstringString(Information,str2)) )  {
			signal_x++;
			getline(ReadLayout,Information,'\n');
			if(signal_y > 220){
				break;
			}
		}
	//cout << Information << endl;
	//cout << signal_y << endl;
	Buffer2D[signal_x][signal_y] = Information;
	}
	//TestCase = atoi(StringNumber.c_str());
ReadLayout.close();

}

void ExtractDIDInformation(string FileName){

	Read_Suffix(FileName,"CM_ SG_","BO_ ");
	Sleep(1);
	for(int j = 0 ; j < 5000 ; j++){
		if (Buffer[j].length() != 0){
		for(int i = 0 ; i < 5000 ; i++){		
			string intStr = to_string(i)+" ";
			if( FindSubstringString(Buffer[j],intStr) == 0 ){
			DID_Counter2++;
			DID2[DID_Counter2] = i ;			
			}
		}
		DID3[DID_Counter] = DID2[DID_Counter2];
		//cout << DID3[DID_Counter] << endl;
		DID_Counter++;
		}
	}
	//system("pause");
}

void ExtractDIDInformation2(string FileName){

	Read_Suffix(FileName,"CM_ SG_","BO_ ");

	for(int i = 0 ; i < 60 ; i ++){
		//cout << Buffer[i] << endl;;
		DID_Range = get_all_text_after(Buffer[i], ' ').substr(0,get_all_text_after(Buffer[i], ' ').find(" "));
		//cout << DID_Range << endl;
		DID_Range_Numb = atoi(DID_Range.c_str());
		//cout << DID_Range_Numb << endl;
		if(DID_Range_Numb >= 0xfff){
			//cout << "there was one Out of range DID" << endl;
			Invalid_ID[DID_Range_Counter] = get_all_text_after(get_all_text_after(Buffer[i], ' '), ' ').substr(0,get_all_text_after(get_all_text_after(Buffer[i], ' '), ' ').find(":"));
			DID_Range_Counter++;
			//cout << Invalid_ID << endl;
		}
	}
	//system("pause");
}

void GetID_TX_RX(string FileName){

	Read_Suffix(FileName,"CM_ SG_","BO_ ");
	for(int i = 0 ; i < 300 ; i++){
		while(Buffer[i].length() != 0){
			TX_RX[i] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], ' '), ' '), ' '), ' ').substr(0, get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], ' '), ' '), ' '), ' ').find(": "));
			if(TX_RX[i] == "Vector__XXX"){
				TX_RX1[TX_RX_Counter] = "RX";
				TX_RX_Counter++;
			}
			else if(TX_RX[i] == "CMB_LED_EDG"){
				TX_RX1[TX_RX_Counter] = "TX";
				TX_RX_Counter++;
			}
			else{//TBD
				TX_RX_Counter++;
			}
			//cout << Buffer[i] << endl;
			//cout << TX_RX[i] << endl;
			//cout << TX_RX1[TX_RX_Counter] << "   " << TX_RX_Counter << endl;
			i++;		
		}
	}	
}

void GetID(string FileName){
	
	Read_Suffix(FileName,"CM_ SG_","BO_ ");
	for(int i = 0 ; i < 300 ; i++){
		while(Buffer[i].length() != 0){
			Massagese[ID_Counter2] = get_all_text_after(get_all_text_after(Buffer[i], ' '), ' ').substr(0, get_all_text_after(get_all_text_after(Buffer[i], ' '), ' ').find(": "));
			//cout << "ID=" << Massagese[ID_Counter2] << "(" << dec <<ID_Counter2 << ")" << endl << ID_Counter2 << endl;
			NodeT[ID_Counter2] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], ' '), ' '), ' '), ' ').substr(0, get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], ' '), ' '), ' '), ' ').find("\n"));
			//cout << NodeT[ID_Counter2] << endl;
			//system("pause");
			if( NodeT[ID_Counter2] == Selected_Node ){
				Inputs[InputsCounter] = Massagese[ID_Counter2];
				InputsCounter++;
			}
			i++;
			ID_Counter2++;
			if(ID_Counter2 > 100 ){
				break;
			}			
		}		
	}
	//system("pause");
}

void RX_NodesCounter(string DBC,string Node,string Add){

	ifstream RX_NodesRead;
	RX_NodesRead.open(DBC, ios_base::app | ios_base::out);

	ofstream RX_NodesWrite;
	RX_NodesWrite.open(Add, ios_base::app | ios_base::out);
	locale loc;
	string SignalToUpper;

	count5=0;
	count6=0;

	while(!RX_NodesRead.eof()){

		getline(RX_NodesRead,RX_NodesBuffer,'\n');

		if( FindSubstringString(RX_NodesBuffer,"SG_ ") == 0){
			RX_NodesValues =  get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').find(" "));
			if( FindSubstringString(RX_NodesValues,Node) == 0){
				RX_NodesBuffer = get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').substr(0,get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').find(" "));
				 //cout << RX_NodesBuffer << "+" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					for(int j = 0 ; j < 30 ; j++){
						if(Print[i]->Signal1[j] != ""){
							if ( FindSubstringString(Print[i]->Signal1[j],RX_NodesBuffer) == 0 ){
								for(int t = 0 ; t < 300 ; t++){					
									if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
										if(AppLayerValue[t] == "1"){
											count5++;
										}
									}
								}
							}						
						}
					}
				}
			}
		}

	}

	RX_NodesRead.close();
	RX_NodesWrite.close();

}

void RX_Nodes(string DBC,string Node,string Add){

	ifstream RX_NodesRead;
	RX_NodesRead.open(DBC, ios_base::app | ios_base::out);

	ofstream RX_NodesWrite;
	RX_NodesWrite.open(Add, ios_base::app | ios_base::out);
	locale loc;
	string SignalToUpper;

	while(!RX_NodesRead.eof()){

		getline(RX_NodesRead,RX_NodesBuffer,'\n');

		if( FindSubstringString(RX_NodesBuffer,"SG_ ") == 0){
			RX_NodesValues =  get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').find(" "));
			if( FindSubstringString(RX_NodesValues,Node) == 0){
				RX_NodesBuffer = get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').substr(0,get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').find(" "));
				 //cout << RX_NodesBuffer << "+" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					for(int j = 0 ; j < 30 ; j++){
						if(Print[i]->Signal1[j] != ""){
							if ( FindSubstringString(Print[i]->Signal1[j],RX_NodesBuffer) == 0 ){
								for(int t = 0 ; t < 300 ; t++){					
									if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
										if(AppLayerValue[t] == "1"){
											SignalToUpper = Print[i]->Signal1[j];
											for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
												SignalToUpper[u] = toupper(SignalToUpper[u],loc);
											}	
											count6++;
											if(count5 > count6){
											RX_NodesWrite << SignalToUpper << " = " << Print[i]->Count[j] << ",\t" << endl;
											}
											else{
											RX_NodesWrite << SignalToUpper << " = " << Print[i]->Count[j] << endl;
											}
											RX_NodesBufferCounter[BufferCounter] = Print[i]->Signal1[j];
											//cout << RX_NodesBufferCounter[BufferCounter] << endl;
											BufferCounter++;
										}
									}
								}
							}						
						}
					}
				}
			}
		}
	}

	RX_NodesRead.close();
	RX_NodesWrite.close();

}

void RX_Nodes2Counter(string DBC,string Node,string Add){

	forCounter = 0;
	count5=0;
	count6=0;

	for(int i = 0 ; i < 300 ; i++){
		forloop[i] = "";
	}

	ifstream RX_NodesRead;
	RX_NodesRead.open(DBC, ios_base::app | ios_base::out);

	ofstream RX_NodesWrite;
	RX_NodesWrite.open(Add, ios_base::app | ios_base::out);

	while(!RX_NodesRead.eof()){

		getline(RX_NodesRead,RX_NodesBuffer,'\n');

		if( FindSubstringString(RX_NodesBuffer,"SG_ ") == 0){
			RX_NodesValues =  get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').find(" "));
			if( FindSubstringString(RX_NodesValues,Node) == 0){
				 RX_NodesBuffer = get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').substr(0,get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').find(" "));
				//cout << RX_NodesBuffer << "+" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					for(int j = 0 ; j < 30 ; j++){					
						if(Print2[i]->Signal1[j] != ""){
							if ( FindSubstringString(Print2[i]->Signal1[j],RX_NodesBuffer) == 0){
								forloop[forCounter] = Print2[i]->ID;
								LastRX_MSG = Print[i]->Message;
								if( forloop[forCounter] != forloop[forCounter-1] ){
									count5++;
								}
								forCounter++;
							}
						}
					}
				}
			}
		}
	}

	RX_NodesRead.close();
	RX_NodesWrite.close();
}

void RX_Nodes2(string DBC,string Node,string Add){

	forCounter = 0;

	for(int i = 0 ; i < 300 ; i++){
		forloop[i] = "";
	}

	ifstream RX_NodesRead;
	RX_NodesRead.open(DBC, ios_base::app | ios_base::out);

	ofstream RX_NodesWrite;
	RX_NodesWrite.open(Add, ios_base::app | ios_base::out);

	while(!RX_NodesRead.eof()){

		getline(RX_NodesRead,RX_NodesBuffer,'\n');

		if( FindSubstringString(RX_NodesBuffer,"SG_ ") == 0){
			RX_NodesValues =  get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').find(" "));
			if( FindSubstringString(RX_NodesValues,Node) == 0){
				 RX_NodesBuffer = get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').substr(0,get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').find(" "));
				//cout << RX_NodesBuffer << "+" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					for(int j = 0 ; j < 30 ; j++){					
						if(Print2[i]->Signal1[j] != ""){
							if ( FindSubstringString(Print2[i]->Signal1[j],RX_NodesBuffer) == 0){
								forloop[forCounter] = Print2[i]->ID;
								LastRX_MSG = Print[i]->Message;
								//cout << Print[i]->Message << endl;
								if( forloop[forCounter] != forloop[forCounter-1] ){
									count6++;
									if(count5 > count6){
										//RX_NodesWrite << "Te_CAN_" << LS_HS << "_Rx_signal" << Print[i]->Message << "," << endl;
										RX_NodesWrite << Print[i]->Message << "," << endl;//<< "Rx_signal" removed
									}
									else{
										//RX_NodesWrite << "Te_CAN_" << LS_HS << "_Rx_signal" << Print[i]->Message  << endl;
										RX_NodesWrite << Print[i]->Message  << endl;//<< "Rx_signal" removed
									}
								}
								forCounter++;
							}
						}
					}
				}
			}
		}
	}

	RX_NodesRead.close();
	RX_NodesWrite.close();

}

void RX_Nodes3(string DBC,string Node,string Add,int Nodecount){

	forCounter = 0;

	for(int i = 0 ; i < 300 ; i++){
		forloop[i] = "";
	}

	ifstream RX_NodesRead;
	RX_NodesRead.open(DBC, ios_base::app | ios_base::out);

	ofstream RX_NodesWrite;
	RX_NodesWrite.open(Add, ios_base::app | ios_base::out);

	while(!RX_NodesRead.eof()){

		getline(RX_NodesRead,RX_NodesBuffer,'\n');

		if( FindSubstringString(RX_NodesBuffer," SG_") == 0){
			//cout << RX_NodesBuffer << "+" << endl;
			RX_NodesValues =  get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').find(" "));
			if( FindSubstringString(RX_NodesValues,Node) == 0){
				 RX_NodesBuffer = get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').substr(0,get_all_text_after(get_all_text_after(RX_NodesBuffer, ' '), ' ').find(" "));
				 //cout << RX_NodesBuffer << "-" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					for(int j = 0 ; j < 30 ; j++){					
						if(Print2[i]->Signal1[j] != ""){
							if ( FindSubstringString(Print2[i]->Signal1[j],RX_NodesBuffer) == 0){
								//cout << RX_NodesBuffer << "-" << endl;
								forloop[forCounter] = Print2[i]->ID;
								//cout << Print[i]->Message << endl;
								if( forloop[forCounter] != forloop[forCounter-1] ){
									for(int h =0 ; h<300 ; h++){
										if( forloop[forCounter] == Massagese[h] && (FindSubstringString(Massagese[h],"DIAG")) ){
											RX_NodesWrite << "int8u AInt8u" << Massagese[h] << "Buffer[" << DLC2[h] << "u];" << endl;											
											if(Nodecount == 1){
												FrameNode[FrameNodeCounter] = Massagese[h];
												FrameNodeCounter++;
											}
											if(Nodecount == 2){
												FrameNode2[FrameNodeCounter2] = Massagese[h];
												FrameNodeCounter2++;
											}
											if(Nodecount == 3){
												FrameNode3[FrameNodeCounter3] = Massagese[h];
												FrameNodeCounter3++;
											}
											if(Nodecount == 4){
												FrameNode4[FrameNodeCounter4] = Massagese[h];
												FrameNodeCounter4++;
											}
											if(Nodecount == 5){
												FrameNode5[FrameNodeCounter5] = Massagese[h];
												FrameNodeCounter5++;
											}
										}
									}
								}
								forCounter++;
							}
						}
					}				
					ID_Counter5;
				}
			}
		}

	}

	RX_NodesRead.close();
	RX_NodesWrite.close();

}

void RX_Nodes4(string DBC,string Node){

	ifstream RX_NodesRead;
	RX_NodesRead.open(DBC, ios_base::app | ios_base::out);

	locale loc;
	string SignalToUpper;

	while(!RX_NodesRead.eof()){

		getline(RX_NodesRead,RX_NodesBuffer3,'\n');

		if( FindSubstringString(RX_NodesBuffer3,"SG_ ") == 0){
			RX_NodesValues2 =  get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer3, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(RX_NodesBuffer3, ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' '), ' ').find(" "));
			//cout << RX_NodesValues2 << endl;
			if( FindSubstringString(RX_NodesValues2,Node) == 0){
				RX_NodesBuffer3 = get_all_text_after(get_all_text_after(RX_NodesBuffer3, ' '), ' ').substr(0,get_all_text_after(get_all_text_after(RX_NodesBuffer3, ' '), ' ').find(" "));
				 //cout << RX_NodesBuffer3 << "+" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					for(int j = 0 ; j < 30 ; j++){
						if(Print2[i]->Signal1[j] != ""){
							if ( FindSubstringString(Print2[i]->Signal1[j],RX_NodesBuffer3) == 0 ){

								RX_NodesBuffer2 = true;
								//cout << Print[i]->Message << endl;

								RX_NodesBufferID[RX_NodesBufferID_Counter] = Print2[i]->ID;
								//cout << RX_NodesBufferID[RX_NodesBufferID_Counter] << endl;
								RX_NodesBufferID_Counter++;
								if( (RX_NodesBufferID[RX_NodesBufferID_Counter-1] == RX_NodesBufferID[RX_NodesBufferID_Counter-2]) && (RX_NodesBufferID_Counter >= 2) ){
									RX_NodesBufferID[RX_NodesBufferID_Counter] = "";
									RX_NodesBufferID_Counter--;
								}
							}						
						}
					}
				}
			}
		}
	}
	RX_NodesBufferID[RX_NodesBufferID_Counter-1] = "";
	RX_NodesRead.close();

}

void RX_Nodes5(string DBC,string Node,string Address){

	ofstream RX_NodesWrite;
	RX_NodesWrite.open(Address, ios_base::app | ios_base::out);

	RX_NodesWrite << "//RX" << endl;

	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int u = 0 ; u < RX_NodesBufferID_Counter ; u++){
			if( FindSubstringString(RX_NodesBufferID[u],Print2[i]->ID) == 0)
				for(int j = 0 ; j<30 ; j++){
					if(Print2[i]->Signal1[j] != ""){
						for(int a =0 ; a < AppLayerCounter ; a++){
							if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
								if(AppLayerValue[a] == "1"){
									for(int t=0 ; t<CONS_INIT_Counter ; t++){
										if( FindSubstringString(CONS_SignalValue[t],Print[i]->Signal1[j]) == 0 ){
											RX_NodesWrite << "pTs" << Print[i]->Message << "Signal->Bitf1" << Print[i]->Signal1[j] << " = 0x" << hex << PROD_Value_N[t] << ";" << endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
}

void AppLayer(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	AppLayerCounter=0;

	while(!OpenDBC.eof()){
		getline(OpenDBC,AppLayerBuffer,'\n');
		if( FindSubstringString(AppLayerBuffer,"BA_ \"Signal_AppLayerUsed\"") == 0 ){
			//cout << AppLayerBuffer << endl;
			AppLayerValue[AppLayerCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(AppLayerBuffer, ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(AppLayerBuffer, ' '), ' '), ' '), ' '), ' ').find(";"));
			//cout << "_" << AppLayerValue[AppLayerCounter] << "_" << endl;
			AppLayerSignal[AppLayerCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(AppLayerBuffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(AppLayerBuffer, ' '), ' '), ' '), ' ').find(" "));
			//cout << "_" << AppLayerSignal[AppLayerCounter] << "_" << endl;
			AppLayerCounter++;
		}
	}

	OpenDBC.close();

}

void Triger2_Def(){

	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < 30 ; j++){
			if(Print[i]->Signal1[j] != ""){
				Triger2Signal[Triger2Counter] = Print[i]->Signal1[j];
				Triger2Value[Triger2Counter] = "FALSE,";
				Triger2Counter++;
			}
		}
	}

}

void Triger2(string Add,string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	ofstream Triger;
	Triger.open(Add, ios_base::app | ios_base::out);

	while(!OpenDBC.eof()){
		getline(OpenDBC,TrigerBuffer,'\n');
		if( FindSubstringString(TrigerBuffer,"BA_ \"Signal_EventTrigger\"") == 0 ){
			//cout << TrigerBuffer << endl;
			Triger2Value2 = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(TrigerBuffer, ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(TrigerBuffer, ' '), ' '), ' '), ' '), ' ').find(";"));
			//cout << "_" << Triger2Value[Triger2Counter] << "_" << endl;
			Triger2Signal2 = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(TrigerBuffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(TrigerBuffer, ' '), ' '), ' '), ' ').find(" "));
			//cout << "_" << Triger2Signal[Triger2Counter] << "_" << endl;
				
			for(int i = 0 ; i < Triger2Counter ; i++){
				if( FindSubstringString(Triger2Signal[i],Triger2Signal2) == 0 ){				
					if(i!=(Triger2Counter-1)){
						if(Triger2Value2 == "0" ){
							Triger2Value[i] = "FALSE,";
						}
						if(Triger2Value2 == "1" ){
							Triger2Value[i] = "TRUE,";
						}
					}
					else{
						if(Triger2Value2 == "0" ){
							Triger2Value[i] = "FALSE";
						}
						if(Triger2Value2 == "1" ){
							Triger2Value[i] = "TRUE";
						}
					}
				}
			}
		}
	}

	//Triger << "#ifdef _CAN_SIGNAL_" << LS_HS << "IDS_C_SRC" << endl;

	Triger << "const int8u AInt8uLSSignalTrigger[CAN_NB_SIGNAL] = \n{" << endl;

	for(int u = 0 ; u < Triger2Counter ; u++){
		for(int t = 0 ; t < AppLayerCounter ; t++){					
			if( FindSubstringString(AppLayerSignal[t],Triger2Signal[u]) == 0 ){
				if(AppLayerValue[t] == "1"){
					SourtCounter++;
							if(SourtCounter%8 == 0){
								Triger << Triger2Value[u] << endl ;
							}
							else{
								Triger << Triger2Value[u];							
							}
						//cout << SourtCounter << "  " << count7 << endl;
					}
				}
			}
		}
Triger << "\n}" << endl;
Triger.close();
OpenDBC.close();
}

void GetSignal2(string Add,string DBC_ADD){

	ofstream DEF_H2;
	DEF_H2.open(Add, ios_base::app | ios_base::out);

	getSignals(DBC_ADD);
	AppLayer(DBC_ADD);

	//DEF_H2 << "extern const int8u AInt8uSignalTrigger[CAN_NB_SIGNAL+1];" << endl; 
	//DEF_H2 << "extern const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL+1]; " << endl;
	locale loc;
	string SignalToUpper;
	
	// for all signals	

	for (int i = 0 ; i < ID_Counter5 ; i++){		
		for(int j = 0 ; j < 30 ; j++){
			if( Print[i]->Signal1[j] != "" ){
				for(int t = 0 ; t < AppLayerCounter ; t++){					
					if(Print[i]->Signal1[j]==AppLayerSignal[t]){
						if(AppLayerValue[t] == "1"){
							count7++;
						}
					}
				}
			}
		}
	}

	Massage(HeaderName,"EXPORTED variables");

	//DEF_H2 <<"#define RESF           *((volatile unsigned char *)0xfffff888uL )"<< endl;
	//DEF_H2 << "\n#define INVALID_FRAME 	0xFF\n" << endl;
	DEF_H2 << "#define CAN_NB_SIGNAL                      " << count7 << endl << endl;

	DEF_H2 << "#ifdef ALL_Signals" << endl;
	DEF_H2 << "typedef enum " << "\n" << "{" << endl;

	for (int i = 0 ; i < ID_Counter5 ; i++){
		if(Print[i]->transmiterNode != ""){			
			for(int j = 0 ; j < 30 ; j++){
				if( Print[i]->Signal1[j] != "" ){
					for(int t = 0 ; t < AppLayerCounter ; t++){	
						if(Print[i]->Signal1[j]==AppLayerSignal[t]){
							if(AppLayerValue[t] == "1"){
								if(count4 < count7-1){
									SignalToUpper = Print[i]->Signal1[j];
									for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
										SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
									}
									DEF_H2 << SignalToUpper << " = " << dec << count4 << "," << endl;
									Print[i]->Count[j] = count4;
									count4++;
								}
								else{
									SignalToUpper = Print[i]->Signal1[j];
									for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
										SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
									}
									DEF_H2 << SignalToUpper << " = " << dec << count4 << endl;
									Print[i]->Count[j] = count4;
									count4++;
								}
							}
						}
					}
				}
			}
		}
	}
	DEF_H2 << "}" << "\n" << endl;
	DEF_H2 << "#endif\n" << endl;
	
	count5 = 0;
	count6 = 0;
				DEF_H2 << "#ifdef " << Selected_Node << "_TX"<< endl;
				DEF_H2 << "#define FAULT_SIGNAL_ID_DETECTION	" << Selected_Node << "_FAULTERRORIDENTIFIER" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){	
								if(Print[i]->Signal1[j]==AppLayerSignal[t]){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											count5++;
										}
									}
								}
							}
						}
					}
				}
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){
								if(Print[i]->Signal1[j]==AppLayerSignal[t]){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											SignalToUpper = Print[i]->Signal1[j];
											for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
												SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
											}	
											count6++;
											if(count5 > count6){
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << "," << endl;
											}
											else{
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << endl;
											}
										}
									}
								}
							}
						}
					}
				}
				DEF_H2 << "}" << "\n" << endl;
				//DEF_H2 << "#endif\n" << endl;


				DEF_H2 << "#ifdef _" << Selected_Node << "_RX" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;
				RX_NodesCounter(DBC_Address,Selected_Node,Add);
				RX_Nodes(DBC_Address,Selected_Node,Add);					
				DEF_H2 << "}" << "\n" << endl;
				DEF_H2 << "#endif\n" << endl;	


	
	DEF_H2 <<  "\n" << "/* Signal configuration for events. \n A new signal value can initiate the transmission of an event frame */ \n" << endl;
	DEF_H2 <<  "\n" << "extern const int8u AInt8uSignalTrigger[CAN_NB_SIGNAL]; \n" << endl;
	DEF_H2 <<  "\n" << "/* Correspondence array: SIGNAL --> Frame buffer */: \n" << endl;
	DEF_H2 <<  "\n" << "extern const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL]; \n " << endl;
	DEF_H2 <<  "\n"  <<  "\n"  << endl;

	//=================================================================================================================================================//

			if(Selected_Node2 != ""){
				count5 = 0;
				count6 = 0;
				DEF_H2 << "#ifdef " << Selected_Node2 << "_TX"<< endl;
				//DEF_H2 << "#define FAULT_SIGNAL_ID_DETECTION	" << Selected_Node2 << "_FAULTERRORIDENTIFIER" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node2){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											count5++;
										}
									}
								}
							}
						}
					}
				}
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node2){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											SignalToUpper = Print[i]->Signal1[j];
											for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
												SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
											}								
											count6++;
											if(count5 > count6){
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << ",\t" << endl;
											}
											else{
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << endl;
											}
										}
									}
								}
							}
						}
					}
				}

				DEF_H2 << "}" << "\n" << endl;
				DEF_H2 << "#endif\n" << endl;


				//DEF_H2 << "#ifdef _" << Selected_Node2 << "_RX" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				RX_NodesCounter(DBC_Address,Selected_Node,Add);
				RX_Nodes(DBC_Address,Selected_Node2,Add);
				DEF_H2 << "}" << "\n" << endl;
				//DEF_H2 << "#endif\n" << endl;			
		}

	//=================================================================================================================================================//

			if(Selected_Node3 != ""){
				count5=0;
				count6=0;
				DEF_H2 << "#ifdef _" << Selected_Node3 << "_TX"<< endl;
				//DEF_H2 << "#define FAULT_SIGNAL_ID_DETECTION	" << Selected_Node3 << "_FAULTERRORIDENTIFIER" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node3){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											count5++;
										}
									}
								}
							}
						}
					}
				}
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node3){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											SignalToUpper = Print[i]->Signal1[j];
											for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
												SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
											}								
											count6++;
											if(count5 > count6){
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << ",\t" << endl;
											}
											else{
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << endl;
											}
										}
									}
								}
							}
						}
					}
				}
				DEF_H2 << "}" << "\n" << endl;
				//DEF_H2 << "#endif\n" << endl;


				//DEF_H2 << "#ifdef _" << Selected_Node3 << "_RX" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				RX_NodesCounter(DBC_Address,Selected_Node,Add);
                RX_Nodes(DBC_Address,Selected_Node3,Add);
				DEF_H2 << "}" << "\n" << endl;
				DEF_H2 << "#endif\n" << endl;			
		}

	//=================================================================================================================================================//

			if(Selected_Node4 != ""){
				count5=0;
				count6=0;
				DEF_H2 << "#ifdef _" << Selected_Node4 << "_TX"<< endl;
				//DEF_H2 << "#define FAULT_SIGNAL_ID_DETECTION	" << Selected_Node4 << "_FAULTERRORIDENTIFIER" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node4){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											count5++;
										}
									}
								}
							}
						}
					}
				}
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node4){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											SignalToUpper = Print[i]->Signal1[j];
											for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
												SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
											}								
											count6++;
											if(count5 > count6){
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << ",\t" << endl;
											}
											else{
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << endl;
											}
										}
									}
								}
							}
						}
					}
				}
				DEF_H2 << "}" << "\n" << endl;
				//DEF_H2 << "#endif\n" << endl;


				//DEF_H2 << "#ifdef _" << Selected_Node4 << "_RX" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				RX_NodesCounter(DBC_Address,Selected_Node,Add);
				RX_Nodes(DBC_Address,Selected_Node4,Add);
				DEF_H2 << "}" << "\n" << endl;
				DEF_H2 << "#endif\n" << endl;			
		}

	//=================================================================================================================================================//

			if(Selected_Node5 != ""){
				count5=0;
				count6=0;
				DEF_H2 << "#ifdef _" << Selected_Node5 << "_TX"<< endl;
				//DEF_H2 << "#define FAULT_SIGNAL_ID_DETECTION	" << Selected_Node5 << "_FAULTERRORIDENTIFIER" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;	
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node5){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											count5++;
										}
									}
								}
							}
						}
					}
				}
				for (int i = 0 ; i < 300 ; i++){
					if(Print[i]->transmiterNode == Selected_Node5){			
						for(int j = 0 ; j < 30 ; j++){
							for(int t = 0 ; t < AppLayerCounter ; t++){					
								if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[t]) == 0 ){
									if(AppLayerValue[t] == "1"){
										if(Print[i]->Signal1[j] != ""){
											SignalToUpper = Print[i]->Signal1[j];
											for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
												SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
											}								
											count6++;
											if(count5 > count6){
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << ",\t" << endl;
											}
											else{
												DEF_H2 << SignalToUpper << " = " << dec << Print[i]->Count[j] << endl;
											}
										}
									}
								}
							}
						}
					}
				}
				DEF_H2 << "}" << "\n" << endl;
				//DEF_H2 << "#endif\n" << endl;


				//DEF_H2 << "#ifdef _" << Selected_Node5 << "_RX" << endl;
				DEF_H2 << "typedef enum " << "\n" << "{" << endl;
				RX_NodesCounter(DBC_Address,Selected_Node,Add);
				RX_Nodes(DBC_Address,Selected_Node5,Add);
				DEF_H2 << "}" << "\n" << endl;
				DEF_H2 << "#endif\n" << endl;			
		}

		DEF_H2.close();

}

void GetSignal(string FileName){
	int j=0 ;
	Read_Suffix2(FileName,"CM_ SG_","SG_ ");
	for(int i = 0 ; i < 400 ; i++){
		if(Buffer2[i].length() != 0){
			j++;
			count2 = 0;
		}
		while(Buffer2[i].length() != 0){
			Signals[count3] = get_all_text_after(get_all_text_after(Buffer2[i], ' '), ' ').substr(0, get_all_text_after(get_all_text_after(Buffer2[i], ' '), ' ').find(": "));
			
			//if(Signal_Struct[j][count2] != "\0"){
				//cout  << Signal_Struct[j][count2] << "(" << j << "," << count2 << ")" << Massagese[j-1] << endl;
			//}
			Signal_Struct[j][count2] = Signals[count3];
			count3++;
			count2++;
			i++;
		}		
		//system("pause");
	}
}

void GetTXRX(string Add){

	ifstream TXRX_Read;
	TXRX_Read.open(Add, ios_base::app | ios_base::out);

	while(!TXRX_Read.eof()){
		getline(TXRX_Read,TXRX_Buffer,'\n');
			if(FindSubstringString(TXRX_Buffer,"BO_ ") == 0){
				if(FindSubstringString(TXRX_Buffer,"CM_ ") == 0){
					break;
				}
				TXRX[TXRX_Counter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(TXRX_Buffer, ' '), ' '), ' '), ' ').substr(0, get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(TXRX_Buffer, ' '), ' '), ' '), ' ').find(" "));			
				//cout << TXRX_Buffer << endl;
				//cout << TXRX[TXRX_Counter] << endl;
				TXRX_Counter++;
				//system("pause");
			}
	}

	TXRX_Read.close();
}

void GetDLC2(string Add){

	ifstream DEF_P2;
	DEF_P2.open(Add, ios_base::app | ios_base::out);

	while(!DEF_P2.eof()){
	getline(DEF_P2,PeriodicBuffer,'\n');
		if(FindSubstringString(PeriodicBuffer,"BO_ ") == 0){
			DLC3[DLC_Counter2] = get_all_text_after(get_all_text_after(get_all_text_after(PeriodicBuffer, ' '), ' '), ' ').substr(0, get_all_text_after(get_all_text_after(get_all_text_after(PeriodicBuffer, ' '), ' '), ' ').find(" "));			
			//cout << DLC3[DLC_Counter2] << "=>" << DLC_Counter2 << endl;
			DLC_Counter2++;
			if(DLC_Counter2>ID_Counter5){
				break;
			}
		}
	}

	DEF_P2.close();
}

void priodic_s(string Add){

	ifstream DEF_P;
	DEF_P.open(Add, ios_base::app | ios_base::out);

	while(!DEF_P.eof()){
		getline(DEF_P,PeriodicBuffer,'\n');

		if(FindSubstringString(PeriodicBuffer,"BA_ ") == 0){
			if( FindSubstringString(PeriodicBuffer,"init_value") == 0){
			}
			else{
				if(FindSubstringString(PeriodicBuffer,"FRAM_USE") == 0){
				}
				else{
				PeriodicDID [PeriodicCounter] = get_all_text_after(get_all_text_after(get_all_text_after(PeriodicBuffer, ' '), ' '), ' ').substr(0, get_all_text_after(get_all_text_after(get_all_text_after(PeriodicBuffer, ' '), ' '), ' ').find(" ")); 
				PeiodicValue[PeriodicCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(PeriodicBuffer, ' '), ' '), ' '), ' ').substr(0, get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(PeriodicBuffer, ' '), ' '), ' '), ' ').find(";"));
				PeiodicValueInt[PeriodicCounter] = atoi(PeiodicValue[PeriodicCounter].c_str());
				//cout << PeriodicDID [PeriodicCounter] << endl;
				//cout << PeiodicValue[PeriodicCounter] << endl;
				getline(DEF_P,PeriodicBuffer,'\n');
				PeriodicCounter++;
				//system("pause");
				}
			}
		}

	}

	DEF_P.close();
}

void GetSignalInformation(string FileName){

	SigalCounter = 0;
	//Read_Suffix(FileName,"CM_ SG_","SG_ ");
	Read_Suffix2(FileName,"CM_ SG_","SG_ ");
	
	for(int i = 0 ; i < 300 ; i++){
		if(Buffer[i].length() != 0) {
			if(!FindSubstringString(Buffer2[i],"SG_ ")){
				//cout << Buffer2[i] << "        " << i << endl;
				Signals[SigalCounter] = get_all_text_after(get_all_text_after(Buffer2[i], ' '), ' ').substr(0, get_all_text_after(get_all_text_after(Buffer2[i], ' '), ' ').find(": "));
				//cout << "signal=" << Signals[SigalCounter] << endl;	

				StartBit1[SigalCounter] = get_all_text_after(Buffer2[i],':').substr(0, get_all_text_after(Buffer2[i], ':').find("|"));
				StartBit2[SigalCounter] = atoi( StartBit1[SigalCounter].c_str() );
				//cout << "STARTBIT =" << StartBit2[SigalCounter] << endl;

				Lenght1[SigalCounter] = get_all_text_after(Buffer2[i], '|').substr(0,get_all_text_after(Buffer2[i], '|').find("@"));
				Lenght2[SigalCounter] = atoi( Lenght1[SigalCounter].c_str() );
				//cout << "LENGHT = " << Lenght2[SigalCounter] << endl;

				Factor1[SigalCounter] = get_all_text_after(Buffer2[i], '(').substr(0,get_all_text_after(Buffer2[i], '(').find(","));
				Factor2[SigalCounter] = atoi( Factor1[SigalCounter].c_str() );
				//cout << Factor2[SigalCounter] << endl;

				Ofset1[SigalCounter] = get_all_text_after(Buffer2[i], ',').substr(0,get_all_text_after(Buffer2[i], ',').find(")"));
				Ofset2[SigalCounter] = atoi( Ofset1[SigalCounter].c_str() );
				//cout << Ofset2[SigalCounter] << endl;

				Min1[SigalCounter] = get_all_text_after(Buffer2[i], '[').substr(0,get_all_text_after(Buffer2[i], '[').find("|"));
				Min2[SigalCounter] = atoi( Min1[SigalCounter].c_str() );
				//cout << Min2[SigalCounter] << endl;

				Max1[SigalCounter] = get_all_text_after(get_all_text_after(Buffer2[i], '|'), '|').substr(0, get_all_text_after(get_all_text_after(Buffer2[i], '|'), '|').find("]"));
				Max2[SigalCounter] = atoi(Max1[SigalCounter].c_str());   
				//cout << Max2[SigalCounter] << endl;

				Node[SigalCounter] = get_all_text_after(get_all_text_after(Buffer2[i], '"'), '"').substr(0, get_all_text_after(get_all_text_after(Buffer2[i], '"'), '"').find("\n"));
				//cout << "Reciver Node=" << Node[SigalCounter] << endl;
				SigalCounter++;

				//cout << "SigalCounter=" << SigalCounter << endl;
			}
				//system("pause");
		}		
	}
}

void Periodic_DEF(string DBC){
	ifstream OpenDBC2;
	OpenDBC2.open(DBC);

		while(!OpenDBC2.eof()){
		getline(OpenDBC2,P_Bufer,'\n');
		if(FindSubstringString(P_Bufer,"BA_DEF_DEF_  \"GenMsgCycleTime\"") == 0){
			Default_P = get_all_text_after(get_all_text_after(get_all_text_after(P_Bufer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(P_Bufer, ' '), ' '), ' ').find(" "));
			//cout << Default_P << endl;
			Default_P_N = atoi(Default_P.c_str());
			//cout << Default_P_N << endl;
		}
	}
		OpenDBC2.close();
}

void Periodic(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	for(int i = 0 ; i < ID_Counter5 ; i++){
		Periodic4_4[i] = Default_P_N;
	}

	while(!OpenDBC.eof()){
		getline(OpenDBC,P_Bufer,'\n');
		if(FindSubstringString(P_Bufer,"BA_ \"GenMsgCycleTime\"") == 0){
			P_BuferArray[P_BuferCounter] = P_Bufer;
			//cout << P_BuferArray[P_BuferCounter] << endl;
			P_Vlaue[P_BuferCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(P_BuferArray[P_BuferCounter], ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(P_BuferArray[P_BuferCounter], ' '), ' '), ' '), ' ').find(" "));
			P_DID[P_BuferCounter] = get_all_text_after(get_all_text_after(get_all_text_after(P_BuferArray[P_BuferCounter], ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(P_BuferArray[P_BuferCounter], ' '), ' '), ' ').find(" "));
			//cout << P_DID[P_BuferCounter] << endl;
			P_DID_N[P_BuferCounter] = atoi(P_DID[P_BuferCounter].c_str());
			//cout << P_DID_N[P_BuferCounter] << endl;
			//cout << ID_Counter5 << endl;
			for(int i = 0 ; i < ID_Counter5 ; i++){
				if(Print2[i]->DID == P_DID_N[P_BuferCounter]){
					Periodic4[i] = P_Vlaue[P_BuferCounter];
					Periodic4_4[i] = atoi(Periodic4[i].c_str());
				}
			}
			P_BuferCounter++;
		}
	}
	//system("pause");
	OpenDBC.close();
}

void FIFO_DEF(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	while(!OpenDBC.eof()){
		getline(OpenDBC,FIFO_Buffer,'\n');
		if(FindSubstringString(FIFO_Buffer,"BA_DEF_DEF_  \"Msg_DestinationFIFOs\"") == 0){
			Default_FIFO = get_all_text_after(get_all_text_after(get_all_text_after(FIFO_Buffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(FIFO_Buffer, ' '), ' '), ' ').find(" "));
			//cout << Default_FIFO << endl;
			Default_FIFO_N = atoi(Default_P.c_str());
			//cout << Default_FIFO_N << endl;
		}
	}
	OpenDBC.close();
}

void MSG_FIFO(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	for(int i = 0 ; i < ID_Counter5 ; i++){
		FIFO[i] = Default_FIFO_N;
	}

	while(!OpenDBC.eof()){
		getline(OpenDBC,FIFO_Buffer,'\n');
		if(FindSubstringString(FIFO_Buffer,"BA_ \"Msg_DestinationFIFOs\"") == 0){
			FIFO_BufferArray[FIFO_BufferCounter] = FIFO_Buffer;
			//cout << FIFO_BufferArray[FIFO_BufferCounter] << endl;
			FIFO_Value[FIFO_BufferCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(FIFO_BufferArray[FIFO_BufferCounter], ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(FIFO_BufferArray[FIFO_BufferCounter], ' '), ' '), ' '), ' ').find(" "));
			//cout << FIFO_Value[FIFO_BufferCounter] << endl;
			FIFO_DID[FIFO_BufferCounter] = get_all_text_after(get_all_text_after(get_all_text_after(FIFO_BufferArray[FIFO_BufferCounter], ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(FIFO_BufferArray[FIFO_BufferCounter], ' '), ' '), ' ').find(" "));
			//cout << FIFO_DID[FIFO_BufferCounter] << endl;
			FIFO_DID_N[FIFO_BufferCounter] = atoi(FIFO_DID[FIFO_BufferCounter].c_str());
			//cout << FIFO_DID_N[FIFO_BufferCounter] << endl;

			for(int i = 0 ; i < ID_Counter5 ; i++){
				if(Print2[i]->DID == FIFO_DID_N[FIFO_BufferCounter]){;
					FIFO[i] = atoi(FIFO_Value[FIFO_BufferCounter].c_str());
				}
			}
			FIFO_BufferCounter++;
		}
	}
	//system("pause");
	OpenDBC.close();

}

void DEF_PROD(string DBC){

	ifstream OpenDBC2;
	OpenDBC2.open(DBC);

	while(!OpenDBC2.eof()){
		getline(OpenDBC2,PRODBuffer,'\n');
		if(FindSubstringString(PRODBuffer,"BA_DEF_DEF_  \"Signal_PROD_INIT\"") == 0){
			//cout << PRODBuffer << endl;
			PROD_DEF = get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' ').find(" "));
			//cout << PROD_DEF << endl;
			PROD_DEF_N = atoi(PROD_DEF.c_str());
			//cout << PROD_DEF_N << endl;
		}
	}
	OpenDBC2.close();

	for(int i =0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j<30 ; j++){
			if(Print2[i]->Signal1[j] != ""){
			PROD_Value_N[PROD_Counter] = PROD_DEF_N;
			PROD_SignalValue[PROD_Counter] = Print2[i]->Signal1[j];
			PROD_Counter++;
			}
		}
	}
}

void PROD(string DBC){

	ifstream OpenDBC2;
	OpenDBC2.open(DBC);

	while(!OpenDBC2.eof()){
		getline(OpenDBC2,PRODBuffer,'\n');
		if(FindSubstringString(PRODBuffer,"BA_ \"Signal_PROD_INIT\"") == 0){
			//cout << PRODBuffer << endl;
			PROD_Value2 = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' '), ' '), ' ').find(";"));
			PROD_Value_N2 = atoi(PROD_Value2.c_str());
			//cout << PROD_Value[PROD_Counter] << endl;
			PROD_SignalValue2 = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' '), ' ').find(" "));
			//cout << PROD_SignalValue[PROD_Counter] << endl;
			for(int i =0 ; i < PROD_Counter ; i++){
				if(FindSubstringString(PROD_SignalValue[i],PROD_SignalValue2) == 0 ){
					PROD_Value_N[i] = PROD_Value_N2;
					//cout << PROD_SignalValue2 << endl;
				}
			}
		}
	}
	
	OpenDBC2.close();
}

void DEF_CONS_INIT(string DBC){

	ifstream OpenDBC2;
	OpenDBC2.open(DBC);

	while(!OpenDBC2.eof()){
		getline(OpenDBC2,PRODBuffer,'\n');
		if(FindSubstringString(PRODBuffer,"BA_DEF_ SG_  \"Signal_CONS_INIT\"") == 0){
			//cout << PRODBuffer << endl;
			CONS_DEF = get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(PRODBuffer, ' '), ' '), ' ').find(" "));
			//cout << PROD_DEF << endl;
			CONS_DEF_N = atoi(PROD_DEF.c_str());
			//cout << PROD_DEF_N << endl;
		}
	}
		OpenDBC2.close();

	for(int i =0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j<30 ; j++){
		CONS_Value_N[CONS_INIT_Counter] = CONS_DEF_N;
		CONS_SignalValue[CONS_INIT_Counter] = Print2[i]->Signal1[j];
		CONS_INIT_Counter++;
		}
	}
}

void CONS_INIT(string DBC){

	ifstream OpenDBC2;
	OpenDBC2.open(DBC);

	while(!OpenDBC2.eof()){
		getline(OpenDBC2,CONS_INITBuffer,'\n');
		if(FindSubstringString(CONS_INITBuffer,"BA_ \"Signal_CONS_INIT\"") == 0){
			//cout << PRODBuffer << endl;
			CONS_INIT_Value2 = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(CONS_INITBuffer, ' '), ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(CONS_INITBuffer, ' '), ' '), ' '), ' '), ' ').find(";"));
			CONS_Value_N2 = atoi(CONS_INIT_Value2.c_str());
			CONS_SignalValue2 = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(CONS_INITBuffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(CONS_INITBuffer, ' '), ' '), ' '), ' ').find(" "));
			//cout << CONS_SignalValue2 << endl;
			for(int i =0 ; i < CONS_INIT_Counter ; i++){
				if(FindSubstringString(CONS_SignalValue[i],CONS_SignalValue2) == 0 ){
					CONS_Value_N[i] = CONS_Value_N2;
				}
			}
		}
	}
		OpenDBC2.close();
}

void Supervision_DEF(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	while(!OpenDBC.eof()){
		getline(OpenDBC,SupervisionBuffer,'\n');
		if( FindSubstringString(SupervisionBuffer,"BA_DEF_DEF_  \"Msg_TypeOfSupervision\"") == 0 ){
			//cout << SupervisionBuffer << endl;
			if(FindSubstringString(SupervisionBuffer,"IPL_NO_MONITORED") == 0){
				//cout << "IPL_NO_MONITORED" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					SupervisionFinal[i] = "IPL_NO_MONITORED";
				}
			}
			if(FindSubstringString(SupervisionBuffer,"IPL_MONITORED") == 0){
				//cout << "IPL_NO_MONITORED" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					SupervisionFinal[i] = "IPL_MONITORED";
				}
			}
			if(FindSubstringString(SupervisionBuffer,"IPL_SUPERVISED") == 0){
				//cout << "IPL_NO_MONITORED" << endl;
				for(int i = 0 ; i < ID_Counter5 ; i++){
					SupervisionFinal[i] = "IPL_SUPERVISED";
				}
			}
		}
	}
	//system("pause");
	OpenDBC.close();
}

void TypeOfSupervision(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	while(!OpenDBC.eof()){
		getline(OpenDBC,SupervisionBuffer,'\n');
		if( FindSubstringString(SupervisionBuffer,"BA_ \"Msg_TypeOfSupervision\"") == 0 ){
			//cout << SupervisionBuffer << endl;
			Supervision[SupervisionCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(SupervisionBuffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(SupervisionBuffer, ' '), ' '), ' '), ' ').find(";"));					
			SupervisionDID[SupervisionCounter] = get_all_text_after(get_all_text_after(get_all_text_after(SupervisionBuffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(SupervisionBuffer, ' '), ' '), ' ').find(" "));	
			SupervisionDID_N[SupervisionCounter] = atoi(SupervisionDID[SupervisionCounter].c_str());
			
			//cout << SupervisionDID[SupervisionCounter] << endl;
			SupervisionCounter++;
		}
	}
	
	OpenDBC.close();

	for(int i = 0; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(Print2[i]->DID == SupervisionDID_N[j]){
			SupervisionFinal[i] = Supervision[j];
			}
		}
	}

	for(int i = 0 ; i < ID_Counter5 ; i++ ){
		if(SupervisionFinal[i] == "0"){
			SupervisionFinal[i] = "IPL_NO_MONITORED";
		}
		if(SupervisionFinal[i] == "1"){
			SupervisionFinal[i] = "IPL_MONITORED";
		}
		if(SupervisionFinal[i] == "2"){
			SupervisionFinal[i] = "IPL_SUPERVISED";
		}
		//cout << "s=" <<SupervisionFinal[i] << "i=" << i << endl;
	}
	//system("pause");

}

void Offset_DEF(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	while(!OpenDBC.eof()){
		getline(OpenDBC,OffsetBuffer,'\n');
		if( FindSubstringString(OffsetBuffer,"BA_DEF_DEF_  \"MsgOffset\"") == 0 ){
			OffsetBufferDEF = get_all_text_after(get_all_text_after(get_all_text_after(OffsetBuffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(OffsetBuffer, ' '), ' '), ' ').find(";"));
			//cout << OffsetBufferDEF << endl;
		}
	}
	OpenDBC.close();

	for(int i = 0 ; i < ID_Counter5 ; i++ ){
		OffsetFinal[i] = OffsetBufferDEF;
	}

	OpenDBC.close();
}

void Offset(string DBC){

	ifstream OpenDBC;
	OpenDBC.open(DBC);

	while(!OpenDBC.eof()){
		getline(OpenDBC,OffsetBuffer,'\n');
		if( FindSubstringString(OffsetBuffer,"\"MsgOffset\" BO_") == 0 ){
			OffsetDID[OffsetCounter] = get_all_text_after(get_all_text_after(get_all_text_after(OffsetBuffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(OffsetBuffer, ' '), ' '), ' ').find(" "));		
			OffsetDID_N[OffsetCounter] = atoi(OffsetDID[OffsetCounter].c_str());
			//cout << OffsetDID_N[OffsetCounter] << endl;
			//cout << OffsetDID[OffsetCounter] << endl;
			OffsetValue[OffsetCounter] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(OffsetBuffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(OffsetBuffer, ' '), ' '), ' '), ' ').find(";"));	
			//cout << OffsetValue[OffsetCounter] << endl;
			for(int j = 0 ; j < ID_Counter5 ; j++){
				if(OffsetDID_N[OffsetCounter] == Print2[j]->DID){
					OffsetFinal[j] = OffsetValue[OffsetCounter];
				}
			}
			OffsetCounter++;
		}
	}

	OpenDBC.close();
}

void GetEventInformation(string FileName){
Read_Suffix_Double(FileName,"Periode","BA_ \"init_value\"");
	for(int i = 0 ; i < 300 ; i++){
		if( (Buffer[i].length() > 29) && (Buffer[i].length() != 0) ){
			Periodic1[i] = get_all_text_after(Buffer[i], '\n').substr(0,get_all_text_after(Buffer[i], 'n').find("\n"));
			Periodic1[i] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], '\n'), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], '\n'), ' '), ' '), ' ').find(";"));
			Periodic2[i] = atoi( Periodic1[i].c_str() );
			
			if(Periodic2[i] == 0){
				Periodic3[PeridicTypeCounter] = "P";
				PeridicTypeCounter++;
			}
			else if(Periodic2[i] == 1){
				Periodic3[PeridicTypeCounter] = "E";
				PeridicTypeCounter++;
			}
			else if(Periodic2[i] == 2){
				Periodic3[PeridicTypeCounter] = "E+P";
				PeridicTypeCounter++;
			}
			//cout << Periodic3[PeridicTypeCounter] <<  "    "  <<  PeridicTypeCounter  << endl;
		}			
	}
}

void Read_Suffix_Double_Final(string FileName, string str1){
	
	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);
	
	while( FindSubstringString(Information,str1))   {
		
		if(!FindSubstringString(Information,str1)){
			break;
		}
		getline(ReadLayout,Information,'\n');
	}
	while( ReadLayout.good())   {
		getline(ReadLayout,Information,'\n');
		Buffer[LineCounter] = Information;
		LineCounter++;
		//cout << Information << endl;
	}

ReadLayout.close();

}

void Read_Suffix3(string FileName, string str1 , string str2){

	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);
	
	while( (FindSubstringString(Information,str1)) ){
		LineCounter++;
		getline(ReadLayout,Information,'\n');

		if(LineCounter > 500){
			break;
		}
		while( (FindSubstringString(Information,str2)) ){
				getline(ReadLayout,Information,'\n');
				LineCounter++;
			if(LineCounter > 500){
			break;
			}
		}
	//cout << Information << endl;
	Buffer[LineCounter] = Information;	
	}

ReadLayout.close();

}

void ReadSignalValue(string FileName){

	Read_Suffix_Double_Final(FileName,"BA_ \"init_value\"");
	
	string number[16]= {number0,number1,number2,number3,number4,number5,number6,number7,number8,number9};

	for(int i = 0 ; i < LineCounter ; i++){//=============1
		Buffer2D[i][0] = get_all_text_after(get_all_text_after(Buffer[i], ' '), ' ').substr(0,get_all_text_after(get_all_text_after(Buffer[i], ' '), ' ').find(";"));
		ans[i][0] = Buffer2D[i][0];
		
		RemoveString(ans[i][0],space);
		RemoveString(ans[i][0],qutation);
		RemoveString(ans[i][0],semicolon);
		RemoveString(ans[i][0],comma);
		RemoveString(ans[i][0],startBraket);
		RemoveString(ans[i][0],endBraket);

		ReplaceString(ans[i][0],number1,space);
		ReplaceString(ans[i][0],number0,space);
	}

	for(int i = 0 ; i < LineCounter ; i++){
		signalName[i][0] = get_all_text_after(ans[i][0], ' ').substr(0,get_all_text_after(ans[i][0], ' ').find(" "));
		if(signalName[i][0].length() < 2){
			signalName[i][0] = get_all_text_after(get_all_text_after(ans[i][0], ' '), ' ').substr(0,get_all_text_after(get_all_text_after(ans[i][0], ' '), ' ').find(" "));
		}
		//cout << signalName[i][0] << endl ;
	}
	
	for(int j = 1 ; j <16 ; j++){
		for(int i = 0 ; i < LineCounter ; i++){//=============2
			Buffer2D[i][j] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[i], ' '), ' '), ' '), ' ').find(";"));
			ans[i][j] = Buffer2D[i][j];
			
			RemoveString(ans[i][j],space);
			RemoveString(ans[i][j],qutation);
			RemoveString(ans[i][j],semicolon);
			RemoveString(ans[i][j],comma);
			RemoveString(ans[i][j],startBraket);
			RemoveString(ans[i][j],endBraket);

			ReplaceString(ans[i][j],number[j],space);
			ReplaceString(ans[i][j],number[j-1],space);
		}

		for(int i = 0 ; i < LineCounter ; i++){
			signalName[i][j] = get_all_text_after(ans[i][j], ' ').substr(0,get_all_text_after(ans[i][j], ' ').find(" "));
			if(signalName[i][j].length() < 2){
				signalName[i][j] = get_all_text_after(get_all_text_after(ans[i][j], ' '), ' ').substr(0,get_all_text_after(get_all_text_after(ans[i][j], ' '), ' ').find(" "));
			}
			//cout << signalName[i][j] << signalName[i][0] << "(" << i << "," << j << ")" << endl  ;
		}
	}
}

void SignalValue(){

	for(int h1 = 0 ; h1 <50 ; h1++){//1
	signalName[h1][0] = get_all_text_after(Buffer[h1], '"').substr(0,get_all_text_after(Buffer[h1], '"').find("\""));
	//cout << endl<< endl<< signalName[h1][0] << endl;
	signalValue[h1][0] = get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h1], ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h1], ' '), ' '), ' ').find("\""));
	//cout << endl<< endl<< signalValue[h1][0] << endl;
	}
	for(int h2 = 0 ; h2 <50 ; h2++){//2
	signalName[h2][1] = get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h2], '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h2], '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h2][1] << endl;
	signalValue[h2][1] = get_all_text_after(get_all_text_after(Buffer[h2], '"'), '"').substr(0,get_all_text_after(get_all_text_after(Buffer[h2], '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h2][1] << endl;
	}
	for(int h3 = 0 ; h3 <50 ; h3++){//3
	signalName[h3][2] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h3], '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h3], '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h3][2] << endl;
	signalValue[h3][2] = get_all_text_after(get_all_text_after(Buffer[h3], '"'), '"').substr(0,get_all_text_after(get_all_text_after(Buffer[h3], '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h3][2] << endl;
	}
	for(int h4 = 0 ; h4 <50 ; h4++){//4
	signalName[h4][3] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h4], '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h4], '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h4][3] << endl;
	signalValue[h4][3] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h4], '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h4], '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h4][3] << endl;
	}
	for(int h5 = 0 ; h5 <50 ; h5++){//5
	signalName[h5][4] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h5], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h5], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h5][4] << endl;
	signalValue[h5][4] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h5], '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h5], '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h5][4] << endl;
	}
	for(int h6 = 0 ; h6 <50 ; h6++){//6
	signalName[h6][5] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h6], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h6], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h6][5] << endl;
	signalValue[h6][5] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h6], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h6], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h6][5] << endl;
	}
	for(int h7 = 0 ; h7 <50 ; h7++){//7
	signalName[h7][6] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h7], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h7], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h7][6] << endl;
	signalValue[h7][6] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h7], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h7], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h7][6] << endl;
	}
	for(int h8 = 0 ; h8 <50 ; h8++){//7
	signalName[h8][7] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h8], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h8], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalName[h8][7] << endl;
	signalValue[h8][7] = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h8], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(Buffer[h8], '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"'), '"').find("\""));
	//cout << endl<< endl<< signalValue[h8][7] << endl;
	//system("pause");
	}
}

void GetDLC(string FileName){

	Read_Suffix_2D(FileName,"BA_ \"","BO_ ");
	for(int i = 0 ; i < 300 ; i++){
		DLC[i] = get_all_text_after(Buffer[i], ':').substr(0, get_all_text_after(Buffer[i], ':').find("\n"));
		DLC1[i] = get_all_text_after(DLC[i], ' ').substr(0, get_all_text_after(DLC[i], ' ').find(" "));
		DLC2[i] = atoi(DLC1[i].c_str());
		if(DLC2[i] == 0){
			break;
		}		
	}
}

void Reset(){
	signal_Counter[300][300] = 0;
	signal_x = 0;
	signal_y = 0;
	SigalCounter=0;
	SigalCounter2 = 0;
	SigalCounter3 = 0;
	ID_Counter2=0;
	count2=0;
	count3=0;
	TX_RX_Counter =0;
	DLC_Counter = 0;
	counter4 = 0;
	counter5 = 0;
	TypeCounte = 0;
	SignalCounter3 = 0;
	LineCounter = 0;
	LineCounter2 = 0;
	DID_Counter = 0;
	DID_Counter2 = 0;
	ID_Counter = 0;
	PeridicTypeCounter = 0;
	PeridicValueCounter = 0;
}

void Start(string Add){

	string filename= Add;

	GetID(filename);
	LineCounter = 0;
	LineCounter2 = 0;
	//system("pause");
	GetSignal(filename);
	LineCounter = 0;
	LineCounter2 = 0;
	//system("pause");
	
	ExtractDIDInformation(filename);
	LineCounter = 0;
	LineCounter2 = 0;
	for(int h=0 ; h <60 ; h++){
	//cout << DID3[h] << endl;
	}
	//system("pause");
	GetEventInformation(filename);
	LineCounter = 0;
	LineCounter2 = 0;
	
	//system("pause");
	GetID_TX_RX(filename);
	LineCounter = 0;
	LineCounter2 = 0;
	
	//system("pause");
		
	GetDLC(filename);
	LineCounter = 0;
	LineCounter2 = 0;

	//system("pause");

	GetSignalInformation(filename);
	LineCounter = 0;
	LineCounter2 = 0;
	
	//system("pause");

	for(int i = 0 ; i < 300; i++){
		Print[i] = new MessageName;
		Print[i]->Message = Massagese[i];
		//cout << Print[i]->Message << "   "  << i << endl;

		//cout << "-----------------\n" << endl;
		Print[i]->DID = DID3[i];
		Print[i]->PeridicType = Periodic3[i+2];
		Print[i]->PeridicValue = Periodic2_2[i+2] ;
		Print[i]->TX_RX2 = TX_RX1[i];
		Print[i]->DLC3 = DLC2[i];
		Print[i]->transmiterNode = NodeT[i];

		
		if( NodeT != NULL){
		//cout << Print[i]->transmiterNode << endl;
		}
		if( DLC2[i]!= NULL){
		//cout << Print[i]->DLC3 << endl;
		}		
		//system("pause");
		if( TX_RX1!= NULL){
		//cout << Print[i]->TX_RX2 << endl;
		}
		//system("pause");
		if( Periodic2!= NULL){
			//cout << Print[i]->PeridicValue << endl;
		}	
		//system("pause");
		if(Periodic3[i+2] != "\0"){
			//cout << Print[i]->PeridicType << endl;
		}	
		//system("pause");
		if(DID3[i] != NULL){
			//cout << "*" << hex << Print[i]->DID << endl;
		}
		//system("pause");
		if(Massagese[i] != "\0"){
			//cout << "_" << Print[i]->Message << endl;
		}
		//system("pause");
		for(int j = 0 ; j < 70 ; j++){
			if( (Signal_Struct[i+1][j] != "") && (FindSubstringString(Signal_Struct[i+1][j],"\"") == 1)){
				Print[i]->Signal1[j] = Signal_Struct[i+1][j];
				//cout << "+" << Print[i]->Signal1[j] << "+" <<endl;

				Print[i]->ByteOrder[j] = IntelMotorola3[j];
				//cout << "++" << Print[i]->ByteOrder[j] << endl;

				Print[i]->StartBit3[i][counter4] = StartBit2[counter4];
				Print[i]->lenght[i][counter4] = Lenght2[counter4];
				//Print[i]->ReciverNode[counter4] = Node[counter4];

				//cout << "Node:"  << Node[counter4] << endl;
				//cout << "Lenght:"  << dec << Print[i]->lenght[i][counter4] << endl;

				if(IntelMotorola2[j] == 1){
					//cout << "start bit:" << Print[i]->StartBit3[i][counter4] << endl;
				}
				else{
					//cout << "start bit:" << Print[i]->StartBit3[i][counter4] - Print[i]->lenght[i][counter4] +1 << endl;
				}			
		counter4++;
			}	
		}
	}
}

void Signal_Lenght(string Add){
	
	TypeCounte = 0;

	for(int i = 0 ; i < 100; i++){

		Print[i] = new MessageName;
		Print[i]->Message = Massagese[i];
		//cout << "-----------------\n" << endl;
		Print[i]->DID = DID3[i];
		Print[i]->PeridicType = Periodic3[i+2];
		Print[i]->PeridicValue = Periodic2_2[i+2] ;
		Print[i]->TX_RX2 = TX_RX1[i];
		Print[i]->DLC3 = DLC2[i];
		Print[i]->transmiterNode = NodeT[i];
		
		if( (Print[i]->transmiterNode != AllNodes[0] ) && (Print[i]->transmiterNode != AllNodes[1] ) && (Print[i]->transmiterNode != AllNodes[2] ) && (Print[i]->transmiterNode != AllNodes[3] ) && (Print[i]->transmiterNode != AllNodes[4] ) && (Print[i]->transmiterNode != AllNodes[5] ) && (Print[i]->transmiterNode != AllNodes[6] ) && (Print[i]->transmiterNode != AllNodes[7] ) && (Print[i]->transmiterNode != AllNodes[8] ) && (Print[i]->transmiterNode != AllNodes[9] ) ){
		AllNodes[TypeCounte] = Print[i]->transmiterNode ;
		TypeCounte++;
		}
	
		if( NodeT != NULL){
		//cout << Print[i]->transmiterNode << endl;
		}
		if( DLC2[i]!= NULL){
		//cout << Print[i]->DLC3 << endl;
		}		
		//system("pause");
		if( TX_RX1!= NULL){
		//cout << Print[i]->TX_RX2 << endl;
		}
		//system("pause");
		if( Periodic2!= NULL){
			//cout << Print[i]->PeridicValue << endl;
		}	
		//system("pause");
		if(Periodic3[i+2] != "\0"){
			//cout << Print[i]->PeridicType << endl;
		}	
		//system("pause");
		if(DID3[i] != NULL){
			//cout << "*" << hex << Print[i]->DID << endl;
		}
		//system("pause");
		if(Massagese[i] != "\0"){
			//cout << "_" << Print[i]->Message << endl;
		}
		//system("pause");

		for(int j = 0 ; j < 30 ; j++){

			if(Signal_Struct[i+1][j] != "\0"){
				RemoveString(Signal_Struct[i+1][j],Space1);
				if(FindSubstringString(Signal_Struct[i+1][j],"\"") == 1){
				Print[i]->Signal1[j] = Signal_Struct[i+1][j];
				}
				//cout << "+" << Print[i]->Signal1[j] << endl;
				Print[i]->ByteOrder[j] = IntelMotorola3[j];
				//cout << "++" << Print[i]->ByteOrder[j] << endl;

				Print[i]->StartBit3[i][j] = StartBit2[counter4];
				Print[i]->lenght[i][j] = Lenght2[counter4];
				//Print[i]->ReciverNode[i] = Node[counter4];

				//cout << "Node:"  << Node[counter4] << endl;
				//cout << "Lenght:"  << dec << Print[i]->lenght[i][j] << endl;
				//cout << "i=" << i << "j=" << j << endl;
				//system("pause");
				if(IntelMotorola2[j] == 1){
					//cout << "start bit:" << Print[i]->StartBit3[i][counter4] << endl;
				}
				else{
					//cout << "start bit:" << Print[i]->StartBit3[i][counter4] - Print[i]->lenght[i][counter4] +1 << endl;
				}	

				if(counter4 > 0 ){
				
					lenghtDetect = Print[i]->StartBit3[j][counter4] - Print[i]->StartBit3[j-1][counter4];// Print[i]->StartBit3[i][counter4] - Print[i]->StartBit3[i][counter4-1];//
					if( lenghtDetect > Print[i]->lenght[i][counter4] ){
						//cout << Print[i]->StartBit3[i][counter4] << " " << Print[i]->StartBit3[i][counter4-1] << "find" ;
						lenghtDetect = Print[i]->StartBit3[i][counter4] - Print[i]->StartBit3[i][counter4-1] ;
						//system("pause");
					}
				}
				if(j == Variable){
					if ( (64 - Print[i]->StartBit3[i][counter4-1] ) >= 8){
						//cout << "find" << endl;
						//system("pause");
					}
				}
			Variable = j;				
			counter4++;
			counter5 = j;
				}
			}
	}
}

void FindResponseRequest(string Node){
	
	for(int i = 0 ; i < ID_Counter5 ; i++){
		if(FindSubstringString(Print2[i]->ID,"DIAG_RESP") == 0){
			if(FindSubstringString(Print2[i]->ID,Node) == 0){
				ResponceID = Print2[i]->ID;
				Responce = true;
			}
		}
	}

	for(int j = 0 ; j < ID_Counter5 ; j++){
		if(FindSubstringString(Print2[j]->ID,"DIAG_REQ") == 0){
			if(FindSubstringString(Print2[j]->ID,Node) == 0){
				RequestID = Print2[j]->ID;
				Request = true;
			}
		}
	}

}

void Define_TX_RX_Message(string Address){
				
	ofstream TX_RX_Message;

	TX_RX_Message.open(Address, ios_base::app | ios_base::out);


	TX_RX_Message << "#ifdef _" << Selected_Node << endl;
	TX_RX_Message << "enum \n {//TX" << endl;		
	for(int c=0 ; c<70; c++){
		if( Print[c]->transmiterNode == Selected_Node ){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
			LastTX_MSG = Print[c]->Message;
			//TX_RX_Message << "Te_CAN_" << LS_HS << "_Tx_signal" << Print[c]->Message  << "," << endl;
			TX_RX_Message << Print[c]->Message  << "," << endl;//<< "Tx_signal" //removed
			for(int h =0 ; h < 30 ; h++){
				if(FindSubstringString(Print[c]->Signal1[h],"Weak") == 0){
					Weakup = true;
				}

				if(FindSubstringString(Print[c]->Signal1[h],"FAULT_REPORT") == 0){
					FAULT_REPORT = true;
				}
				if(FindSubstringString(Print[c]->Signal1[h],"NETWORK_MANAGEMENT") == 0){
					FAULT_REPORT = true;
				}
			}
			//system("pause");
		}
	}

	//TX_RX_Message << "MSG_"<< Selected_Node << "_DIAGNOSTIC_ANSWER" << "// Is not according to DBC" << endl;
	TX_RX_Message << "//RX" << endl;
	RX_Nodes2Counter(DBC_Address,Selected_Node,Address);
	RX_Nodes2(DBC_Address,Selected_Node,Address);
	//TX_RX_Message << "MSG_" << Selected_Node << "_DIAGNOSTIC_REQUEST" << "// Is not according to DBC" << endl;
	TX_RX_Message << "}\n" << endl;

	TX_RX_Message << "/* Number of all messages */" << "\n"  << "#define IPL_NB_" << "_MSG" << "\t" << "\t" <<"\t" << "(Te_CAN_"  << LastRX_MSG <<" + 1)" << "\n"  << endl;
	TX_RX_Message << "/* Number of functionnal messages in transmission */" << "\n"  << "#define IPL_NB_" << "_TX_MSG" << "\t" << "\t" <<"\t" << "(Te_CAN_" << "_Tx_signal" << LastTX_MSG <<" +1)"  << "\n" << endl;
	TX_RX_Message << "/* Number of functionnal messages in reception */" << "\n"  << "#define IPL_NB_RX_MSG" << "\t" <<"\t" <<"\t" << "(IPL_NB_MSG - IPL_NB_TX_MSG)" << "\n" << endl;
	TX_RX_Message << "/* First Id of RX frame */" << "\n"  << "#define IPL_FIRST_RX_ID" << "\t" <<"\t" <<"\t" << "IPL_NB_" <<"_TX_MSG" << "\n" << endl;
	if( FAULT_REPORT == true){
			FAULT_REPORT = false;
	TX_RX_Message << "/* Frame Default Event */" << "\n" << "#define FAULT_EVENT_SIGNAL_ID	 MSG_FAULT_REPORT_EBCM" << "\n" << endl;
		}
	if(Weakup == true){
		Weakup = false;
		TX_RX_Message << "Wake-up */" << "\n" << "#define IPL_TX_WAKE_UP_FRAME_ID	 MSG_BCM_WAKEUP_REQUEST" << "\n" << endl;
	}
		
	//if( SUPERVISION == true){
	// SUPERVISION = false;
	//TX_RX_Message << "/* Frame  Supervision */" << "\n"  << "#define IPL_TX_SUPERVISION_FRAME_ID" << "\t" <<"\t" <<"\t" << "(ID_SUPERVISION_CMB)" << "\n"  << endl;
	//}

   if( NETWORK_MANAGEMENT == true){
		 NETWORK_MANAGEMENT = false;
		TX_RX_Message << "/* Index of the TX frame to check transmission */\n/* Used for BUS OFF strategy and for the supervised frame in transmission */" << "\n"  << "#define	IPL_LS_TX_FRAME_TO_CHECK" << "\t" <<"\t" <<"\t" << "(int8u)(MSG_NETWORK_MANAGEMENT)" << "\n"  << endl;
	}
	FindResponseRequest(Selected_Node);
	if(Responce == true){
		TX_RX_Message << "/* Frame diagnostic response */" << "\n"  << "#define MSG_DIAG_RESPONSE" << "\t" <<"\t" <<"\t" << "(MSG_" << ResponceID << ")\n" << endl;
	}
	else{
		TX_RX_Message << "//Unable to find diagnostic response MSG. DBC file dosen't have Message that it's names Include \"DIAG_RESP\"\n" << endl;
	}
	if(Request == true){
		TX_RX_Message << "/* Frame diagnostic request */" << "\n"  << "#define MSG_DIAG_REQUEST" << "\t" <<"\t" <<"\t" << "(MSG_" << RequestID << ")\n" << endl;
	}
	else{
		TX_RX_Message << "//Unable to find diagnostic requset MSG. DBC file dosen't have Message that it's names Include \"DIAG_REQ\"\n" << endl;
	}
	TX_RX_Message << "#endif\n" << endl;


	if(Selected_Node2 != ""){
		TX_RX_Message << "#ifdef _" << Selected_Node2 << endl;
		TX_RX_Message << "enum \n {//TX" << endl;
		for(int c=0 ; c<70; c++){
			if( (Print[c]->transmiterNode == Selected_Node2) && (Print[c]->Message != "ICN_Answer_Diag") ){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
				//TX_RX_Message << "Te_CAN_" << LS_HS << "_Tx_signal" << Print[c]->Message  << "," << endl;
				TX_RX_Message << "Tx_signal" << Print[c]->Message  << "," << endl;
				for(int h =0 ; h < 30 ; h++){
					if(FindSubstringString(Print[c]->Signal1[h],"Weak") == 0){
						Weakup = true;
					}
				}
			//system("pause");
			}
		}
		//TX_RX_Message << "MSG_"<< Selected_Node2 << "_DIAGNOSTIC_ANSWER" << "// Is not according to DBC" << endl;
		TX_RX_Message << "//RX" << endl;
		RX_Nodes2Counter(DBC_Address,Selected_Node,Address);
		RX_Nodes2(DBC_Address,Selected_Node2,Address);
		//TX_RX_Message << "MSG_" << Selected_Node2 <<"_DIAGNOSTIC_REQUEST" << "// Is not according to DBC" << endl;
		TX_RX_Message << "}\n" << endl;

		TX_RX_Message << "/* Number of all messages */" << "\n"  << "#define IPL_NB_" << "_MSG" << "\t" << "\t" <<"\t" <<"(MSG_" << LastRX_MSG <<" + 1)" << "\n"  << endl;
		TX_RX_Message << "/* Number of functionnal messages in transmission */" << "\n"  << "#define IPL_NB_" << "_TX_MSG" << "\t" << "\t" <<"\t" <<"(MSG_"<< LastTX_MSG <<" +1)"  << "\n" << endl;
		TX_RX_Message << "/* Number of functionnal messages in reception */" << "\n"  << "#define IPL_NB_RX_MSG" << "\t" <<"\t" <<"\t" << "(IPL_NB_MSG - IPL_NB_TX_MSG)" << "\n" << endl;
		TX_RX_Message << "/* First Id of RX frame */" << "\n"  << "#define IPL_FIRST_RX_ID" << "\t" <<"\t" <<"\t" << "IPL_NB_" <<"_TX_MSG" << "\n" << endl;
		if( FAULT_REPORT == true){
			FAULT_REPORT = false;
			TX_RX_Message << "/* Frame Default Event */" << "\n" << "#define FAULT_EVENT_SIGNAL_ID	 MSG_FAULT_REPORT_EBCM" << "\n" << endl;
		}
		if(Weakup == true){
			Weakup = false;
			TX_RX_Message << "Wake-up */" << "\n" << "#define IPL_TX_WAKE_UP_FRAME_ID	 MSG_BCM_WAKEUP_REQUEST" << "\n" << endl;
		}
		//if( SUPERVISION == true){
		// SUPERVISION = false;
		//TX_RX_Message << "/* Frame  Supervision */" << "\n"  << "#define IPL_TX_SUPERVISION_FRAME_ID" << "\t" <<"\t" <<"\t" << "(ID_SUPERVISION_CMB)" << "\n"  << endl;
		//}
		if( NETWORK_MANAGEMENT == true){
			NETWORK_MANAGEMENT = false;
			TX_RX_Message << "/* Index of the TX frame to check transmission */\n/* Used for BUS OFF strategy and for the supervised frame in transmission */" << "\n"  << "#define	IPL_LS_TX_FRAME_TO_CHECK" << "\t" <<"\t" <<"\t" << "(int8u)(MSG_NETWORK_MANAGEMENT)" << "\n"  << endl;
		}
		FindResponseRequest(Selected_Node2);
		if(Responce == true){
			TX_RX_Message << "/* Frame diagnostic response */" << "\n"  << "#define MSG_DIAG_RESPONSE" << "\t" <<"\t" <<"\t" << "(Te_CAN_" << "_Tx_signal" << ResponceID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic response MSG. DBC file dosen't have Message that it's names Include \"DIAG_RESP\"\n" << endl;
		}
		if(Request == true){
			TX_RX_Message << "/* Frame diagnostic request */" << "\n"  << "#define MSG_DIAG_REQUEST" << "\t" <<"\t" <<"\t" << "(Te_CAN_" << "_Tx_signal" << RequestID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic requset MSG. DBC file dosen't have Message that it's names Include \"DIAG_REQ\"\n" << endl;
		}
		TX_RX_Message << "#endif\n" << endl;
	}
	if(Selected_Node3 != ""){
		TX_RX_Message << "#ifdef _" << Selected_Node3 << endl;
		TX_RX_Message << "enum\n{//TX" << endl;
		for(int c=0 ; c<70; c++){
			if( Print[c]->transmiterNode == Selected_Node3){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
				//TX_RX_Message << "Te_CAN_" << LS_HS << "_Tx_signal" << Print[c]->Message  << "," << endl;
				TX_RX_Message << "Tx_signal" << Print[c]->Message  << "," << endl;
				for(int h =0 ; h < 30 ; h++){
					if(FindSubstringString(Print[c]->Signal1[h],"Weak") == 0){
						Weakup = true;
					}
				}
				//system("pause");
			}
		}
		//TX_RX_Message << "MSG_"<< Selected_Node3 << "_DIAGNOSTIC_ANSWER" << "// Is not according to DBC" << endl;
		TX_RX_Message << "//RX" << endl;
		RX_Nodes2Counter(DBC_Address,Selected_Node,Address);
		RX_Nodes2(DBC_Address,Selected_Node3,Address);
		//TX_RX_Message << "MSG_" << Selected_Node3 << "_DIAGNOSTIC_REQUEST" << "// Is not according to DBC" << endl;
		TX_RX_Message << "}\n" << endl;

		TX_RX_Message << "/* Number of all messages */" << "\n"  << "#define IPL_NB_" << "_MSG" << "\t" << "\t" <<"\t" <<"(MSG_" << Selected_Node3 <<"_DIAGNOSTIC_ANSWER + 1)" << "\n"  << endl;
		TX_RX_Message << "/* Number of functionnal messages in transmission */" << "\n"  << "#define IPL_NB_" << "_TX_MSG" << "\t" << "\t" <<"\t" <<"(MSG_"<< LastTX_MSG <<" +1)"  << "\n" << endl;
		TX_RX_Message << "/* Number of functionnal messages in reception */" << "\n"  << "#define IPL_NB_RX_MSG" << "\t" <<"\t" <<"\t" << "(IPL_NB_MSG - IPL_NB_TX_MSG)" << "\n" << endl;
		TX_RX_Message << "/* First Id of RX frame */" << "\n"  << "#define IPL_FIRST_RX_ID" << "\t" <<"\t" <<"\t" << "IPL_NB_" <<"_TX_MSG" << "\n" << endl;
		if( FAULT_REPORT == true){
			 FAULT_REPORT = false;
		TX_RX_Message << "/* Frame Default Event */" << "\n" << "#define FAULT_EVENT_SIGNAL_ID	 MSG_FAULT_REPORT_EBCM" << "\n" << endl;
		}
		if(Weakup == true){
			Weakup = false;
			TX_RX_Message << "Wake-up */" << "\n" << "#define IPL_TX_WAKE_UP_FRAME_ID	 MSG_BCM_WAKEUP_REQUEST" << "\n" << endl;
		}
		//if( SUPERVISION == true){
			 //SUPERVISION = false;
			//TX_RX_Message << "/* Frame  Supervision */" << "\n"  << "#define IPL_TX_SUPERVISION_FRAME_ID" << "\t" <<"\t" <<"\t" << "(ID_SUPERVISION_CMB)" << "\n"  << endl;
		//}
		if( NETWORK_MANAGEMENT == true){
			NETWORK_MANAGEMENT = false;
			TX_RX_Message << "/* Index of the TX frame to check transmission */\n/* Used for BUS OFF strategy and for the supervised frame in transmission */" << "\n"  << "#define	IPL_LS_TX_FRAME_TO_CHECK" << "\t" <<"\t" <<"\t" << "(int8u)(MSG_NETWORK_MANAGEMENT)" << "\n"  << endl;
		}
		FindResponseRequest(Selected_Node3);
		if(Responce == true){
			TX_RX_Message << "/* Frame diagnostic response */" << "\n"  << "#define MSG_DIAG_RESPONSE" << "\t" <<"\t" <<"\t" << "(MSG_" << ResponceID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic response MSG. DBC file dosen't have Message that it's names Include \"DIAG_RESP\"\n" << endl;
		}
		if(Request == true){
			TX_RX_Message << "/* Frame diagnostic request */" << "\n"  << "#define MSG_DIAG_REQUEST" << "\t" <<"\t" <<"\t" << "(MSG_" << RequestID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic requset MSG. DBC file donse't have Message that it's names Include \"DIAG_REQ\"\n" << endl;
		}
		TX_RX_Message << "#endif\n" << endl;
	}
	if(Selected_Node4 != ""){
		TX_RX_Message << "#ifdef _" << Selected_Node4 << endl;
		TX_RX_Message << "enum\n{//TX" << endl;
		for(int c=0 ; c<70; c++){
			if( Print[c]->transmiterNode == Selected_Node4){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
				//TX_RX_Message << "Te_CAN_" << LS_HS << "_Tx_signal" << Print[c]->Message  << "," << endl;
				TX_RX_Message << "Tx_signal" << Print[c]->Message  << "," << endl;
				for(int h =0 ; h < 30 ; h++){
					if(FindSubstringString(Print[c]->Signal1[h],"Weak") == 0){
						Weakup = true;
					}
				}
				//system("pause");
			}
		}
		//TX_RX_Message << "MSG_"<< Selected_Node4 << "_DIAGNOSTIC_ANSWER" << "// Is not according to DBC" << endl;
		TX_RX_Message << "//RX" << endl;
		RX_Nodes2Counter(DBC_Address,Selected_Node,Address);
		RX_Nodes2(DBC_Address,Selected_Node4,Address);
		//TX_RX_Message << "MSG_" << Selected_Node4 << "_DIAGNOSTIC_REQUEST" << "// Is not according to DBC" << endl;
		TX_RX_Message << "}\n" << endl;

		TX_RX_Message << "/* Number of all messages */" << "\n"  << "#define IPL_NB_" << "_MSG" << "\t" << "\t" <<"\t" <<"(MSG_" <<"(MSG_" << LastRX_MSG <<" + 1)" << "\n"  << endl;
		TX_RX_Message << "/* Number of functionnal messages in transmission */" << "\n"  << "#define IPL_NB_" << "_TX_MSG" << "\t" << "\t" <<"\t" <<"(MSG_"<< LastTX_MSG <<" +1)"  << "\n" << endl;
		TX_RX_Message << "/* Number of functionnal messages in reception */" << "\n"  << "#define IPL_NB_RX_MSG" << "\t" <<"\t" <<"\t" << "(IPL_NB_MSG - IPL_NB_TX_MSG)" << "\n" << endl;
		TX_RX_Message << "/* First Id of RX frame */" << "\n"  << "#define IPL_FIRST_RX_ID" << "\t" <<"\t" <<"\t" << "IPL_NB_" <<"_TX_MSG" << "\n" << endl;
		if( FAULT_REPORT == true){
			 FAULT_REPORT = false;
			TX_RX_Message << "/* Frame Default Event */" << "\n" << "#define FAULT_EVENT_SIGNAL_ID	 MSG_FAULT_REPORT_EBCM" << "\n" << endl;
		}
		if(Weakup == true){
			Weakup = false;
			TX_RX_Message << "Wake-up */" << "\n" << "#define IPL_TX_WAKE_UP_FRAME_ID	 MSG_BCM_WAKEUP_REQUEST" << "\n" << endl;
		}
		//if( SUPERVISION == true){
			 //SUPERVISION = false;
		//TX_RX_Message << "/* Frame  Supervision */" << "\n"  << "#define IPL_TX_SUPERVISION_FRAME_ID" << "\t" <<"\t" <<"\t" << "(ID_SUPERVISION_CMB)" << "\n"  << endl;
		//}
		if( NETWORK_MANAGEMENT == true){
			 NETWORK_MANAGEMENT = false;
		TX_RX_Message << "/* Index of the TX frame to check transmission */\n/* Used for BUS OFF strategy and for the supervised frame in transmission */" << "\n"  << "#define	IPL_LS_TX_FRAME_TO_CHECK" << "\t" <<"\t" <<"\t" << "(int8u)(MSG_NETWORK_MANAGEMENT)" << "\n"  << endl;
		}
		FindResponseRequest(Selected_Node4);
		if(Responce == true){
			TX_RX_Message << "/* Frame diagnostic response */" << "\n"  << "#define MSG_DIAG_RESPONSE" << "\t" <<"\t" <<"\t" << "(MSG_" << ResponceID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic response MSG. DBC file dosen't have Message that it's names Include \"DIAG_RESP\"\n" << endl;
		}
		if(Request == true){
			TX_RX_Message << "/* Frame diagnostic request */" << "\n"  << "#define MSG_DIAG_REQUEST" << "\t" <<"\t" <<"\t" << "(MSG_" << RequestID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic requset MSG. DBC file dosen't have Message that it's names Include \"DIAG_REQ\"\n" << endl;
		}
		TX_RX_Message << "#endif\n" << endl;
	}
	if(Selected_Node5 != ""){
		TX_RX_Message << "#ifdef _" << Selected_Node5 << endl;
		TX_RX_Message << "enum\n{//TX" << endl;
		for(int c=0 ; c<70; c++){
			if( Print[c]->transmiterNode == Selected_Node5){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
				//TX_RX_Message << "Te_CAN_" << LS_HS << "_Tx_signal" << Print[c]->Message  << "," << endl;
				TX_RX_Message << "Tx_signal" << Print[c]->Message  << "," << endl;
				for(int h =0 ; h < 30 ; h++){
					if(FindSubstringString(Print[c]->Signal1[h],"Weak") == 0){
						Weakup = true;
					}
				}
				//system("pause");
			}
		}
		//TX_RX_Message << "MSG_"<< Selected_Node5 << "_DIAGNOSTIC_ANSWER" << "// Is not according to DBC" << endl;
		TX_RX_Message << "//RX" << endl;
		RX_Nodes2Counter(DBC_Address,Selected_Node,Address);
		RX_Nodes2(DBC_Address,Selected_Node5,Address);
		//TX_RX_Message << "MSG_" << Selected_Node5 << "_DIAGNOSTIC_REQUEST" << "// Is not according to DBC" << endl;
		TX_RX_Message << "}\n" << endl;

		TX_RX_Message << "/* Number of all messages */" << "\n"  << "#define IPL_NB_" << "_MSG" << "\t" << "\t" <<"\t" <<"(MSG_" <<"(MSG_" << LastRX_MSG <<" + 1)" << "\n"  << endl;
		TX_RX_Message << "/* Number of functionnal messages in transmission */" << "\n"  << "#define IPL_NB_" << "_TX_MSG" << "\t" << "\t" <<"\t" <<"(MSG_"<< LastTX_MSG <<" +1)"  << "\n" << endl;
		TX_RX_Message << "/* Number of functionnal messages in reception */" << "\n"  << "#define IPL_NB_RX_MSG" << "\t" <<"\t" <<"\t" << "(IPL_NB_MSG - IPL_NB_TX_MSG)" << "\n" << endl;
		TX_RX_Message << "/* First Id of RX frame */" << "\n"  << "#define IPL_FIRST_RX_ID" << "\t" <<"\t" <<"\t" << "IPL_NB_" <<"_TX_MSG" << "\n" << endl;
		if( FAULT_REPORT == true){
			FAULT_REPORT = false;
			TX_RX_Message << "/* Frame Default Event */" << "\n" << "#define FAULT_EVENT_SIGNAL_ID	 MSG_FAULT_REPORT_EBCM" << "\n" << endl;
		}
		if(Weakup == true){
			Weakup = false;
			TX_RX_Message << "Wake-up */" << "\n" << "#define IPL_TX_WAKE_UP_FRAME_ID	 MSG_BCM_WAKEUP_REQUEST" << "\n" << endl;
		}
		//if( SUPERVISION == true){
			// SUPERVISION = false;
			//TX_RX_Message << "/* Frame  Supervision */" << "\n"  << "#define IPL_TX_SUPERVISION_FRAME_ID" << "\t" <<"\t" <<"\t" << "(ID_SUPERVISION_CMB)" << "\n"  << endl;
		//}
		if( NETWORK_MANAGEMENT == true){
			NETWORK_MANAGEMENT = false;
			TX_RX_Message << "/* Index of the TX frame to check transmission */\n/* Used for BUS OFF strategy and for the supervised frame in transmission */" << "\n"  << "#define	IPL_LS_TX_FRAME_TO_CHECK" << "\t" <<"\t" <<"\t" << "(int8u)(MSG_NETWORK_MANAGEMENT)" << "\n"  << endl;
		}
		FindResponseRequest(Selected_Node5);
		if(Responce == true){
			TX_RX_Message << "/* Frame diagnostic response */" << "\n"  << "#define MSG_DIAG_RESPONSE" << "\t" <<"\t" <<"\t" << "(MSG_" << ResponceID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic response MSG. DBC file dosen't have Message that it's names Include \"DIAG_RESP\"\n" << endl;
		}
		if(Request == true){
			TX_RX_Message << "/* Frame diagnostic request */" << "\n"  << "#define MSG_DIAG_REQUEST" << "\t" <<"\t" <<"\t" << "(MSG_" << RequestID << ")\n" << endl;
		}
		else{
			TX_RX_Message << "//Unable to find diagnostic requset MSG. DBC file dosen't have Message that it's names Include \"DIAG_REQ\"\n" << endl;
		}
		TX_RX_Message << "#endif\n" << endl;
	}

	TX_RX_Message.close();
}

void CAPL_Rx_Functions(string Address){

	ofstream TX_RX_Functions;
	TX_RX_Functions << "/* recive fram */" << endl;
	TX_RX_Functions.open(Address, ios_base::app | ios_base::out);

	TX_RX_Functions << "\n" << "/* Recive fram */" << endl;
	for(int c=0 ; c<sizeof(Print[c]->Message); c++){
		if(Print[c]->Message != "\0"){
			if( (Print[c]->transmiterNode != Selected_Node) && (Print[c]->transmiterNode != "") ){
				if( (Print[c]->Message != "DEBUG_IC") && (Print[c]->Message != "ICN_Request_Diag")  )
				TX_RX_Functions << "extern void CPL_void" << Print[c]->Message << "Received(Ts" << Print[c]->Message << " const *pTs" << Print[c]->Message << ");" << endl;
				//cout << Print[c]->Message  << "," << endl;
			}
		}
	}

	TX_RX_Functions << "\n" << "/* Not recive fram */" << endl;
	for(int d=0 ; d<sizeof(Print[d]->Message); d++){
		if(Print[d]->Message != "\0"){
			if( (Print[d]->transmiterNode != Selected_Node) && (Print[d]->transmiterNode != "") ){
				TX_RX_Functions << "extern void CPL_void" << Print[d]->Message << "NotReceived(Void);" << endl;
				//cout << Print[c]->Message  << "," << endl;
			}
		}
	}
	TX_RX_Functions << "#endif" << "\n" << endl;

	if(Selected_Node2 != ""){
	TX_RX_Functions << "\n" << "/* Recive fram */" << endl;
		for(int c=0 ; c<sizeof(Print[c]->Message); c++){
			if(Print[c]->Message != "\0"){
				if( (Print[c]->transmiterNode != Selected_Node2) && (Print[c]->transmiterNode != "") ){
					if( (Print[c]->Message != "DEBUG_IC") && (Print[c]->Message != "ICN_Request_Diag")  )
					TX_RX_Functions << "extern void CPL_void" << Print[c]->Message << "Received(Ts" << Print[c]->Message << " const *pTs" << Print[c]->Message << ");" << endl;
					//cout << Print[c]->Message  << "," << endl;
				}
			}
		}

		TX_RX_Functions << "\n" << "/* Not recive fram */" << endl;
		for(int d=0 ; d<sizeof(Print[d]->Message); d++){
			if(Print[d]->Message != "\0"){
				if( (Print[d]->transmiterNode != Selected_Node2) && (Print[d]->transmiterNode != "") ){
					TX_RX_Functions << "extern void CPL_void" << Print[d]->Message << "NotReceived(Void);" << endl;
					//cout << Print[c]->Message  << "," << endl;
				}
			}
		}
		TX_RX_Functions << "#endif" << "\n" << endl;
	}
	TX_RX_Functions.close();	

}

void FRAME_DEFINITION(string Address){

	ofstream TX_RX_Signals;
	TX_RX_Signals.open(Address, ios_base::app | ios_base::out);

	TX_RX_Signals << "/* TX */" << "\n" << endl;	
	for(int i =0 ; i<300 ; i++){
		if( (Massagese[i] != "") && (NodeT[i] == Selected_Node) ){
			TX_RX_Signals << "extern int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
		}
	}
	TX_RX_Signals << "/* RX */" << "\n" << endl;
	for(int i =0 ; i<300 ; i++){
		//cout << Massagese[i] << endl;
		if( (Massagese[i] != "") && (NodeT[i] != Selected_Node) ){
			TX_RX_Signals << "extern int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
		}
	}

	if(Selected_Node2 != ""){
		TX_RX_Signals << "/* TX */" << "\n" << endl;
		for(int i =0 ; i<300 ; i++){
			if( (Massagese[i] != "") && (NodeT[i] == Selected_Node2) ){
			TX_RX_Signals << "extern int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
			}
		}
		TX_RX_Signals << "/* RX */" << "\n" << endl;
		for(int i =0 ; i<300 ; i++){
			if( (Massagese[i] != "") && (NodeT[i] != Selected_Node2) ){
				TX_RX_Signals << "extern int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
			}
		}
	}

	TX_RX_Signals.close();
}

void Read_Signal_S(string FileName){

	SignalCounter5 = 0;
	TimeCounter = 0;	//Fore resolving hangup problem

	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);

	while(!ReadLayout.eof()){
		getline(ReadLayout,Information,'\n');
		if( FindSubstringString(Information,"BA_DEF_ ") == 0 ){// OLD database without define applayer "CM_ " rule should be define applayer in all database
			goto finish;
		}
		if( FindSubstringString(Information,"SG_ ") == 0 ){	
			Print2[ID_Counter6]->Signal1[SignalCounter5] = Information;	
			IntelMotorola1[SignalCounter5] = get_all_text_after(Information, '@').substr(0,get_all_text_after(Information, '@').find("+"));
			//IntelMotorola2[SignalCounter5] = atoi( IntelMotorola1[SigalCounter].c_str() );
			//cout << "-" <<Information << endl;
			//cout << "+" << "_" << IntelMotorola2[SigalCounter] << "_" << endl;
			Lenght_S[SignalCounter5] = get_all_text_after(Print2[ID_Counter6]->Signal1[SignalCounter5], '|').substr(0,get_all_text_after(Print2[ID_Counter6]->Signal1[SignalCounter5], '|').find("@"));
			Print2[ID_Counter6]->Lenght[SignalCounter5] = atoi( Lenght_S[SignalCounter5].c_str() );
			//cout << "Lenght=" << Print2[ID_Counter6]->Lenght[SignalCounter5] << endl;
			StartBit_S[SignalCounter5] = get_all_text_after(Print2[ID_Counter6]->Signal1[SignalCounter5],':').substr(0, get_all_text_after(Print2[ID_Counter6]->Signal1[SignalCounter5], ':').find("|"));
			Print2[ID_Counter6]->StartBit[SignalCounter5] = atoi( StartBit_S[SignalCounter5].c_str() );
			//cout << "StartBit=" << Print2[ID_Counter6]->StartBit[SignalCounter5] << endl;
			Print2[ID_Counter6]->Signal1[SignalCounter5] = get_all_text_after(get_all_text_after(Print2[ID_Counter6]->Signal1[SignalCounter5], ' '), ' ').substr(0, get_all_text_after(get_all_text_after(Print2[ID_Counter6]->Signal1[SignalCounter5], ' '), ' ').find(": "));
			//cout << Print2[ID_Counter6]->Signal1[SignalCounter5]  << endl;
			//cout << "(" << ID_Counter6 << "," << SignalCounter5 << ")" << endl;
			//system("pause");
			//Print2[ID_Counter6]->Description[SignalCounter5] = "//Intel";
			if(IntelMotorola1[SignalCounter5] == "0"){
				Print2[ID_Counter6]->Description[SignalCounter5] = "//Motorolla";
				if( Print2[ID_Counter6]->Lenght[SignalCounter5] <=8){
					//cout << "StartBit= " << Print2[ID_Counter6]->StartBit[SignalCounter5] << endl;
					//cout << "Lenght= " << Print2[ID_Counter6]->Lenght[SignalCounter5] << endl;
					Print2[ID_Counter6]->StartBit[SignalCounter5] =  Print2[ID_Counter6]->StartBit[SignalCounter5] - Print2[ID_Counter6]->Lenght[SignalCounter5] +1;
					//cout << "=>"<<Print2[ID_Counter6]->StartBit[SignalCounter5] << endl;
					//cout << Print2[ID_Counter6]->Signal1[SignalCounter5] << Print2[ID_Counter6]->Description[SignalCounter5]  << endl;
				}
				else{
					//cout << "StartBit= " << Print2[ID_Counter6]->StartBit[SignalCounter5] << endl;
					//cout << "Lenght= " << Print2[ID_Counter6]->Lenght[SignalCounter5] << endl;
					Print2[ID_Counter6]->StartBit[SignalCounter5] =  Print2[ID_Counter6]->StartBit[SignalCounter5] - 7;
					//cout << "=>"<<Print2[ID_Counter6]->StartBit[SignalCounter5] << endl;	
					//cout << Print2[ID_Counter6]->Signal1[SignalCounter5] << Print2[ID_Counter6]->Description[SignalCounter5]  << endl;
				}
			//system("pause");
			}
			if(IntelMotorola1[SignalCounter5] == "1"){
				Print2[ID_Counter6]->Description[SignalCounter5] = "//Intel";
				//cout << Print2[ID_Counter6]->Signal1[SignalCounter5] << Print2[ID_Counter6]->Description[SignalCounter5]  << endl;
			}
			SignalCounter5++;
		}
		if( FindSubstringString(Information,"BO_ ") == 0 ){
			ID_Counter6++;
			SignalCounter5 = 0;
		}
	}

	finish:

	ReadLayout.close();

}

void Read_ID_S(string FileName){

	string Information;
	ifstream ReadLayout;

	ReadLayout.open(FileName);
	
	while(!ReadLayout.eof()){

	TimeCounter++;//For resolving hangup problem
	getline(ReadLayout,Information,'\n');

	if( FindSubstringString(Information,"BA_ ") == 0 ){
		break;
	}
	if( FindSubstringString(Information,"BA_DEF_ ") == 0 ){
		break;
	}
	if( FindSubstringString(Information,"CM_ ") == 0 ){
		break;
	}
	

	if( FindSubstringString(Information,"BO_ ") == 0 ){	
		Print2[ID_Counter5] = new MessageStruct2;
		Print2[ID_Counter5]->ID = Information;

		DID_S[ID_Counter5] = get_all_text_after(Print2[ID_Counter5]->ID, ' ').substr(0, get_all_text_after(Print2[ID_Counter5]->ID, ' ').find(" "));
		Print2[ID_Counter5]->DID = atoi( DID_S[ID_Counter5].c_str() );
		//cout << Print[ID_Counter5]->DID << endl;		
		Print2[ID_Counter5]->ID = get_all_text_after(get_all_text_after(Print2[ID_Counter5]->ID, ' '), ' ').substr(0, get_all_text_after(get_all_text_after(Print2[ID_Counter5]->ID, ' '), ' ').find(": "));
		//cout << Print2[ID_Counter5]->ID << ID_Counter5 << endl;
		getline(ReadLayout,Information,'\n');
		lineCounter6++;
		//system("pause");
		ID_Counter5++;
		//cout <<" linecounter=" << lineCounter6 << endl;
		//cout << lineCounter6;
		}
	}

	ReadLayout.close();
}

void Fill_Signals(){

	/* Fill reserve to 64 bit array functions */
	short int Distance = 0 ; 
	
	for(int i = 0 ; i < 64 ; i++){// DEFINE ONLY ONCE
		for (int j = 0 ; j < 64 ; j++){// DEFINE ONLY ONCE
			Matrix[i][j] = "Reserve";// DEFINE ONLY ONCE
			Descrip[i][j] = "";
		}
	}

	/* Write to the 64 bit array */
	for(int g = 0 ; g < ID_Counter5 ; g ++ ){
		for( int i = 0 ; i < 64 ; i ++ ){
			//cout << "I=" << dec <<i << "  " << "J=" << g << endl;
			//system("pause");

			 Distance = 0 ; 

			for (int j = Print2[g]->StartBit[i] ; j < Print2[g]->StartBit[i]+Print2[g]->Lenght[i] ; j++){// RANGE LESS THAN SIGNAL COUNTER MORE THAN THESE VALUE CUSE NOT CRASH IN PROGRAM.			
				Distance++;
				if(j<0) {
					for (int j = 0 ; j < 8+Print2[g]->StartBit[i] ; j++){
						Matrix[g][j] = Print2[g]->Signal1[i];
						Descrip[g][j+1] = Print2[g]->Description[i];
					}
					for (int j = 8 ; j < Print2[g]->Lenght[i] ; j++){
						Matrix[g][j] = Print2[g]->Signal1[i];
						Descrip[g][j+1] = Print2[g]->Description[i];
					}
					break;
				}

				Matrix[g][j] = Print2[g]->Signal1[i];
				Descrip[g][j+1] = Print2[g]->Description[i];
			}
		}
	}
}

void Test_Fill_Signals(){
	for(int g=0 ; g<60; g++){
		cout << endl << endl;
		for(int j =0 ;j<64;j++){
			cout << Matrix[g][j] << "  " << j <<endl;
		}
		system("pause");
	}
}

void Write_Signal(string ID_Type[],int Count,string MSG){

	 ofstream Write;
	 Write.open(HeaderName, ios_base::app | ios_base::out);

	 NameCounter_S = 1;
	 NameCounter3_S = true;
	/* Print */
	 //cout << dec <<ID_Counter << endl;
	// system("pause");

	 int DLC_Count=0,Sum=0;

	 Write << "//" << MSG << endl;
	
	for(int g = 0 ; g < ID_Counter5 ; g++){// RANG LESS THAN DEFINITION 64 MORE THAT THISE VALUE CUSE CRASH IN PROGRAM.!!
		for(int h = 0 ; h < ID_Counter5 ; h++){
			if(Massagese[h]==Print2[g]->ID){
				//cout << DLC3[h] << endl;
				DLC_Count = atoi(DLC3[h].c_str())*8;
				//cout << Print2[g]->ID << "  " << DLC_Count << endl;
			}
		}
		for(int i = 0 ; i < Count ; i++){
			if( ID_Type[i]==Print2[g]->ID){
				Write << "typedef struct\n{" << endl;
				for (int j = 0; j < 64 ; j++){// RANG LESS THAN DEFINITION 64 MORE THAT THESE VALUE CUSE NOT CRASH IN PROGRAM.
					//cout << Matrix[g][j] << " ";
					NameCounter2_S = 0;

		///////////////////////////////////////////////////////////////////////////////////////
					if(j == 0){
						string a = Matrix[g][j];
						string b = Matrix[g][j+1];

						if(a != b){
							if ( a == "Reserve"){
							//cout << endl << endl << dec << NameCounter4_S << Matrix[g][j] << dec << NameCounter_S  << endl << endl;
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << dec << NameCounter4_S << " : " << NameCounter_S << ";" << Descrip[g][j] << endl;
							Sum = Sum+NameCounter_S;
							NameCounter4_S++;
							if( Sum >= DLC_Count){
								goto finish;
							}
							NameCounter_S = 1;

							//cout << Matrix[g][j-1] << " 1" << endl;
							//system("pause");
						}
						else{
							//cout << endl << endl << Matrix[g][j] << ":" << dec << NameCounter_S << endl << endl;
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << " : " << dec << NameCounter_S << ";"  << Descrip[g][j] << endl;
											
							Sum = Sum+NameCounter_S;
							if( Sum >= DLC_Count){
								goto finish;
							}
							NameCounter_S = 1;
							//cout << Matrix[g][j-1] << " 2" << endl;
							//system("pause");						
						}
					}
				}
		///////////////////////////////////////////////////////////////////////////////////////
				if(j == 1){
	
					string b = Matrix[g][j+1];
					string a = Matrix[g][j];				
					string c = Matrix[g][j-1];

					if( (a != b) && (a != c) ){
						NameCounter_S = 1;
						if ( a == "Reserve"){
							//cout << endl << endl << dec << NameCounter4_S << Matrix[g][j] << dec << NameCounter_S  << endl << endl;
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << dec << NameCounter4_S << " : " << NameCounter_S << ";" << Descrip[g][j] << endl;
							Sum = Sum+NameCounter_S;
							NameCounter4_S++;
							if( Sum >= DLC_Count){
								goto finish;
							}
							NameCounter_S = 1;
							//cout << Matrix[g][j-1] << " 1" << endl;
							//system("pause");
						}
						else{
							//cout << endl << endl << Matrix[g][j] << ":" << dec << NameCounter_S << endl << endl;
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << " : " << dec << NameCounter_S << ";" << Descrip[g][j] << endl;
						
							Sum = Sum+NameCounter_S;
							if( Sum >= DLC_Count){
								goto finish;
							}
							NameCounter_S = 1;
							//cout << Matrix[g][j-1] << " 2" << endl;
							//system("pause");						
						}
					}

					if( (a != b) && (a == c) ){
						NameCounter_S = 2;
						if ( a == "Reserve"){
							//cout << endl << endl << dec << NameCounter4_S << Matrix[g][j] << dec << NameCounter_S  << endl << endl;
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << dec << NameCounter4_S << " : " << NameCounter_S << ";" << Descrip[g][j] << endl;
							Sum = Sum+NameCounter_S;
							NameCounter4_S++;
							if( Sum >= DLC_Count){
								goto finish;
							}
							NameCounter_S = 1;
							//cout << Matrix[g][j-1] << " 1" << endl;
							//system("pause");
						}
						else{
							//cout << endl << endl << Matrix[g][j] << ":" << dec << NameCounter_S << endl << endl;
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << " : " << dec << NameCounter_S << ";"  << Descrip[g][j] << endl;
							Sum = Sum+NameCounter_S;
							if( Sum >= DLC_Count){
								goto finish;
							}
							NameCounter_S = 1;
							//cout << Matrix[g][j-1] << " 2" << endl;
							//system("pause");						
						}
					}
					if( (a==b) && (a!=c) ){
						NameCounter_S--;
					}
				}

/////////////////////////////////////////////////////////////////////////////////////////////

				if(j > 1 ){// start of search array
					if (NameCounter3_S == true){
						if(Print2[g]->StartBit[j] != 2){//test
							NameCounter_S++;
						}
					NameCounter3_S = false;
					}
				
					string a = Matrix[g][j];
					string b = Matrix[g][j-1];
					string c = Matrix[g][j-2];
					string d = Matrix[g][j+1];
	
					if( (j == 2 ) && (a != b) && (a != d) ){
						NameCounter_S = 1;
					}

					// report size of signal befor print
					int k=j;
					if(Matrix[g][k] =="Reserve" ){
						NameCounter7_S = 0;
					}

					if( (Matrix[g][k] != Matrix[g][k-1]) && (Matrix[g][k] != Matrix[g][k+1]) ){
						NameCounter9_S =false;
					}
					if( (Matrix[g][k] != Matrix[g][k-2]) && (Matrix[g][k] != Matrix[g][k+2]) ){
						NameCounter9_S =false;
					}
						if((k==2) && (Matrix[g][k]=="Reserve") && (Matrix[g][k-1]!="Reserve") && (Matrix[g][k+1]=="Reserve") ){//test
						NameCounter_S--;
					}
					if((k==2) && (Matrix[g][k]==Matrix[g][k+1]) && (Matrix[g][k]!=Matrix[g][k-1]) && (Matrix[g][k]!="Reserve") ){//test
						NameCounter_S--;
					}

					if( ((Matrix[g][k] != Matrix[g][k-1]) || (j ==2)) && (Matrix[g][k] !="Reserve" ) && (Matrix[g][k-1] !="Reserve" )){
				
						if( ((j==2) && (Matrix[g][2] == Matrix[g][1])) && (Matrix[g][k] !="Reserve" ) && (Matrix[g][k-1] !="Reserve" )){
							NameCounter6_S++;
						}
						if( ((j==2) && (Matrix[g][2] == Matrix[g][0])) && (Matrix[g][k] !="Reserve" ) ){
							NameCounter6_S++;
						}
						while( (Matrix[g][k] == Matrix[g][k+1]) && (k<62) ){
							k++;
							NameCounter6_S++;
						}

						NameCounter6_S++;
						NameCounter7_S = NameCounter6_S;
						NameCounter6_S = 0;
					}
					//cout << NameCounter7_S << endl;
					//system("pause");
					//////////////////////////////////////



					if(a==b){// arrays are same				
						NameCounter_S++;
						NameCounter2_S = NameCounter_S;
					
						if( (j%8 == 0) && (j>0) ){//seperate each 8 bit
							NameCounter_S--;
							//cout << "__" << Matrix[g][k] << NameCounter7_S << endl;
	///////////////////////////////////////////////*****					
							if ( j >2){// arrays are not same
								if ( b == "Reserve"){
								Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << dec << NameCounter4_S << " : " << NameCounter_S << ";" << Descrip[g][j] << endl;
								Sum = Sum+NameCounter_S;
								NameCounter4_S++;
								if( Sum >= DLC_Count){
									goto finish;
								}
							NameCounter_S = 1;
						}	
						else{
							Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << " : " << dec << NameCounter_S << ";" << Descrip[g][j] << endl;
						
							Sum = Sum+NameCounter_S;
							NameCounter_S = 1;

						}
				}
	///////////////////////////////////////////////******							
			}
		}
		else if ( j >2){// arrays are not same
			if ( b == "Reserve"){
				//cout << endl << endl << dec << NameCounter4_S << Matrix[g][j-1] << dec << NameCounter_S  << endl << endl;
				Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j-1] << dec << NameCounter4_S << " : " << NameCounter_S << ";" << Descrip[g][j] << endl;
				Sum = Sum+NameCounter_S;
				NameCounter4_S++;
				if( Sum >= DLC_Count){
					goto finish;
				}
				NameCounter_S = 1;
			}
			else{
				//cout << endl << endl << Matrix[g][j-1] << ":" << dec << NameCounter_S << endl << endl;
				Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j-1] << " : " << dec << NameCounter_S << ";" << Descrip[g][j] << endl;
				Sum = Sum+NameCounter_S;
				if( Sum >= DLC_Count){
					goto finish;
				}
				NameCounter_S = 1;
				}
			}
	///////////////////////////////////////////////////////////////////////////////				
			if(j == 63 ){//end of each araay
				if ( Matrix[g][j] == "Reserve"){
					//cout << endl << endl << dec << NameCounter4_S << Matrix[g][j] << dec << NameCounter_S  << endl << endl;
					Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << dec << NameCounter4_S  << " : " << NameCounter_S << ";" << Descrip[g][j] << endl;
					Sum = Sum+NameCounter_S;
					NameCounter4_S++;
					if( Sum >= DLC_Count){
						goto finish;
					}
					NameCounter_S = 1;
					}
					else{
					//cout << endl << endl << Matrix[g][j] <<  " : " << NameCounter_S << endl << endl;
					Write << "int8u bitf" << dec << NameCounter_S << "_" << Matrix[g][j] << dec <<  " : " << dec << NameCounter_S << ";" << Descrip[g][j] << endl;
					
					Sum = Sum+NameCounter_S;
					}
					if( Sum >= DLC_Count){
						goto finish;
					}
					NameCounter_S = 1;
					NameCounter3_S = true;
					NameCounter6_S = 0;//test
				}
			}

	////////////////////////////////////////////////////////////////////////////////////////////////
				//system("pause");			
		}
		finish:
		NameCounter_S = 1;
		NameCounter3_S = true;
		NameCounter6_S = 0;//test
		Sum = 0;

		Write << "\n} Ts_" << Print2[g]->ID << ";" << endl << endl;
		//cout << endl << endl << endl;
		}
	}
}
	
	Write.close();
}

void AddCounter2(){

	ifstream Input;
	Input.open(HeaderName);

	ofstream Output;
	Output.open("D:/Temp2.h");


	//system("pause");
	
	string g;
	string Company;
	string ReversValue[10];
	short int ReversValueCounter = 0;
	short int Last = 0;
	short int CSUM = 0;

	getline(Input,Buffer1D,'^');	
	Output << Buffer1D ;
	Buffer1D = "11";
	
	while( FindSubstringString(Buffer1D,"\n") == 1 ){
		getline(Input,Buffer1D,'\n');
		Output << Buffer1D  << endl;
		if( FindSubstringString(Buffer1D,"^") == 0 ){
			goto Close;
		}
		
		
		if(FindSubstringString(Buffer1D,"{") == 0){
			for( int i = 0 ; i < 50 ; i++){
			getline(Input,Valuse[i],'\n');
			
			//cout << Valuse[i] << endl;
			ValuseFinal[i] = get_all_text_after( Valuse[i], ' ' ).substr(0, get_all_text_after( Valuse[i], ' ' ).find(" "));
			CompanyValue[i] = get_all_text_after( Valuse[i], ' ' ).substr(0, get_all_text_after( Valuse[i], '/' ).find(" "));
			ValuseFinal2[i] = ValuseFinal[i];
			RemoveString(ValuseFinal2[i],number0);
			RemoveString(ValuseFinal2[i],number1);
			RemoveString(ValuseFinal2[i],number2);
			RemoveString(ValuseFinal2[i],number3);
			RemoveString(ValuseFinal2[i],number4);
			RemoveString(ValuseFinal2[i],number5);
			RemoveString(ValuseFinal2[i],number6);
			RemoveString(ValuseFinal2[i],number7);
			RemoveString(ValuseFinal2[i],number8);
			RemoveString(ValuseFinal2[i],number9);

			ValuseFinal3[i] = get_all_text_after( Valuse[i], '_' ).substr(0, get_all_text_after( Valuse[i], '_' ).find(" "));

			if ( FindSubstringString(Valuse[i],"}") == 0 ){
					Count = 1;
					for(int k = 0 ; k <= i ; k++ ){	
						g= get_last_STH(Valuse[k],':');
						Company = ";//Motorolla";
						RemoveString(g,Company);
						RemoveString(g,Space2);
						Last = atoi(g.c_str());

						if( (FindSubstringString(CompanyValue[k],"Motorolla") == 0) && (Last<8) ){
							CSUM = CSUM + Last;
							cout << "-" << CSUM << endl;
							ReversValue[ReversValueCounter] = Valuse[k] ;
							ReversValueCounter++;
							cout << "+" << ReversValueCounter << endl;
							if(CSUM >= 8){								
								for(int i = ReversValueCounter-1 ; i>=0 ; i--){
									Output << ReversValue[i] << endl;
								}							
								CSUM = 0;
								ReversValueCounter = 0;							 
							}			
						}
						else{
							Output <<Valuse[k] << endl;
						}		
					}
					i = 51;
					//system("pause");
				}
			}
		}		
//system("pause");
	}
	Close:
	while( !Input.eof() ){
		getline(Input,Buffer1D,'\n');
		Output << Buffer1D  << endl;
	}

	Input.close();
	Output.close();
}

void AddCounter(){

	ifstream Input;
	Input.open(HeaderName);

	ofstream Output;
	Output.open(Hname);

	string MOTC = "//Motorolla",INTC = "//Intel";

	getline(Input,Buffer1D,'^');	
	Output << Buffer1D ;
	//system("pause");
	Buffer1D = "11";

	string BANK;

	while( FindSubstringString(Buffer1D,"\n") == 1 ){
		getline(Input,Buffer1D,'\n');
		Output << Buffer1D  << endl;
		if( FindSubstringString(Buffer1D,"^") == 0 ){
				goto Close;
			}
		//system("pause");
		//
		if(FindSubstringString(Buffer1D,"{") == 0){
			//cout << "++"  << endl;
			for( int i = 0 ; i < 50 ; i++){
			getline(Input,Valuse[i],'\n');

			//cout << Valuse[i] << endl;
			ValuseFinal[i] = get_all_text_after( Valuse[i], ' ' ).substr(0, get_all_text_after( Valuse[i], ' ' ).find(" "));
			CompanyValue[i] = get_all_text_after( Valuse[i], ' ' ).substr(0, get_all_text_after( Valuse[i], '/' ).find(" "));
			ValuseFinal2[i] = ValuseFinal[i];
			RemoveString(ValuseFinal2[i],number0);
			RemoveString(ValuseFinal2[i],number1);
			RemoveString(ValuseFinal2[i],number2);
			RemoveString(ValuseFinal2[i],number3);
			RemoveString(ValuseFinal2[i],number4);
			RemoveString(ValuseFinal2[i],number5);
			RemoveString(ValuseFinal2[i],number6);
			RemoveString(ValuseFinal2[i],number7);
			RemoveString(ValuseFinal2[i],number8);
			RemoveString(ValuseFinal2[i],number9);

			ValuseFinal3[i] = get_all_text_after( Valuse[i], '_' ).substr(0, get_all_text_after( Valuse[i], '_' ).find(" "));

			if ( FindSubstringString(Valuse[i],"}") == 0 ){
				int k ;
					Count = 1;
					/*=======================================================*/
					k=0;
						if(FindSubstringString(CompanyValue[k],"Motorolla") == 0){
							if((ValuseFinal2[k] == ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k+2]) && (ValuseFinal2[k] != ValuseFinal2[k-1]) && (ValuseFinal2[k] != "bitfReserve") && (ValuseFinal3[k] == ValuseFinal3[k+1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << "_MSB :" << BANK << endl;
								Count = 1;								
							}
							else if((ValuseFinal2[k] != ValuseFinal2[k+1]) && (ValuseFinal2[k] != "bitfReserve") && (ValuseFinal3[k] == ValuseFinal3[k-1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << "_LSB :" << BANK << endl;
								Count = 1;
							}
							else if( ( (ValuseFinal[k] == ValuseFinal[k+1]) && (ValuseFinal2[k] != "bitfReserve")) || ( (ValuseFinal[k] == ValuseFinal[k+1]) && (ValuseFinal[k] == ValuseFinal[k+2]) && (ValuseFinal2[k] != "bitfReserve") )){
								Count++;
							}
							else if( (ValuseFinal[k] != ValuseFinal[k+1]) && (ValuseFinal2[k] != "bitfReserve")){
								for(int h = Count ; h > 1 ; h--){ 
									BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
									Output << "int8u " << ValuseFinal[k] << "_" << h << " :" << BANK << endl;
								}
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << " :" << BANK << endl;
								Count = 1;
							}
							else {
								Valuse[k] = RemoveString(Valuse[k],MOTC);
								Output <<Valuse[k] << endl;
							}			
						}
						else{
							if((ValuseFinal2[k] == ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k+2]) && ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 ) && (ValuseFinal3[k] == ValuseFinal3[k+1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
								Output << "int8u " << ValuseFinal[k] << "_LSB :" << BANK << endl;
								Count = 1;
							}
							else if((ValuseFinal2[k] != ValuseFinal2[k+1]) && ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 ) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
								Output << "int8u " << ValuseFinal[k] << "_MSB :" << BANK << endl;
								Count = 1;
							}
							else{
								if((ValuseFinal[k] == ValuseFinal[k-1]) &&  ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 )){
									Count++;
									BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
									Output << "int8u " << ValuseFinal[k] << "_" << Count << " :" << BANK << endl;
								}
								else{
									Valuse[k] = RemoveString(Valuse[k],INTC);
									Output <<Valuse[k] << endl;
								}
							}
						}
					/*=======================================================*/
					k=1;
						if(FindSubstringString(CompanyValue[k],"Motorolla") == 0){
							if((ValuseFinal2[k] == ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k+2]) && (ValuseFinal2[k] != ValuseFinal2[k-1]) && (ValuseFinal2[k] != "bitfReserve") && (ValuseFinal3[k] == ValuseFinal3[k+1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << "_MSB :" << BANK << endl;
								Count = 1;								
							}
							else if((ValuseFinal2[k] != ValuseFinal2[k+1]) && (ValuseFinal2[k] == ValuseFinal2[k-1]) && (ValuseFinal2[k] != "bitfReserve") && (ValuseFinal3[k] == ValuseFinal3[k-1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << "_LSB :" << BANK << endl;
								Count = 1;
							}
							else if( ((ValuseFinal[k] == ValuseFinal[k-1]) && (ValuseFinal[k] == ValuseFinal[k+1]) && (ValuseFinal2[k] != "bitfReserve")) || ( (ValuseFinal[k] == ValuseFinal[k+1]) && (ValuseFinal[k] == ValuseFinal[k+2]) && (ValuseFinal2[k] != "bitfReserve") )){
								Count++;
							}
							else if((ValuseFinal[k] == ValuseFinal[k-1]) && (ValuseFinal[k] != ValuseFinal[k+1]) && (ValuseFinal2[k] != "bitfReserve")){
								for(int h = Count ; h > 1 ; h--){ 
									BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
									Output << "int8u " << ValuseFinal[k] << "_" << h << " :" << BANK << endl;
								}
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << " :" << BANK << endl;
								Count = 1;
							}
							else {
								Valuse[k] = RemoveString(Valuse[k],MOTC);
								Output <<Valuse[k] << endl;
							}			
						}
						else{
							if((ValuseFinal2[k] == ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k+2]) && (ValuseFinal2[k] != ValuseFinal2[k-1]) && ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 ) && (ValuseFinal3[k] == ValuseFinal3[k+1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
								Output << "int8u " << ValuseFinal[k] << "_LSB :" << BANK << endl;
								Count = 1;
							}
							else if((ValuseFinal2[k] != ValuseFinal2[k+1]) && (ValuseFinal2[k] == ValuseFinal2[k-1]) && ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 ) && (ValuseFinal3[k] == ValuseFinal3[k-1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
								Output << "int8u " << ValuseFinal[k] << "_MSB :" << BANK << endl;
								Count = 1;
							}
							else{
								if((ValuseFinal[k] == ValuseFinal[k-1]) &&  ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 )){
									Count++;
									BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
									Output << "int8u " << ValuseFinal[k] << "_" << Count << " :" << BANK << endl;
								}
								else{
									Valuse[k] = RemoveString(Valuse[k],INTC);
									Output <<Valuse[k] << endl;
								}
							}
						}
					/*=======================================================*/
					for(k = 2 ; k <= i ; k++ ){
						if(FindSubstringString(CompanyValue[k],"Motorolla") == 0){
							if((ValuseFinal2[k] == ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k+2]) && (ValuseFinal2[k] != ValuseFinal2[k-1]) && (ValuseFinal2[k] != "bitfReserve") && (ValuseFinal3[k] == ValuseFinal3[k+1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << "_MSB :" << BANK << endl;
								Count = 1;								
							}
							else if((ValuseFinal2[k] != ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k-2]) && (ValuseFinal2[k] == ValuseFinal2[k-1]) && (ValuseFinal2[k] != "bitfReserve") && (ValuseFinal3[k] == ValuseFinal3[k-1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << "_LSB :" << BANK << endl;
								Count = 1;
							}
							else if( ((ValuseFinal[k] == ValuseFinal[k-1]) && (ValuseFinal[k] == ValuseFinal[k+1]) && (ValuseFinal2[k] != "bitfReserve")) || ( (ValuseFinal[k] == ValuseFinal[k+1]) && (ValuseFinal[k] == ValuseFinal[k+2]) && (ValuseFinal2[k] != "bitfReserve") )){
								Count++;
							}
							else if((ValuseFinal[k] == ValuseFinal[k-1]) && (ValuseFinal[k] != ValuseFinal[k+1]) && (ValuseFinal2[k] != "bitfReserve")){
								for(int h = Count ; h > 1 ; h--){ 
									BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
									Output << "int8u " << ValuseFinal[k] << "_" << h << " :" << BANK << endl;
								}
								BANK = RemoveString(get_last_STH(Valuse[k],':'),MOTC);
								Output << "int8u " << ValuseFinal[k] << " :" << BANK << endl;
								Count = 1;
							}
							else {
								Valuse[k] = RemoveString(Valuse[k],MOTC);
								Output <<Valuse[k] << endl;
							}			
						}
						else{
							if((ValuseFinal2[k] == ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k+2]) && (ValuseFinal2[k] != ValuseFinal2[k-1]) && ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 ) && (ValuseFinal3[k] == ValuseFinal3[k+1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
								Output << "int8u " << ValuseFinal[k] << "_LSB :" << BANK << endl;
								Count = 1;
							}
							else if((ValuseFinal2[k] != ValuseFinal2[k+1]) && (ValuseFinal2[k] != ValuseFinal2[k-2]) && (ValuseFinal2[k] == ValuseFinal2[k-1]) && ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 ) && (ValuseFinal3[k] == ValuseFinal3[k-1]) ){
								BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
								Output << "int8u " << ValuseFinal[k] << "_MSB :" << BANK << endl;
								Count = 1;
							}
							else{
								if((ValuseFinal[k] == ValuseFinal[k-1]) &&  ( FindSubstringString(ValuseFinal2[k],"Reserve") == 1 )){
									Count++;
									BANK = RemoveString(get_last_STH(Valuse[k],':'),INTC);
									Output << "int8u " << ValuseFinal[k] << "_" << Count << " :" << BANK << endl;
								}
								else{
									Valuse[k] = RemoveString(Valuse[k],INTC);
									Output <<Valuse[k] << endl;
								}
							}
						}
					}
					i = 51;
					//system("pause");
				}
			}
		}
//system("pause");
	}
	Close:
	while( !Input.eof() ){
		getline(Input,Buffer1D,'\n');
		Output << Buffer1D  << endl;
	}


	Input.close();
	Output.close();
}

void C_file(string Address){

	ofstream Cfile;
	Cfile.open(Address, ios_base::app | ios_base::out);

	C_Header(Address,"2018","CAN_SignalsManagement.c");
	Massage(Address,"MODULES USED");

	Cfile <<" /** Include header file for Operating System                                                 */ "<< endl;
	Cfile <<" #include \"RTOS.H\" "<< endl;
	Cfile <<" /** Include project header file with basic definitions                                       */ " << endl;
	Cfile <<" #include \"typedefs.h\" "<< endl;
	Cfile <<" /** Include project header file with parameters definitions                                  */ "<< endl;
	Cfile <<" #include \"Global_Definition.h\" "<< endl;
	Cfile <<" /** Include header file for definition of message type between tasks                         */ "<< endl;
	Cfile <<" #include \"InterTaskCom.h\" "<< endl;
	Cfile <<" /** Include header file for definition of CAN signals names                          */ "<< endl;
	Cfile <<" #include \"can_signal_ids.h\" "<< endl;
	Cfile <<" /** Include header file for the network management                                       */ "<< endl;
	Cfile <<" #include \"CAN_NetworkManagement.h\" "<< endl;
	Cfile <<" /** Include header file for the communication management of the node              */ "<< endl;
	Cfile <<" #include \"CAN_Interaction.h\" "<< endl;
	Cfile <<" /** Include header file for the CAN database                                             */ "<< endl;
	Cfile <<" #include \"CAN_DataBaseDef.h\" "<< endl;
	Cfile <<" /** Include header file for definitions and macros to access defined task         */ "<< endl;
	Cfile <<" #include \"Os_Init.h\" "<< endl;
	Cfile <<" #include \"VERSION.h\" "<< endl;
	Cfile <<" #include \"DIAG_DTC.h\" "<< endl;
	Cfile <<" #include \"EEPROM_MGT.h\" "<< endl;
	Cfile <<" #include \"eel.h\" "<< endl;
	Cfile <<" #include \"CPL.h\" "<< endl;
	Cfile <<" /** Include header file for default value of Distance (Odo)*/ "<< endl;
	Cfile <<" #include \"EMS7.h\" "<< endl;
	Cfile <<" #include \"CAN_SignalsManagement.h\" "<< endl;

	Massage(Address,"DEFINITIONS AND MACROS");

	

	Cfile <<"/*TBD Trigger*/"<< endl;

		string Junk;

	for(int t = 0 ; t < InputsCounter ; t++){
		ifstream Input;
		Input.open(DBC_Address);
		getline(Input,Junk,'\n');
		while(!Input.eof()){
			
			if(FindSubstringString(Junk,Inputs[t])==0){  
				do{
					BreakCounter++;
					if(BreakCounter == 100){
						goto jump;
					}

				//cout << "__" << Junk << "__" << endl;
				InputsCounter2[t]++;
				//cout << "count=" << InputsCounter2[t]<< endl;
				//system("pause");
				getline(Input,Junk,'\n');

				if(Lenght_t[t] == "\0"){
				Lenght_t[t] = get_all_text_after(Junk, '|').substr(0,get_all_text_after(Junk, '|').find("@"));
				//cout << "lenght=" << Lenght_t[t]<< endl;
				Lenght_tt[t] = atoi(Lenght_t[t].c_str());
				/*
					if(Lenght_tt[t] > 8){
						Lenght_tt[t] = (Lenght_tt[t]/8);
						InputsCounter2[t] = InputsCounter2[t] + Lenght_tt[t];
							if(InputsCounter2[t] >= 3){
								InputsCounter2[t]--;
							}
					}
				*/
				}
				//system("pause");

				}
				while(!FindSubstringString(Junk,"BO_")==0);
			}
			else{
				getline(Input,Junk,'\n');
			}
		}
		Input.close();
	}
	jump:
	bool definition = false;
	string junk;
	ifstream MY_DBC;
	MY_DBC.open(DBC_Address);

	while(!MY_DBC.eof()){
		getline(MY_DBC,junk,'\n');
			if( FindSubstringString(junk,"BA_DEF_DEF_  \"ModeTransmission\"") == 0){
			definition = true;
			break;
			}
			else{
				definition = false;
			}
	}

	Cfile.close();

}

void C_file2(string Address){

	ofstream Cfile2;
	Cfile2.open(Address, ios_base::app | ios_base::out);

	locale loc;
	string SignalToUpper;

	Massage(Address,"Exported functions");

	Cfile2 <<	"void IPL_Void" << "UpdateSignal ( int8u int8uSignalId, int32u *pint32uValue ){" << endl;
	Cfile2 << "int8u\tint8uFrameId;\nFrameManagementType	*pstructFrameInfo;\nint8u\tint8uSignalChanged = FALSE;\n/* Find frame ID */\nint8uFrameId = AInt8u" << "SignalToFrameId[int8uSignalId];\npstructFrameInfo = &IPL_AStructFrameInfo" << "[int8uFrameId];\n/* Blocks TX buffers */\nOS_Use (&OPS_StructTxBufferSema);\n" << endl;
	Cfile2 << "switch (int8uFrameId)\n{" << endl;
	
	bool WriteID;
	
	for(int c=0 ; c<ID_Counter5; c++){

		WriteID = false;

			for(int i  = 0 ; i < 30 ; i++){
				if(Print[c]->Signal1[i]!=""){
					for(int a = 0 ; a < AppLayerCounter ; a++){					
						if( FindSubstringString(Print[c]->Signal1[i],AppLayerSignal[a]) == 0 ){
							if(AppLayerValue[a] == "1"){
								WriteID = true;
								
							}
						}
					}
				}
			}

		if( (FindSubstringString(Print[c]->Message,"DIAG") !=0) && (FindSubstringString(Print[c]->Message,"SUPERVISION") !=0) && (WriteID == true)  ){
			//if( Print[c]->transmiterNode == Selected_Node ){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
			Cfile2 << "case " << Print[c]->Message  << "," << endl;
			Cfile2 << "\tswitch (int8uSignalId){" << endl;
			for(int i  = 0 ; i < 30 ; i++){
				if(Print[c]->Signal1[i]!=""){
					SignalToUpper = Print[c]->Signal1[i];
					for(int u = 0 ; u < (int)SignalToUpper.length() ; u++){
						SignalToUpper[u] = toupper(SignalToUpper[u],loc);						
					}
									
					Cfile2 << "\t\tcase " << Print[c]->Signal1[i] << endl; 
					Cfile2 <<"\t\tpTsIcnVdsSignal->Bitf8_" << SignalToUpper << "= (*pint32uValue & 0x" << hex << pow(2,Print2[c]->Lenght[i])-1 << ");" << endl;
					Cfile2 <<"\t\tint8uSignalChanged = TRUE;\n\t\tbreak;" << endl;
				
				}
			}
			Cfile2 << "}\n" << endl;
		}
	}
}

void C_file5(string Address){

	DEF_PROD(DBC_Address);
	DEF_CONS_INIT(DBC_Address);
	PROD(DBC_Address);
	CONS_INIT(DBC_Address);
	ofstream Cfile5;
	Cfile5.open(Address, ios_base::app | ios_base::out);

	Cfile5 << "void IPL_VoidInitCanBuffer" << " (void)\n{" << endl;
	Cfile5 << "static bool boolFirstInit = TRUE;" << endl;
	Cfile5 << "if(boolFirstInit == TRUE)\n{" << endl;
	Cfile5 << "boolFirstInit = FALSE;" << endl;
	for(int c=0 ; c<ID_Counter5; c++){
		if( (Inputs[c] != "") ){//TBD   in all databases "ICN_Answer_Diag" must change to "ICN Diagnostic response"	 
			Cfile5 << "IPL_AStructFrameInfo[" << Inputs[c] << "].pint8uData = AInt8u" << Inputs[c] << "Buffer;" << endl;
		}
	}
	Cfile5 << "//TX" << endl;
	for(int c=0 ; c<ID_Counter5; c++){
		if( Print[c]->transmiterNode == Selected_Node ){ 
			LastTX_MSG = Print[c]->Message;
			for(int h =0 ; h < 30 ; h++){
				if(Print[c]->Signal1[h] != ""){
					for(int a = 0 ; a < AppLayerCounter ; a++){					
						if( FindSubstringString(Print[c]->Signal1[h],AppLayerSignal[a]) == 0 ){
							if(AppLayerValue[a] == "1"){
								for(int t=0 ; t<PROD_Counter ; t++){
									if ( FindSubstringString(PROD_SignalValue[t],Print[c]->Signal1[h]) == 0 ){
										Cfile5 << "pTs_" << Print[c]->Message << "Signal->Bitf1" << Print[c]->Signal1[h] << " = 0x" << hex << PROD_Value_N[t] << ";" << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	RX_Nodes5(DBC_Address,Selected_Node,Address);

	Cfile5 << "\t}\n" << endl;
	Cfile5 << "}\n" << endl;
	Cfile5.close();

}

void FrameDef(string Address){

	FIFO_DEF(DBC_Address);
	MSG_FIFO(DBC_Address);
	Periodic_DEF(DBC_Address);
	Periodic(DBC_Address);
	GetDLC2(DBC_Address);
	GetTXRX(DBC_Address);

	ofstream FrameDef_Write;
	FrameDef_Write.open(Address, ios_base::app | ios_base::out);

	FrameDef_Write << "#ifdef _" << Selected_Node << endl;

	FrameDef_Write << "const FrameDefRomType IPL_AStructCAN" <<"FrameDefRom[IPL_NB_" << Selected_Node << "_MSG] =\n{" << endl;

	RX_Nodes4(DBC_Address,Selected_Node);

	


	for(int j = 0 ; j < ID_Counter5 ; j++){
		if(TXRX[j] == Selected_Node){
				count8++;
			}
		}
	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int t =0 ; t < 100 ; t++){
			if( Print2[i]->ID == RX_NodesBufferID[t]){
				count8++;
			}
		}
	}
	for(int j = 0 ; j < ID_Counter5 ; j++){
		if(TXRX[j] == Selected_Node){
			DID_Count++;
			FrameDef_Write << "{ 0x" << hex << Print2[j]->DID  << ",\t" << dec << Periodic4_4[j] << ",\t" << OffsetFinal[j] << ",\t" << DLC3[j] << ",\t" << SupervisionFinal[j] << "\t,"  << TXRX[j] << "\t," << "0x" << hex << FIFO[j] << "\t," << "_NODE_IDENTIFIER},//TX," << Print2[j]->ID << endl;
		}
	}
	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int t =0 ; t < 100 ; t++){
			if( Print2[i]->ID == RX_NodesBufferID[t]){
				DID_Count++;
				if(DID_Count<count8){
					FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER},//RX," << Print2[i]->ID << endl;
				}
				else{
					FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER}//RX," << Print2[i]->ID << endl;
				}
			}
		}
	}

	FrameDef_Write << "}" << endl;
	FrameDef_Write << "#endif" << endl;
	//===================================================================================================================================================//		
		FrameDef_Write << "/* TX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u"  << Selected_Node << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
	for(int i =0 ; i<ID_Counter5 ; i++){
		if( (Massagese[i] != "") && (NodeT[i] == Selected_Node) && (FindSubstringString(Massagese[i],"DIAG") != 0) ){
			FrameDef_Write << "int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
			FrameNode[FrameNodeCounter] = Massagese[i];
			FrameNodeCounter++;
			TXRXCounter++;
		}
	}

	FrameDef_Write << "/* RX */" << "\n" << endl;
	//FrameDef_Write << "int8u AInt8u" << Selected_Node << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;

	RX_Nodes3(DBC_Address,Selected_Node,Address,1);

	//===================================================================================================================================================//	
	FrameDef_Write << "\n" << "/* Used for accessing signals in CAN*/" << endl;
	//FrameDef_Write << Selected_Node << "_DIAGNOSTIC_ANSWER" << "Type\t\t*PStruct" << Selected_Node << "_DIAGNOSTIC_ANSWER" << "Signal\t\t = (" << Selected_Node << "_DIAGNOSTIC_ANSWER" << "Type*)AInt8u" << Selected_Node << "_DIAGNOSTIC_ANSWER" << "Buffer;" << endl;
	//FrameDef_Write << Selected_Node << "_DIAGNOSTIC_REQUEST" << "Type\t\t*PStruct" << Selected_Node << "_DIAGNOSTIC_REQUEST" << "Signal\t\t = (" << Selected_Node << "_DIAGNOSTIC_REQUEST" << "Type*)AInt8u" << Selected_Node << "_DIAGNOSTIC_REQUEST" << "Buffer;" << endl;
	for(int c=0 ; c<FrameNodeCounter; c++){
		if(FindSubstringString(FrameNode[c],"DIAG") != 0){
			FrameDef_Write << "Ts" << FrameNode[c] << "Type\t\t*PStruct" << "Ts" << FrameNode[c] << "Signal\t\t = (" << "Ts" << FrameNode[c] << "Type*)AInt8u" << "Ts" << FrameNode[c] << "Buffer;" << endl;
		}
	}

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

	FrameDef_Write << "#ifdef _" << Selected_Node2 << endl;

	FrameDef_Write << "const FrameDefRomType IPL_AStructCAN" <<"FrameDefRom[IPL_NB_" << Selected_Node << "_MSG] =\n{" << endl;

	RX_Nodes4(DBC_Address,Selected_Node2);

	if(Selected_Node2!=""){
		count8 = 0 ;
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node2){
				count8++;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					count8++;
				}
			}
		}

		RX_Nodes4(DBC_Address,Selected_Node2);
	
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node){
				DID_Count++;
					FrameDef_Write << "{ 0x" << hex << Print2[j]->DID  << ",\t" << dec << Periodic4_4[j] << ",\t" << OffsetFinal[j] << ",\t" << DLC3[j] << ",\t" << SupervisionFinal[j] << "\t,"  << TXRX[j] << "\t," << "0x" << hex << FIFO[j] << "\t," << "_NODE_IDENTIFIER},//TX," << Print2[j]->ID << endl;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					DID_Count++;
					if(DID_Count<count8){
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER},//RX," << Print2[i]->ID << endl;
					}
					else{
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER}//RX" << Print2[i]->ID << endl;
					}
				}
			}
		}

		FrameDef_Write << "}" << endl;
		FrameDef_Write << "#endif" << endl;
		//===================================================================================================================================================//		
		FrameDef_Write << "/* TX */" << "\n" << endl;	
		//FrameDef_Write << "int8u AInt8u"  << Selected_Node2 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
		for(int i =0 ; i<ID_Counter5 ; i++){
			if( (Massagese[i] != "") && (NodeT[i] == Selected_Node2) && (FindSubstringString(Massagese[i],"DIAG") != 0) ){
				FrameDef_Write << "int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
				FrameNode2[FrameNodeCounter2] = Massagese[i];
				FrameNodeCounter2++;
				TXRXCounter2++;
			}
		}

		FrameDef_Write << "/* RX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u" << Selected_Node2 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
		RX_Nodes3(DBC_Address,Selected_Node2,Address,2);
		//===================================================================================================================================================//	
		FrameDef_Write << "\n" << "/* Used for accessing signals in CAN */" << endl;
		//FrameDef_Write << Selected_Node2 << "_DIAGNOSTIC_ANSWER" << "Type\t\t*PStruct" << Selected_Node2 << "_DIAGNOSTIC_ANSWER" << "Signal\t\t = (" << Selected_Node2 << "_DIAGNOSTIC_ANSWER" << "Type*)AInt8u" << Selected_Node2 << "_DIAGNOSTIC_ANSWER" << "Buffer;" << endl;
		//FrameDef_Write << Selected_Node2 << "_DIAGNOSTIC_REQUEST" << "Type\t\t*PStruct" << Selected_Node2 << "_DIAGNOSTIC_REQUEST" << "Signal\t\t = (" << Selected_Node2 << "_DIAGNOSTIC_REQUEST" << "Type*)AInt8u" << Selected_Node2 << "_DIAGNOSTIC_REQUEST" << "Buffer;" << endl;
		for(int c=0 ; c<FrameNodeCounter2; c++){
			if(FindSubstringString(FrameNode[c],"DIAG") != 0){
				FrameDef_Write << FrameNode2[c] << "Type\t\t*PStruct" << FrameNode2[c] << "Signal\t\t = (" << FrameNode2[c] << "Type*)AInt8u" << FrameNode2[c] << "Buffer;" << endl;
			}
		}
	}

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//	

	FrameDef_Write << "#ifdef _" << Selected_Node3 << endl;

	FrameDef_Write << "const FrameDefRomType IPL_AStructCAN" <<"FrameDefRom[IPL_NB_" << Selected_Node << "_MSG] =\n{" << endl;

	RX_Nodes4(DBC_Address,Selected_Node3);

	if(Selected_Node3!=""){
		count8 = 0 ;
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node2){
				count8++;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					count8++;
				}
			}
		}

		 RX_Nodes4(DBC_Address,Selected_Node3);
	
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node){
				DID_Count++;
				FrameDef_Write << "{ 0x" << hex << Print2[j]->DID  << ",\t" << dec << Periodic4_4[j] << ",\t" << OffsetFinal[j] << ",\t" << DLC3[j] << ",\t" << SupervisionFinal[j] << "\t,"  << TXRX[j] << "\t," << "0x" << hex << FIFO[j] << "\t," << "_NODE_IDENTIFIER},//TX," << Print2[j]->ID << endl;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					DID_Count++;
					if(DID_Count<count8){
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER},//RX," << Print2[i]->ID << endl;
					}
					else{
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER}//RX" << Print2[i]->ID << endl;
					}
				}
			}
		}

		FrameDef_Write << "}" << endl;
		FrameDef_Write << "#endif" << endl;
		//===================================================================================================================================================//		
		FrameDef_Write << "/* TX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u"  << Selected_Node3 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
		for(int i =0 ; i<ID_Counter5 ; i++){
			if( (Massagese[i] != "") && (NodeT[i] == Selected_Node3) && (FindSubstringString(Massagese[i],"DIAG") != 0) ){
				FrameDef_Write << "int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
				FrameNode3[FrameNodeCounter3] = Massagese[i];
				FrameNodeCounter3++;
				TXRXCounter3++;
			}
		}

		FrameDef_Write << "/* RX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u" << Selected_Node3 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
		RX_Nodes3(DBC_Address,Selected_Node3,Address,3);
		//===================================================================================================================================================//	
		FrameDef_Write << "\n" << "/* Used for accessing signals in CAN */" << endl;
		//FrameDef_Write << Selected_Node3 << "_DIAGNOSTIC_ANSWER" << "Type\t\t*PStruct" << Selected_Node3 << "_DIAGNOSTIC_ANSWER" << "Signal\t\t = (" << Selected_Node3 << "_DIAGNOSTIC_ANSWER" << "Type*)AInt8u" << Selected_Node3 << "_DIAGNOSTIC_ANSWER" << "Buffer;" << endl;
		//FrameDef_Write << Selected_Node3 << "_DIAGNOSTIC_REQUEST" << "Type\t\t*PStruct" << Selected_Node3 << "_DIAGNOSTIC_REQUEST" << "Signal\t\t = (" << Selected_Node3 << "_DIAGNOSTIC_REQUEST" << "Type*)AInt8u" << Selected_Node3 << "_DIAGNOSTIC_REQUEST" << "Buffer;" << endl;
		for(int c=0 ; c<FrameNodeCounter3; c++){
			if(FindSubstringString(FrameNode[c],"DIAG") != 0){
				FrameDef_Write << FrameNode3[c] << "Type\t\t*PStruct" << FrameNode3[c] << "Signal\t\t = (" << FrameNode3[c] << "Type*)AInt8u" << FrameNode3[c] << "Buffer;" << endl;
			}
		}
	}

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

	FrameDef_Write << "#ifdef _" << Selected_Node4 << endl;

	FrameDef_Write << "const FrameDefRomType IPL_AStructCAN" <<"FrameDefRom[IPL_NB_" << Selected_Node << "_MSG] =\n{" << endl;

	RX_Nodes4(DBC_Address,Selected_Node4);

	if(Selected_Node4!=""){

		count8 = 0 ;
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node2){
				count8++;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					count8++;
				}
			}
		}

		 RX_Nodes4(DBC_Address,Selected_Node4);
	
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node){
				DID_Count++;
				FrameDef_Write << "{ 0x" << hex << Print2[j]->DID  << ",\t" << dec << Periodic4_4[j] << ",\t" << OffsetFinal[j] << ",\t" << DLC3[j] << ",\t" << SupervisionFinal[j] << "\t,"  << TXRX[j] << "\t," << "0x" << hex << FIFO[j] << "\t," << "_NODE_IDENTIFIER},//TX," << Print2[j]->ID << endl;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					DID_Count++;
					if(DID_Count<count8){
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER},//RX," << Print2[i]->ID << endl;
					}
					else{
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER}//RX" << Print2[i]->ID << endl;
					}
				}
			}
		}

		FrameDef_Write << "}" << endl;
		FrameDef_Write << "#endif" << endl;
		//===================================================================================================================================================//		
		FrameDef_Write << "/* TX */" << "\n" << endl;	
		//FrameDef_Write << "int8u AInt8u"  << Selected_Node4 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
		for(int i =0 ; i<ID_Counter5 ; i++){
			if( (Massagese[i] != "") && (NodeT[i] == Selected_Node4) && (FindSubstringString(Massagese[i],"DIAG") != 0) ){
				FrameDef_Write << "int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
				FrameNode4[FrameNodeCounter4] = Massagese[i];
				FrameNodeCounter4++;
				TXRXCounter4++;
			}
		}

		FrameDef_Write << "/* RX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u" << Selected_Node4 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
		RX_Nodes3(DBC_Address,Selected_Node4,Address,4);
		//===================================================================================================================================================//	
		FrameDef_Write << "\n" << "/* Used for accessing signals in CAN */" << endl;
		//FrameDef_Write << Selected_Node4 << "_DIAGNOSTIC_ANSWER" << "Type\t\t*PStruct" << Selected_Node4 << "_DIAGNOSTIC_ANSWER" << "Signal\t\t = (" << Selected_Node4 << "_DIAGNOSTIC_ANSWER" << "Type*)AInt8u" << Selected_Node4 << "_DIAGNOSTIC_ANSWER" << "Buffer;" << endl;
		//FrameDef_Write << Selected_Node4 << "_DIAGNOSTIC_REQUEST" << "Type\t\t*PStruct" << Selected_Node4 << "_DIAGNOSTIC_REQUEST" << "Signal\t\t = (" << Selected_Node4 << "_DIAGNOSTIC_REQUEST" << "Type*)AInt8u" << Selected_Node4 << "_DIAGNOSTIC_REQUEST" << "Buffer;" << endl;
		for(int c=0 ; c<FrameNodeCounter4; c++){
			if(FindSubstringString(FrameNode[c],"DIAG") != 0){
				FrameDef_Write << FrameNode4[c] << "Type\t\t*PStruct" << FrameNode4[c] << "Signal\t\t = (" << FrameNode4[c] << "Type*)AInt8u" << FrameNode4[c] << "Buffer;" << endl;
			}
		}
	}

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

	FrameDef_Write << "#ifdef _" << Selected_Node5 << endl;

	FrameDef_Write << "const FrameDefRomType IPL_AStructCAN" <<"FrameDefRom[IPL_NB_" << Selected_Node << "_MSG] =\n{" << endl;

	RX_Nodes4(DBC_Address,Selected_Node5);

	if(Selected_Node5!=""){

		count8 = 0 ;
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node2){
				count8++;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
				count8++;
				}
			}
		}

		 RX_Nodes4(DBC_Address,Selected_Node5);
	
		for(int j = 0 ; j < ID_Counter5 ; j++){
			if(TXRX[j] == Selected_Node){
				DID_Count++;
				FrameDef_Write << "{ 0x" << hex << Print2[j]->DID  << ",\t" << dec << Periodic4_4[j] << ",\t" << OffsetFinal[j] << ",\t" << DLC3[j] << ",\t" << SupervisionFinal[j] << "\t,"  << TXRX[j] << "\t," << "0x" << hex << FIFO[j] << "\t," << "_NODE_IDENTIFIER},//TX," << Print2[j]->ID << endl;
			}
		}
		for(int i = 0 ; i < ID_Counter5 ; i++){
			for(int t =0 ; t < 100 ; t++){
				if( Print2[i]->ID == RX_NodesBufferID[t]){
					DID_Count++;
					if(DID_Count<count8){
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER},//RX," << Print2[i]->ID << endl;
					}
					else{
						FrameDef_Write << "{ 0x" << hex <<  Print2[i]->DID << ",\t" << dec << (Periodic4_4[i]/*+(0.1*Periodic4_4[i])*/) << ",\t" << OffsetFinal[i] << ",\t" << DLC3[i] << ",\t" << SupervisionFinal[i] << "\t," << TXRX[i] << "\t," << "0x" << hex << FIFO[i] << "\t," << "_NODE_IDENTIFIER}//RX" << Print2[i]->ID << endl;
					}
				}
			}
		}
		FrameDef_Write << "}" << endl;
		FrameDef_Write << "#endif" << endl;
		//===================================================================================================================================================//		
		FrameDef_Write << "/* TX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u"  << Selected_Node5 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
		//FrameDef_Write << Selected_Node5 << "_DIAGNOSTIC_ANSWER" << "Type\t\t*PStruct" << Selected_Node5 << "_DIAGNOSTIC_ANSWER" << "Signal\t\t = (" << Selected_Node5 << "_DIAGNOSTIC_ANSWER" << "Type*)AInt8u" << Selected_Node5 << "_DIAGNOSTIC_ANSWER" << "Buffer;" << endl;
		//FrameDef_Write << Selected_Node5 << "_DIAGNOSTIC_REQUEST" << "Type\t\t*PStruct" << Selected_Node5 << "_DIAGNOSTIC_REQUEST" << "Signal\t\t = (" << Selected_Node5 << "_DIAGNOSTIC_REQUEST" << "Type*)AInt8u" << Selected_Node5 << "_DIAGNOSTIC_REQUEST" << "Buffer;" << endl;
		for(int i =0 ; i<ID_Counter5 ; i++){
			if( (Massagese[i] != "") && (NodeT[i] == Selected_Node5) && (FindSubstringString(Massagese[i],"DIAG") != 0) ){
				FrameDef_Write << "int8u AInt8u" << Massagese[i] << "Buffer[" << DLC2[i] << "u];" << endl;
				FrameNode5[FrameNodeCounter5] = Massagese[i];
				FrameNodeCounter5++;
				TXRXCounter5++;
			}
		}

		FrameDef_Write << "/* RX */" << "\n" << endl;
		//FrameDef_Write << "int8u AInt8u" << Selected_Node5 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
		RX_Nodes3(DBC_Address,Selected_Node5,Address,5);
		//===================================================================================================================================================//	
		FrameDef_Write << "\n" << "/*  Used for accessing signals in CAN */" << endl;
		for(int c=0 ; c<FrameNodeCounter5; c++){
			if(FindSubstringString(FrameNode[c],"DIAG") != 0){
				FrameDef_Write << FrameNode5[c] << "Type\t\t*PStruct" << FrameNode5[c] << "Signal\t\t = (" << FrameNode5[c] << "Type*)AInt8u" << FrameNode5[c] << "Buffer;" << endl;
			}
		}
	}
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	FrameDef_Write.close();
}

void FrameDef2(string Address){
	/*
	int CC=0,BB=0,TT=0;

	for(int i=0 ; i<10 ;i++){
	AllNodes2[i]="";
	}

	while(CC<300){
			for(int i=0 ; i<10 ; i++){
				if(NodeT[CC]!=AllNodes2[i]){
					TT++;
				}
			}
			if(TT==10){
				AllNodes2[BB]=NodeT[CC];
				BB++;
			}
			TT=0;
			CC++;
		}
		
		for(int i=0 ; i<35 ;i++){
	FrameDef_Write2 << NodeT[i] << endl;;
	}
	*/
	ofstream FrameDef_Write2;
	FrameDef_Write2.open(Address, ios_base::app | ios_base::out);


//================================================================================================================================//
	FrameDef_Write2 << "/* Define one buffer for all frames managed by the " << Selected_Node << " */" << endl;
	FrameDef_Write2 << "#ifdef _" << Selected_Node << endl;
	FrameDef_Write2 << "//TX" << endl;
	//FrameDef_Write2 << "extern int8u " << Selected_Node << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
	for(int i = 0 ; i < FrameNodeCounter ; i++){
		for(int j =0 ; j<ID_Counter5 ; j++){
			if( Print2[j]->ID == FrameNode[i] ){
				if(i == TXRXCounter){
					FrameDef_Write2 << "//RX" << endl;
					//FrameDef_Write2 << "extern int8u " << Selected_Node << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
				}
				FrameDef_Write2 << "extern int8u AInt" << FrameNode[i] << "Buffer[" << DLC2[j] << "u];" << endl;
			}
		}		
	}
	FrameDef_Write2 << "#endif" << endl;
//================================================================================================================================//
	if(Selected_Node2 != ""){
	FrameDef_Write2 << "/* Define one buffer for all frames managed by the " << Selected_Node2 << " */" << endl;
	FrameDef_Write2 << "#ifdef _" << Selected_Node2  << endl;
	FrameDef_Write2 << "//TX" << endl;
	//FrameDef_Write2 << "extern int8u " << Selected_Node2 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
	for(int i = 0 ; i < FrameNodeCounter2 ; i++){
		for(int j =0 ; j<ID_Counter5 ; j++){
			if( Massagese[j] == FrameNode2[i] ){
				if(i == TXRXCounter2){
					FrameDef_Write2 << "//RX" << endl;
					//FrameDef_Write2 << "extern int8u " << Selected_Node2 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
				}
				FrameDef_Write2 << "extern int8u AInt" << FrameNode2[i] << "Buffer[" << DLC2[j] << "u];" << endl;
			}
		}		
	}
	FrameDef_Write2 << "#endif" << endl;
	}
//================================================================================================================================//
	if(Selected_Node3 != ""){
	FrameDef_Write2 << "/* Define one buffer for all frames managed by the " << Selected_Node3 << " */" << endl;
	FrameDef_Write2 << "#ifdef _" << Selected_Node3  << endl;
	FrameDef_Write2 << "//TX" << endl;
	//FrameDef_Write2 << "extern int8u " << Selected_Node3 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
	for(int i = 0 ; i < FrameNodeCounter3 ; i++){
		for(int j =0 ; j<ID_Counter5 ; j++){
			if( Massagese[j] == FrameNode3[i] ){
				if(i == TXRXCounter3){
					FrameDef_Write2 << "//RX" << endl;
					//FrameDef_Write2 << "extern int8u " << Selected_Node3 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
				}
				FrameDef_Write2 << "extern int8u AInt" << FrameNode3[i] << "Buffer[" << DLC2[j] << "u];" << endl;
			}
		}		
	}
	FrameDef_Write2 << "#endif" << endl;
	}
//================================================================================================================================//
	if(Selected_Node4 != ""){
	FrameDef_Write2 << "/* Define one buffer for all frames managed by the " << Selected_Node4 << " */" << endl;
	FrameDef_Write2 << "#ifdef _" << Selected_Node4  << endl;
	FrameDef_Write2 << "//TX" << endl;
	//FrameDef_Write2 << "extern int8u " << Selected_Node4 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
	for(int i = 0 ; i < FrameNodeCounter4 ; i++){
		for(int j =0 ; j<ID_Counter5 ; j++){
			if( Print2[i]->ID == FrameNode4[i] ){
				if(i == TXRXCounter4){
					FrameDef_Write2 << "//RX" << endl;
					//FrameDef_Write2 << "extern int8u " << Selected_Node4 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
				}
				FrameDef_Write2 << "extern int8u AInt" << FrameNode4[i] << "Buffer[" << DLC2[j] << "u];" << endl;
			}
		}		
	}
	FrameDef_Write2 << "#endif" << endl;
	}
//================================================================================================================================//
	if(Selected_Node5 != ""){
	FrameDef_Write2 << "/* Define one buffer for all frames managed by the " << Selected_Node5 << " */" << endl;
	FrameDef_Write2 << "#ifdef _" << Selected_Node5  << endl;
	FrameDef_Write2 << "//TX" << endl;
	//FrameDef_Write2 << "extern int8u " << Selected_Node5 << "_DIAGNOSTIC_ANSWER_Buffer[8u];" <<  endl;
	for(int i = 0 ; i < FrameNodeCounter5 ; i++){
		for(int j =0 ; j<ID_Counter5 ; j++){
			if( Massagese[j] == FrameNode5[i] ){
				if(i == TXRXCounter5){
					FrameDef_Write2 << "//RX" << endl;
					//FrameDef_Write2 << "extern int8u " << Selected_Node5 << "_DIAGNOSTIC_REQUEST_Buffer[8u];" <<  endl;
				}
				FrameDef_Write2 << "extern int8u AInt" << FrameNode5[i] << "Buffer[" << DLC2[j] << "u];" << endl;
			}
		}		
	}
	FrameDef_Write2 << "#endif" << endl;
	}
//================================================================================================================================//

	FrameDef_Write2.close();

}

void NodeSignals2(string Address){

	ofstream NodeSignals_Write;
	NodeSignals_Write.open(Address, ios_base::app | ios_base::out);
	NodeSignals_Write << endl << endl << endl;

	//NodeSignals_Write << "#ifndef _" << Selected_Node << endl;
	NodeSignals_Write << "const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL] = {\n//1-3" << endl;
	count6=0;

	count6=0;
	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < 30 ; j++){		
			if(Print[i]->Signal1[j] != "" ){		
							for (int t = 0 ; t < BufferCounter ; t++){
								if(RX_NodesBufferCounter[t] != ""){
									if( Print[i]->Signal1[j] == RX_NodesBufferCounter[t] ){
										for(int a = 0 ; a < AppLayerCounter ; a++){					
											if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
												if(AppLayerValue[a] == "1"){
													count6++;
													if(count6<count7){
														NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
													}
													else{
														NodeSignals_Write << "MSG_" << Print[i]->Message ;
													}
													goto jumper;
												}
											}
										}
									}
								}
							}

				for(int a = 0 ; a < AppLayerCounter ; a++){					
					if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
						if(AppLayerValue[a] == "1"){
							if( Print[i]->transmiterNode == Selected_Node ){
								count6++;
								if(count6<count7){
									NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
								}
								else{
									NodeSignals_Write << "MSG_" << Print[i]->Message ;
								}
							}
							else{
								count6++;
								if(count6<count7){
									NodeSignals_Write << "INVALID_FRAME" << ",";
								}
								else{
									NodeSignals_Write << "INVALID_FRAME" ;
								}
								
								}
							jumper:
							FrameCounter++;
							if(FrameCounter%3 == 0){
								NodeSignals_Write << endl;
							}
							if((FrameCounter%3 == 0) && (FrameCounter+3 <= count7) ){
								NodeSignals_Write << "//" << FrameCounter+1 << "-" << FrameCounter+3 << endl;
							}
						}
					}
				}
			}
		}
	}
	NodeSignals_Write << "}" << endl;
	//NodeSignals_Write << "#endif\n"  << endl;
	FrameCounter = 0;


	if(Selected_Node2 != ""){
	NodeSignals_Write << endl << endl << endl;
	//NodeSignals_Write << "#ifndef _" << Selected_Node2 << endl;
	NodeSignals_Write << "const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL+1] = {\n0,\n" << endl;
		count6=0;
	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < 30 ; j++){		
			if(Print[i]->Signal1[j] != "" ){		
							for (int t = 0 ; t < BufferCounter ; t++){
								if(RX_NodesBufferCounter[t] != ""){
									if( Print[i]->Signal1[j] == RX_NodesBufferCounter[t] ){
										for(int a = 0 ; a < AppLayerCounter ; a++){					
											if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
												if(AppLayerValue[a] == "1"){
													count6++;
													if(count6<count7){
														NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
													}
													else{
														NodeSignals_Write << "MSG_" << Print[i]->Message ;
													}
													goto jumper2;
												}
											}
										}
									}
								}
							}
				for(int a = 0 ; a < AppLayerCounter ; a++){					
					if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
						if(AppLayerValue[a] == "1"){
							if( Print[i]->transmiterNode == Selected_Node2 ){
								count6++;
								if(count6<count7){
									NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
								}
								else{
									NodeSignals_Write << "MSG_" << Print[i]->Message ;
								}
							}
							else{
								count6++;
								if(count6<count7){
									NodeSignals_Write << "INVALID_FRAME" << ",";
								}
								else{
									NodeSignals_Write << "INVALID_FRAME" ;
								}
								
								}
							jumper2:
							FrameCounter++;
							if(FrameCounter%3 == 0){
								NodeSignals_Write << endl;
							}
							if((FrameCounter%3 == 0) && (FrameCounter+3 <= count7) ){
								NodeSignals_Write << "//" << FrameCounter+1 << "-" << FrameCounter+3 << endl;
							}
						}
					}
				}
			}
		}
	}
	NodeSignals_Write << "}" << endl;
	//NodeSignals_Write << "#endif\n"  << endl;
	FrameCounter = 0;
	}

	if(Selected_Node3 != ""){
	NodeSignals_Write << endl << endl << endl;
	//NodeSignals_Write << "#ifndef _" << Selected_Node3 << endl;
	NodeSignals_Write << "const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL+1] = {\n0,\n" << endl;
		for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < 30 ; j++){		
			if(Print[i]->Signal1[j] != "" ){		
							for (int t = 0 ; t < BufferCounter ; t++){
								if(RX_NodesBufferCounter[t] != ""){
									if( Print[i]->Signal1[j] == RX_NodesBufferCounter[t] ){
										for(int a = 0 ; a < AppLayerCounter ; a++){					
											if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
												if(AppLayerValue[a] == "1"){
													NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
													goto jumper3;
												}
											}
										}
									}
								}
							}
				for(int a = 0 ; a < AppLayerCounter ; a++){					
					if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
						if(AppLayerValue[a] == "1"){
							if( Print[i]->transmiterNode == Selected_Node3 ){
								NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
							}
							else{
								NodeSignals_Write << "INVALID_FRAME" << ",";
								}
							jumper3:
							FrameCounter++;
							if(FrameCounter%3 == 0){
								NodeSignals_Write << endl;
							}
							if((FrameCounter%3 == 0) && (FrameCounter+3 <= count7) ){
								NodeSignals_Write << "//" << FrameCounter+1 << "-" << FrameCounter+3 << endl;
							}
						}
					}
				}
			}
		}
	}
		NodeSignals_Write << "}" << endl;
		//NodeSignals_Write << "#endif\n"  << endl;
	FrameCounter = 0;
	}
	

	if(Selected_Node4 != ""){
	NodeSignals_Write << endl << endl << endl;
	//NodeSignals_Write << "#ifndef _" << Selected_Node4 << endl;
	NodeSignals_Write << "const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL+1] = {\n0,\n" << endl;
	count6=0;
	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < 30 ; j++){		
			if(Print[i]->Signal1[j] != "" ){		
							for (int t = 0 ; t < BufferCounter ; t++){
								if(RX_NodesBufferCounter[t] != ""){
									if( Print[i]->Signal1[j] == RX_NodesBufferCounter[t] ){
										for(int a = 0 ; a < AppLayerCounter ; a++){					
											if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
												if(AppLayerValue[a] == "1"){
													count6++;
													if(count6<count7){
														NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
													}
													else{
														NodeSignals_Write << "MSG_" << Print[i]->Message ;
													}
													goto jumper4;
												}
											}
										}
									}
								}
							}
				for(int a = 0 ; a < AppLayerCounter ; a++){					
					if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
						if(AppLayerValue[a] == "1"){
							if( Print[i]->transmiterNode == Selected_Node4 ){
								count6++;
								if(count6<count7){
									NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
								}
								else{
									NodeSignals_Write << "MSG_" << Print[i]->Message ;
								}
							}
							else{
								count6++;
								if(count6<count7){
									NodeSignals_Write << "INVALID_FRAME" << ",";
								}
								else{
									NodeSignals_Write << "INVALID_FRAME" ;
								}
								
								}
							jumper4:
							FrameCounter++;
							if(FrameCounter%3 == 0){
								NodeSignals_Write << endl;
							}
							if((FrameCounter%3 == 0) && (FrameCounter+3 <= count7) ){
								NodeSignals_Write << "//" << FrameCounter+1 << "-" << FrameCounter+3 << endl;
							}
						}
					}
				}
			}
		}
	}
	NodeSignals_Write << "}" << endl;
	//NodeSignals_Write << "#endif\n"  << endl;
	FrameCounter = 0;
	}
	
	if(Selected_Node5 != ""){
	NodeSignals_Write << endl << endl << endl;
	//NodeSignals_Write << "#ifndef _" << Selected_Node5 << endl;
	NodeSignals_Write << "const int8u AInt8uSignalToFrameId[CAN_NB_SIGNAL+1] = {\n0,\n" << endl;
	count6=0;
	for(int i = 0 ; i < ID_Counter5 ; i++){
		for(int j = 0 ; j < 30 ; j++){		
			if(Print[i]->Signal1[j] != "" ){		
							for (int t = 0 ; t < BufferCounter ; t++){
								if(RX_NodesBufferCounter[t] != ""){
									if( Print[i]->Signal1[j] == RX_NodesBufferCounter[t] ){
										for(int a = 0 ; a < AppLayerCounter ; a++){					
											if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
												if(AppLayerValue[a] == "1"){
													count6++;
													if(count6<count7){
														NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
													}
													else{
														NodeSignals_Write << "MSG_" << Print[i]->Message ;
													}
													goto jumper5;
												}
											}
										}
									}
								}
							}
				for(int a = 0 ; a < AppLayerCounter ; a++){					
					if( FindSubstringString(Print[i]->Signal1[j],AppLayerSignal[a]) == 0 ){
						if(AppLayerValue[a] == "1"){
							if( Print[i]->transmiterNode == Selected_Node5 ){
								count6++;
								if(count6<count7){
									NodeSignals_Write << "MSG_" << Print[i]->Message << ",";
								}
								else{
									NodeSignals_Write << "MSG_" << Print[i]->Message ;
								}
							}
							else{
								count6++;
								if(count6<count7){
									NodeSignals_Write << "INVALID_FRAME" << ",";
								}
								else{
									NodeSignals_Write << "INVALID_FRAME" ;
								}
								
								}
							jumper5:
							FrameCounter++;
							if(FrameCounter%3 == 0){
								NodeSignals_Write << endl;
							}
							if((FrameCounter%3 == 0) && (FrameCounter+3 <= count7) ){
								NodeSignals_Write << "//" << FrameCounter+1 << "-" << FrameCounter+3 << endl;
							}
						}
					}
				}
			}
		}
	}
	NodeSignals_Write << "}" << endl;
	//NodeSignals_Write << "#endif\n"  << endl;
	FrameCounter = 0;
	}

	NodeSignals_Write.close();
	
}

void typeOfMSG(string DBC){

	for(int i = 0 ; i < ID_Counter5 ; i++){
		typeOfMSG_ValueFinal_N[i] = 0;
	}


	ifstream OpenDBC2;
	OpenDBC2.open(DBC);

	while(!OpenDBC2.eof()){
		getline(OpenDBC2,typeOfMSG_Buffer,'\n');
		if(FindSubstringString(typeOfMSG_Buffer,"BA_ \"Msg_TypeMsg\"") == 0){
			typrOfMSG_DID = get_all_text_after(get_all_text_after(get_all_text_after(typeOfMSG_Buffer, ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(typeOfMSG_Buffer, ' '), ' '), ' ').find(" "));
			typrOfMSG_DID_N = atoi(typrOfMSG_DID.c_str());
			typeOfMSG_Value = get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(typeOfMSG_Buffer, ' '), ' '), ' '), ' ').substr(0,get_all_text_after(get_all_text_after(get_all_text_after(get_all_text_after(typeOfMSG_Buffer, ' '), ' '), ' '), ' ').find(";"));
			//cout << typeOfMSG_Buffer << endl;
			for(int i = 0 ; i < ID_Counter5 ; i++){
				if( typrOfMSG_DID_N == Print2[i]->DID){
					typeOfMSG_ValueFinal_N[i] = atoi(typeOfMSG_Value.c_str());
				}
			}
		}
		typrOfMSG_Counter++;
	}
		
	for(int i = 0 ; i < ID_Counter5 ; i++){		
		switch (typeOfMSG_ValueFinal_N[i]){
			case(0): ID_Type0[ID_Type0Counter] = Print2[i]->ID;ID_Type0Counter++ ;break;
			case(1): ID_Type1[ID_Type1Counter] = Print2[i]->ID;ID_Type1Counter++ ;break;
			case(2): ID_Type2[ID_Type2Counter] = Print2[i]->ID;ID_Type2Counter++ ;break;
			case(3): ID_Type3[ID_Type3Counter] = Print2[i]->ID;ID_Type3Counter++ ;break;
			case(4): ID_Type4[ID_Type4Counter] = Print2[i]->ID;ID_Type4Counter++ ;break;
			case(5): ID_Type5[ID_Type5Counter] = Print2[i]->ID;ID_Type5Counter++ ;break;
			case(6): ID_Type6[ID_Type6Counter] = Print2[i]->ID;ID_Type6Counter++ ;break;				
		}
	}

	OpenDBC2.close();

}

bool DefineAddress(){

	ifstream DBC;
	DBC.open("Database.txt");
	getline(DBC,DBC_Address,'\n');
	DBC.close();
	ifstream Path;
	string PathOfFiles;
	Path.open("Resource.txt");
	getline(Path,PathOfFiles,'\n');
	Path.close();
	string UserName;

	ifstream Nodes;
	Nodes.open("Nodes.txt");
	getline(Nodes,Selected_Node,'\n');
	Nodes.close();

	if(Selected_Node=="Nothing"){
		Selected_Node="";
	}

	ifstream Nodes2;
	Nodes2.open("Nodes2.txt");
	getline(Nodes2,Selected_Node2,'\n');
	Nodes2.close();

	if(Selected_Node2=="Nothing"){
		Selected_Node2="";
	}

	ifstream Nodes3;
	Nodes3.open("Nodes3.txt");
	getline(Nodes3,Selected_Node3,'\n');
	Nodes3.close();

	if(Selected_Node3=="Nothing"){
		Selected_Node3="";
	}

	ifstream Nodes4;
	Nodes4.open("Nodes4.txt");
	getline(Nodes4,Selected_Node4,'\n');
	Nodes4.close();

	if(Selected_Node4=="Nothing"){
		Selected_Node4="";
	}

	ifstream Nodes5;
	Nodes5.open("Nodes5.txt");
	getline(Nodes5,Selected_Node5,'\n');
	Nodes5.close();

	if(Selected_Node5=="Nothing"){
		Selected_Node5="";
	}


	UserName=get_last_STH(PathOfFiles,'\\');
	int one = PathOfFiles.length(),two = UserName.length();
	for(int i=one-two;i<one;i++){
		PathOfFiles[i]='*';
	}
	string STAR="*";
	string DefPathType=".txt";
	string Slash="/",BackSlash="\\";

	RemoveString(PathOfFiles,STAR);
	RemoveString(UserName,DefPathType);
	
	HeaderName = PathOfFiles+"Temp.h";
	HeaderName=ReplaceString(HeaderName,BackSlash,Slash);
	
	ReplaceString(DBC_Address,BackSlash,Slash);


	Hname = PathOfFiles+"Def_CAN_DataBase_"+UserName+".h";
	Hname=ReplaceString(Hname,BackSlash,Slash);
	Hname2 = PathOfFiles+"CAN_signal_IDS_"+UserName+".h";
	Hname2=ReplaceString(Hname2,BackSlash,Slash);
	C_Address = PathOfFiles+"CANSignalManegment_"+UserName+".c";
	C_Address=ReplaceString(C_Address,BackSlash,Slash);
	FileName = "_CAN_DATABASE_DEF_INCLUDED";//tbd
	Version = "1.1";
	Author = "Bakhtiary";

	if( (DBC_Address.length()>2) && (PathOfFiles.length()>2) ){
		return true;
	}
	else{
		return false;
	}	

	return true;
}

int main ()
{	ReadSelectedNodes();
	if(DefineAddress()==true){
		
		cout << "*\n* please wait.\n*\n* Pay attention we did not have permission to write in windows drive.\n* if you select windows drive close this windows and try again with different directory.\n*" << endl;
		//******************************************Starting********************************************//
		const char* Temp=HeaderName.c_str();
		remove(Temp);
		const char* AddName = Hname.c_str();
		remove(AddName);
		const char* AddName2 = Hname2.c_str();
		remove(AddName2);
		const char* AddName3 = C_Address.c_str();
		remove(AddName3);
		//******************************************FILE1************************************************//	
		ExtractDIDInformation2(DBC_Address);
		Header(HeaderName);
		Header2(HeaderName,Version,Author);
		Start(DBC_Address);	
		//***********************************************************************************************//	
		Read_ID_S(DBC_Address);
		Read_Signal_S(DBC_Address);
		//***********************************************************************************************//	
		Define_TX_RX_Message(HeaderName);
		Reset();	
		Signal_Lenght(HeaderName);		
		Massage_Small(HeaderName,"DEFINITIONS AND MACROS^");  //"^" is required for program
		//***********************************************************************************************//	
		typeOfMSG(DBC_Address);
		//***********************************************************************************************//
		Fill_Signals();	
		//Test_Fill_Signals();
		GetDLC2(DBC_Address);
		Write_Signal(ID_Type0,ID_Type0Counter,"TX_FUNCTIONAL");	
		Write_Signal(ID_Type1,ID_Type1Counter,"TX_FAULT");
		//Write_Signal(ID_Type2,ID_Type2Counter,"TX_DIAG_GWY");	
		Write_Signal(ID_Type3,ID_Type3Counter,"RX_FUNCTIONAL");	
		Write_Signal(ID_Type4,ID_Type4Counter,"RX_FAULT");	
		//Write_Signal(ID_Type5,ID_Type5Counter,"RX_DIAG_GWY");
		Write_Signal(ID_Type6,ID_Type6Counter,"NBCM_NA");
		//***********************************************************************************************//	
		Supervision_DEF(DBC_Address);
		TypeOfSupervision(DBC_Address);
		Offset_DEF(DBC_Address);
		Offset(DBC_Address);
		Massage(HeaderName,"EXPORTED variables^");	//"^" is required for program
		//******************************************FILE3************************************************//
		Header(C_Address);
		C_file(C_Address);
		Header2(C_Address,Version,Author);
		FrameDef(C_Address);
		//******************************************FILE1************************************************//
		FrameDef2(HeaderName);
		//******************************************FILE2************************************************//	
		Header(Hname2);
		Header2(Hname2,Version,Author);
		GetSignal2(Hname2,DBC_Address);
		//******************************************FILE1************************************************//
		AddCounter();
		remove(Temp);	
		//******************************************FILE3************************************************//	
		NodeSignals2(C_Address);
		Triger2_Def();
		Triger2(C_Address,DBC_Address);
		C_file2(C_Address);
		C_file5(C_Address);
	}
	else{
		cout << "*\n* At first you should select DBC file and directory to save files.\n* Close windows and try again.\n* ";
		system("PAUSE");
	}
}


	
