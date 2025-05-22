
#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <fstream>
#include <windows.h>
using namespace std;
	int exp;
	int monster(int ,int,string,string,string,string);
	void exp1(void);
	void bag();
	void miss(int);
	void smithy();
	void store();
	int talen_1(int);
	int talen_2(int);
	int talen_3();
	int talen_4(int);
	int talen_5(int);
	int talen_6(int);
	int talen_7(int);
	int talen_8(int);
	int talen_9(int);
	int talen_10(int);
	int talen_11(int);
	void hotel();
	void map();
	void cow();
	void read();
	void bag_thing();
	void practice();
	void archive();
	int vs_people(int ,int ,string ,string,string );
	void vs_monster(int ,int ,string ,string,string); 
	 fstream  file ;
	// s? { 
	string s_tool[30],s_toolnumber,s_name,s_tool_number,s_skill[20],s_bag_skill[20],s_tool_yes,s_yes[30],s_tool___yes,s_go;//tool_yes?O_??MZ __Z  _?   plotp`?? win  yes 
	int s_dragon_plot,s_shot_plot,s_vs_time[20],s_day_time=0,s_MP_level=1,s_teacher,force=0,s_force=0 ,s_thing[30],s_agile,s_day,s_level=1,s_exp,s_HP=20,s_hp=20,s_attack,s_tool_attack,s_tool_HP,s_money=1000,s_MP=20,s_mp=20,s_tool_hp,s_tool_hp1,s_hp1,s_mp_reply=5,s_tool_mp_reply,s_evil,s_skill_0=0,s_lose=0,s_game,s_ban[20],s_plot_int,s_protect;
	double s_blood=0,s_n_exp=20;
	// } 
	double blood=0,n_exp=20;
	int dragon_plot=1,shot_plot=1,talk_smithy,vs_time[20],main_dizzy=-1,day_time=0,MP_level=1,teacher,thing[30] ,dizzy=-1,n_m_agile=10,m_agile=10,n_agile,agile=11,level=1,day,HP=20,hp=20,attack,m_attack,m_HP,tool_attack,tool_HP,money=500,MP=20,mp=20,tool_hp,tool_hp1,hp1,mp_reply=5,tool_mp_reply,evil,skill_0=0,lose=0,game,ban[20],plot_int,protect;// hp1C?R^_  monster?=m_   hp=?R?ol?  HP?R????  n_expbh?g? exp?e?g 
	string m_talen="0",tool[30],teacher_choose,toolnumber,name,m_name,tool_number,talk,talk_attack,skill[20],bag_skill[20],plot,tool_yes="L",yes[30],tool___yes="L",win="0",go,choose;//skill[20]?s skillO?AS?  bag_skill? 
/*
			thing 1 =s?n         bag_skill 1 ?   yes7    force1Z    evil= 1  c skill1y 
			thing 2	 ??C?										yes10									  2s 
			      3 g^																				  3 
				  4Eug?																				  4X 
				  5??OsO																						  5¶XC
				  6	g																					  613 
																											  7E? 
																											  8l?wbN 








																															*/
int main(int argc, char** argv) {
	int i;
	for(i=0;i<30;i++){
		thing[i]=0;
	}
	cout<<"wC\n@:P113CT 22 "<<endl;
		//	Sleep(1500);
		cout<<"oO@RPGC\nU?nJ??? "<<endl;
		//	Sleep(1500);
		cout<<"AWls?"<<endl;
		for(i=0;i<30;i++){
						tool[i]="";
									}
		cin>>name;
			Sleep(200);
		cout<<"AmWO:"<<name<<endl;
					//??mW 
	system("pause");
	system("cls");
	int no,n,end;
    ban[1]=0;
	n=0;
	attack=3;
		cout<<"A@?_?o{?b@i??W"<<endl;
		Sleep(2000);
		cout<<"AFi"<<endl;
		Sleep(1500);
		cout<<"!"<<endl;
		Sleep(600);
		cout<<"@pFMnX"<<endl;
		Sleep(2000);
		cout<<"pF:_I?AFrA";
		Sleep(200);
		cout<<"AOO?n_oO???p?(1.O   l_)"<<endl;
		Sleep(2000);
		cin>>choose;
		if(choose=="1"){
		cout<<"AIFIYC"<<endl;
		Sleep(1000);
		cout<<"pF:?N?iDAa!"<<endl;
		Sleep(1500);
		cout<<"pF:??A|?A";
		Sleep(1000);
		cout<<"o";
		Sleep(100);
		cout<<"."; 
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		Sleep(100);
		Sleep(100);
		cout<<"."; 
		Sleep(100);
		cout<<".";
		Sleep(100);
		cout<<".";
		cout<<"."<<endl;
		Sleep(1000);
		cout<<"pF:uON~A~?~~~XD"<<endl;
		Sleep(3000);
		cout<<"pF:?AUtpnNXXXl?"<<endl;
		Sleep(3000);
		cout<<"pF:GXFItroubleF.."<<endl;
		Sleep(3000);
		cout<<"pF:n}o]Ok"<<endl;
		Sleep(3500);
		cout<<"pF:u?`???N?H"<<endl;
		Sleep(4000);
		cout<<"pF:F!"<<endl;
		Sleep(1000);
		cout<<"pF:?o?s?nA\\\\\\A\\\ "<<endl;
		Sleep(2500);
		cout<<"pF:o?a!?F"<<endl;
		Sleep(1800);
		cout<<"(pFF)"<<endl; 
		}else {
			cout<<"Ah_Ia"<<endl;
		} 
		//O_X 
			while(n==0){			
		cout<<"(1.U|P 2.X 3.s?n 4.I] 5.A)"<<endl;
		cin>>yes[1];
			if(yes[1]=="2"){
				cout<<"(AXF)"<<endl;	//?X 
					cout<<"AXFo{e@(1Ve,2^a)"<<endl;//Xn? 
						cin>>yes[2];
							if(yes[2]=="2"){
							n=0;	
							cout<<"A^Fa"<<endl; 
							}else if(yes[2]=="1"){
							n=1;
							}else {
								cout<<"?J12"<<endl; 
										}
		}else if(yes[1]=="1"){
				//U|P
					if(ban[1]==0){
			cout<<"(A??C)(1?_2)"<<endl;
				//?FM
			 	cin>>yes[3];
						if(yes[3]=="1"){
						tool[1]="";
						ban[1]=1;
						cout<<"A?_FC(n??OohA?)"<<endl; 
							}
					}else{
						cout<<"?SLFF"<<endl; 
						}
				    		 
		}else if(yes[1]=="3"){
		cout<<"A?FpF?s?n"<<endl;
		Sleep(1000); 
		cout<<"[AoF s?n]"<<endl;
		 	thing[1]=1;
		} 	else if(yes[1]=="5"){
		bag();
				
		}else if(yes[1]=="4"){
			bag_thing();
		}else if(yes[1]=="0124"){
			cin>>exp;
			exp1();
		}else if(yes[1]!="1"&&yes[1]!="4"&&yes[1]!="3"&&yes[1]!="2"){
			cout<<"?J12"<<endl;
			}
			system("pause");
			system("cls");
		}
		do{
		cout<<"AafjDh"<<endl; 
		Sleep(100);
		cout<<"C"<<endl;
		Sleep(200);
		cout<<"C"<<endl;
		Sleep(300);
		cout<<"C"<<endl;
		Sleep(400);
		cout<<"C"<<endl;
		Sleep(300);
		cout<<"AbLjD"<<endl;
		Sleep(600);
		cout<<"C"<<endl;
		Sleep(300);
		cout<<"C"<<endl;
		Sleep(200);
		cout<<"C"<<endl;
		Sleep(100);
		cout<<"FF....F"<<endl;
		Sleep(300);
		cout<<"...F"<<endl;	
		Sleep(400);
		cout<<"!!!!"<<endl;	
																						//?ew?Lyes3 tool1 ban1 

		talk="O«XFF!!!";
		talk_attack="LAo?F?r";
		m_talen="0";
		m_HP=10;
		m_attack=2;
		m_name="?";		//]q?? 
		lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
		}while(lose==1);
		exp=20; //?og 
		money=money+20;
		cout<<"A?"<<money<<""<<endl; 
		cout<<"A?"<<exp<<"g"<<endl; 
		exp1();//?? 
		// 
		 system ("pause");
		 	system("cls");
		 cout<<"A~Ve"<<endl;
		 plot_int=1;
		 system ("pause");
	
/*	 cout<<"??AiF@?gc"<<endl; //?@gc 
		 ban[2]=0 ;
		 while(ban[2]!=5){	//}gc 
		 	cout<<"(1.Ve  2.V  3.Vk  4.V  5.A)"<<endl;//?? 
		 	cin>>yes[4];
		 		if(yes[4]=="1"){ 
		 			ban[2]=ban[2]+2;
		 			cout<<"AVeFXB"<<endl;
				 	miss(ban[2]);
		 		}else if(yes[4]=="5"){
					bag();
				}else if(yes[4]=="2"){
					ban[2]=ban[2]+1;
		 			cout<<"AVFXB"<<endl;
					miss(ban[2]);
				}else if(yes[4]=="3"){
					ban[2]=ban[2]-1;
		 			cout<<"AVkFXB"<<endl;
					miss(ban[2]);
				}else if(yes[4]=="4"){
					ban[2]=ban[2]-2;
		 			cout<<"AV?FXB"<<endl;
					miss(ban[2]);
				}else{
					cout<<"?JT"<<endl; 
				}
	system("pause");
	system("cls");
			}
			
		cout<<"AXFgc"<<endl;  */
	while(win!="?"){ 
		if(plot_int==1 || go=="1"){	
			go="1";	
			if(plot_int==1){
				cout<<"MJîO@yjj";//qLF?@? 
				system("pause"); 
				cout<<"?FA"<<endl;
				Sleep(1000);
				cout<<":AOWsh?"<<name<<"a"<<endl;
				Sleep(400);
				system("pause");
				cout<<"(AIFIY)\n";
				Sleep(1000);
				cout<<":Ah}}a"<<endl; 
				Sleep(800);
				day=0;
			}
				ban[5]=0;	
		while(ban[5]!=1){
			cout<<"b?"<<day<<""<<endl;	
				if(day==6 ){
					day++;
					day_time++;
					cout<<"?A_?o{DSH"<<endl;
					Sleep(1000);
					cout<<"\nC"<<endl;
					Sleep(200); 
					cout<<"\nC"<<endl;
					Sleep(200);
					cout<<"\nC"<<endl;
					Sleep(200);
					cout<<"\nC"<<endl;
					Sleep(200);
					cout<<"\nC"<<endl;
					Sleep(200);
					cout<<"\nC"<<endl;
					Sleep(200);
					cout<<"r?oB@nFSAu_ossTC\nAT@_AŸnDGuKK O?HOoFoHv" <<endl;
					Sleep(4000);
					cout<<"u?oSnj¶??A[[Ass?oX^n?hAGs]A?RC\nO??AA@bne?]¤FU?CLF}[ASn~?"<<endl<<endl;
					Sleep(4000);
					system("pause");
					cout<<"\nAVH@h"<<endl;
					Sleep(2000); 
					cout<<"LAW?AU?GdA?U@O?GlA??uAo@XL~hjC\nW@TlA??ATllOWAvA?O?QAUo???lA©?ACC\nQ?SySA{pC"<<endl;
					Sleep(5000);
					cout<<"AQ_bKK?ojcH"<<endl;
					Sleep(1800);
					cout<<"@L?ApQFp???ep?|jcH@Aynsz" <<endl;
					Sleep(2000);
					cout<<"ACC^?Lw?"<<endl<<endl;
					Sleep(1000);
					system("pause");
					cout<<"\nAVLD:u?Lr~s@ynszAZO?U?KK ?KK?A[DjWAppe?C\nbUoX???F?^n~AHLrZO?OF`C" <<endl;
					Sleep(3000);
					cout<<"?A?oyFU"<<endl;
					Sleep(2000);
					cout<<"ns?AjgLZ\\F`A?UoNAFnADGupl}P`A?CAu}aA?l?A?Rv"<<endl<<endl;
					Sleep(3000);
					system("pause");
					cout<<"\nns@bALY?CAL@p?pV?vqW?UBSqU?W??AuL@o?oAIWoNAu?Lg?UAW?K_?vlC"<<endl;
					Sleep(5000);
					cout<<"?nsu???vgnAy{?ADGuAI?L?IvAH?AL?CnsSDGuAIA??AA??Iv"<<endl;
					Sleep(5000);
					cout<<"AQGu o?W??ALZOjAe?A??Hp?[W@?y?zrHv"<<endl<<endl;	  
					Sleep(3000);
					system("pause");
					cout<<"\nns@ADFAANNL?AL}ASbLy??O?FXUA}F@iLAj"<<endl;
					Sleep(3500);
					cout<<"DGuAu?Au?Iv?FAuADGu?haIvAN?bIY"<<endl; 
					Sleep(3000);
					cout<<"?DGuAs?h?HvnsDGu??hKOC??nYID?A?lCA@DA??YCv"<<endl;
					Sleep(3000);
					cout<<"o@UujXAN?~A}DGuo?KKo?KKv"<<endl<<endl; 
					Sleep(2000);
					system("pause");
					cout<<"\nnsR?AGBF?U?öQ_@"<<endl;
					Sleep(2000);
					cout<<"DGuAAYAy?XnAo?A~jASOkHAuOZ?_CA@A?o?AOA@?Hv"<<endl;
					Sleep(2000);
					cout<<"L?CANN?v?AG??v?MLG?o?A?LuA??vAuLOH@?PC"<<endl;
					Sleep(2000);
					cout<<"??Dns{?YA?HAN]\n"<<endl;
					Sleep(2000); 
					system("pause");
					cout<<"\nO_Lv(1.O 2._)"<<endl; 
						while(ban[6]!=1){
							cin>>plot;
							if(plot=="1"){
							evil=1;
							cout<<"nsR?DGun ?{snv???v"<<endl;
							Sleep(1000);
							cout<<"A:v???qRA?HaF"<<endl;
							Sleep(1000);
							cout<<"?l?oN?A"<<endl;
							Sleep(1000);
							cout<<"C"<<endl;
							Sleep(300) ;
							cout<<"C"<<endl;
							Sleep(300) ;
							cout<<"C"<<endl;
							Sleep(300) ;
							cout<<"C"<<endl;
							Sleep(300) ;
							cout<<"C"<<endl;
							Sleep(300) ;
							cout<<"C"<<endl;
							Sleep(300) ;
							cout<<"A?oFs "<<endl;
							Sleep(1000);
							cout<<"nsGu?hjFAv"<<endl ;
							skill[2]="";
							skill_0=1;
							ban[6]=1;
						}else if(plot=="2"){
							evil=0;
							cout<<"L@?UNAiFs"<<endl;
							Sleep(1000);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(200);
							cout<<"I\nC"<<endl;
							Sleep(8000);
							cout<<"LF@q?AF"<<endl;
							Sleep(1000);
							cout<<"A?e@?c?kACACy?F?C"<<endl;
							Sleep(2000);
							cout<<"LF}[Aukll?@??ALw??AoklOAUAoëDHAjxlA??A~@XDO@y?J?C" <<endl;
							Sleep(5000);
							cout<<"o{e?Z?O?H"<<endl;
							Sleep(2000);
							cout<<"A@YWUhAu?}clG¸orC??hA{XkcW¸OuWdMA?XvKrAcW¸Ou?RA?LvK?rC\nA@LôN}lWF"<<endl;
							Sleep(200);
							cout<<"@"<<endl;
							Sleep(200);
							cout<<"G"<<endl;
							Sleep(200);
							cout<<"|"<<endl;
							Sleep(200);
							cout<<""<<endl;
							Sleep(200);
							cout<<""<<endl;
							Sleep(200);
							cout<<"C"<<endl;
							Sleep(200);
							cout<<"K"<<endl;
							Sleep(200);
							cout<<"E"<<endl;
							Sleep(200);
							cout<<"Q..."<<endl;
							Sleep(2000);
							cout<<"EE|"<<endl;
							Sleep(200);
							cout<<"EE"<<endl;
							Sleep(200);
							cout<<"EE"<<endl;
							Sleep(200);
							cout<<"EEC"<<endl;
							Sleep(200);
							cout<<"EEK"<<endl;
							Sleep(200);
							cout<<"EEE"<<endl;
							Sleep(200);
							cout<<"@d"<<endl;
							Sleep(1000);
							cout<<"AWo{pZ?W@hZwM}\nSXU"<<endl;
							Sleep(1000);
							cout<<"ANh"<<endl;
								Sleep(2000);
							cout<<"AoF ?C-??C (?) "<<endl;
							skill[3]="";
							skill_0=1;
							cout<<"A^F"<<endl;
							ban[6]=1;
						}else{
						cout<<"?Mw"<<endl;	
						}
					}	 
					day++;
				}
			plot_int=2;
			cout<<"U?An?(1.??HoO   2.hKKQ  3.Z]  4.I]  5.A  6.? 7.a 8.s  9.? 10.X)" <<endl;
			cin>>yes[5] ;
				if(yes[5]=="1"){
					cout<<"(AV@?bH?)\n";
					cout<<"L:o?OaAA..AO\n";
					Sleep(2000);
				cout<<"DL]F"<<endl;
				}else if(yes[5]=="2"){
					talk_smithy=1;
					smithy();
				}else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="3"){
					store();
					if(lose==1){
					read();
					ban[5]=1;	
					}
					day++;
				}else if(yes[5]=="6"){
						hotel();
					day++;	
				}else if(yes[5]=="10"){
					cout<<"ATwn}(t??5A)(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						ban[5]=1;
						day=0;
						plot_int=2;
						Sleep(300);
						cout<<"??nh(2.Zs 3.q 4)"<<endl;
						while(cin>>go &&( go!="2" && go!="3" && go!="4")){
							cout<<"??Anha"<<endl; 
						}
					}else if(yes[6]=="2"){
						cout<<"A^F"<<endl;
					}
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();	
						
			system("pause");
			system("cls");
			}
		}else if(go=="2"){
			cout<<"AFZss}UAus?_SAC"<<endl;
			Sleep(3000);
			cout<<"Au??VW"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(100);
			cout<<"C"<<endl;
			Sleep(500); 
			cout<<"AF@D["<<endl;
			ban[7]=1;
			while(ban[7]!=0){
				cout<<"An(1.iT " ;
				if(force==1)cout<<"2.v ";
				cout<<"4.I] 5.A 7.a 8.s  9.? 10.Xs)"	<<endl;
				cin>>yes[5];
				if(yes[5]=="1"){
					cout<<"iT:???LU?\n1.^e?v\n2.LL[}F\n3.e?]"<<endl;				
					cin>>yes[7];
					if(yes[7]=="1"){
						if(evil!=1){
							if(force==0){
								force=1;
								cout<<"?nq?}lANO?o{?F"<<endl;
								Sleep(1500);
								cout<<"??Wx"<<endl;
								Sleep(500);
								cout<<"1.?LdA?vXv"<<endl;
								Sleep(1000);
								cout<<"2.}l|?AXlZ\\\AYno??`Z??gv???{?Yi"<<endl;
								Sleep(1000);
								cout<<"{b?NJCk?µA"<<endl;
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(500);
								cout<<"AoF<<XCk>>"<<endl;
								skill[4]="";
								skill_0=1;
							}
						}else {
							cout<<"AOnc{??"<<endl;
							Sleep(1000);
							cout<<"o?Lc@H"<<endl;
						}
					}else if(yes[7]=="2"){
						cout<<"\\n\\:aD?Z?baAH?J"<<endl;
					}else if(yes[7]=="3"){
						cout<<"v{";
						evil=1;
						talk="LoF";
							talk_attack="LAyF";
							m_HP=20000;
							m_attack=80;
							m_agile=800;
							m_name="\iT\ ";		//]q?? 
							m_talen="5";
							lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
							if(lose==0){
								exp=exp+9999990;
								money=money+100000;
								cout<<"A?"<<exp<<"g"<<endl; 
								cout<<"A?"<<money<<""<<endl; 
								exp1();
								teacher=1;
								cout<<"?AqLF?U?|??AsZ\\\ " <<endl;
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(500);
								cout<<"AoFZ??"<<endl;
								skill[5]="";
								skill[6]="";
								skill[4]="";
								skill_0=1;
							}else if(lose==1){
								read();
							}
					}
				}else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();
				 else if(yes[5]=="10"){
					cout<<"ATwn}(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						Sleep(300);
						cout<<"??nh(1.a 5.X[? 9.)"<<endl;
						while(cin>>go &&( go!="1" && go!="5" && go!="9" )){
							cout<<"??Anha"<<endl; 
						}
						break;
					}else if(yes[6]=="2"){
						cout<<"A^hF"<<endl;
					}
				}else if(force==1 && yes[5]=="2"){
				 	cout<<"\\\\\:1.\M\\\\\ 2."<<endl;
				 	cin>>teacher_choose;
				 	if(teacher_choose=="1"){
				 		practice();
					 }else if(teacher_choose=="2"){
						if(teacher==0){
					 		talk="}l";
							talk_attack="LAyF";
							m_HP=250;
							m_attack=12;
							m_agile=20;
							m_name="\\\\\ ";		//]q?? 
							m_talen="1";
							lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
							if(lose==0){
								exp=exp+650;
								money=money+500;
								cout<<"A?"<<exp<<"g"<<endl; 
								cout<<"A?"<<money<<""<<endl; 
								exp1();
								teacher=1;
								cout<<"?AqLF?U?|??AsZ\\\ " <<endl;
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(500);
								cout<<"AoF<<¶XC>>"<<endl;
								skill[5]="";
								skill_0=1;
							}else if(lose==1){
								read();
							}
						}else if(teacher==1){
							talk="}l";
							talk_attack="LAyF";
							m_HP=1500;
							m_attack=30;
							m_agile=40;
							m_name="\\\\\ ";		//]q?? 
							m_talen="2";
							lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
							if(lose==0){
								exp=exp+4000;
								money=money+2000;
								cout<<"A?"<<exp<<"g"<<endl; 
								cout<<"A?"<<money<<""<<endl; 
								exp1();
								teacher=2;
								cout<<"?AqLF?U?|??AsZ\\\ " <<endl;
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(200);
								cout<<"C\n";
								Sleep(500);
								cout<<"AoF<<QTC>>"<<endl;
								skill[6]="";
								skill_0=1;
							}else if(lose==1){
								read();
							}
						}else {
							cout<<"\\\\\ :vwLFi"<<endl;
							talk="}l";
							talk_attack="LAyF";
							m_HP=1500;
							m_attack=40;
							m_agile=50;
							m_name="\\\\\ ";		//]q?? 
							m_talen="2";
							lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
							if(lose==0){
								exp=exp+8000;
								money=money+500;
								cout<<"A?"<<exp<<"g"<<endl; 
								cout<<"A?"<<money<<""<<endl; 
								exp1();
								teacher=2;
								cout<<"AqF"<<endl;
							}else if(lose==1){
								read();
							} 
						} 
					 }
				 }
				system("pause");
				system("cls");
			}
			
		}else if(go=="3"){
			ban[7]=0;
			while(ban[7]!=1){
				cout<<"An(";
				if(shot_plot==5)cout<<"1.?t";
				cout<<"  4.I] 5.A 6.? 7.a 8.s  9.? 10.})"<<endl;
				cin>>yes[5];
				if(yes[5]=="1" && shot_plot==5){
					cout<<"§A?F?k"<<endl;
					cout<<"?isQKxj?AF"<<endl;
					skill[9]=""; 
					shot_plot=6;
				}else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="6"){
						hotel();	
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();
				 else if(yes[5]=="10"){
					cout<<"ATwn}(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						Sleep(300);
						cout<<"??nh(1.a )"<<endl;
						while(cin>>go &&( go!="1")){
							cout<<"??Anha"<<endl; 
						}
						break;
					}else if(yes[6]=="2"){
						cout<<"A^hF"<<endl;
					}
				}
				system("pause");
				system("cls");
			}
		}else if(go=="4"){
			ban[5]=0;	
			while(ban[5]!=1){
				cout<<"U?An?( ";
				if(shot_plot==4)cout<<"1.Oş(??22[g^]) ";
				cout<<" 2.hKKQ  3.Z]  4.I]  5.A  6.? 7.a 8.s  9.? 10.X)" <<endl;
				
				cin>>yes[5] ;
					if(yes[5]=="1"&&shot_plot==4){
						cout<<"(AFo{|Bls)"<<endl;
						Sleep(500) ;
						cout<<"?xbA?A?B?twOHHqjLF"<<endl;
						Sleep(500);
						cout<<"AbWFtML?CT"<<endl;
						Sleep(500) ;
						cout<<"L???x"<<endl;
						Sleep(500) ;
						cout<<"AJ?@??FWj?@?k"<<endl;
						Sleep(500) ;
						cout<<"@?@U~oOL??d?k"<<endl;
						Sleep(500) ;
						cout<<"?A?HX??cFL?p"<<endl;
						Sleep(500) ;
						cout<<"nL??"<<endl;
						Sleep(500) ;
						cout<<"to??sjqHSi?F?vp?O?"<<endl;
						Sleep(500) ;
						cout<<"A?i?inh??L?k"<<endl;
						Sleep(500);
						system("pause"); 
						cout<<"u_?XjL½½uuAV?}A?HbMsjLX?eASpj}?i?"<<endl;
						Sleep(500) ;
						cout<<"@wAw??e"<<endl;
						Sleep(500); 
						cout<<"Aa@DAWFšAVWk?VAr?Y@?xNU"<<endl;
						Sleep(500) ;
						cout<<"Xj?@vkXVFA"<<endl;
						Sleep(500); 
						cout<<"A^x?Ay@nTA?O?AHP?@?AnFXnAXG_CHO@At?FoGuXjZ\\ojHv"<<endl;
						Sleep(500); 
						cout<<"A?MAMLbWhxOACVWeApLA?d}xCklbWAYXP?A"<<endl;
						Sleep(500); 
						cout<<"hLbJuAsybjOKAuobWxCLVLI?e?CA???Y?JBAkä^YA??A@@|?}AKpIWF@CA?DGurI?FoIv"<<endl;
						Sleep(500);
						cout<<"kWx^NO@CLLAHC_Abb??UCk|@?A?KLCW{hC"<<endl;
						Sleep(500); 
						talk="M}l";
						talk_attack="LAyF";
						m_HP=10000;
						m_attack=100;
						m_agile=200;
						m_name="\k ";		//]q?? 
						m_talen="6";
						lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
						if(lose==0){
							exp=exp+5000;
							money=money+500;
							cout<<"A?"<<exp<<"g"<<endl; 
							cout<<"A?"<<money<<""<<endl; 
							exp1();
							shot_plot=5;
							thing[3]=1; 
							cout<<"AqF"<<endl;
						}else if(lose==1){
							read();
						}
						
					}else if(yes[5]=="2"){
						talk_smithy=2;
						smithy();
					}else if(yes[5]=="5"){
						bag();
					}else if(yes[5]=="3"){
						store();
						if(lose==1){
						read();
						ban[5]=1;	
						}
					}else if(yes[5]=="6"){
							hotel();	
					}else if(yes[5]=="10"){
						cout<<"ATwn}(1.O 2._)"<<endl; 
						cin>>yes[6];
						if(yes[6]=="1"){
							cout<<"A}F"<<endl; 
							ban[5]=1;
							day=0;
							plot_int=2;
							Sleep(300);
							cout<<"??nh(1.a 6.Xj 7.? 10.q)"<<endl;
							while(cin>>go &&( go!="6" && go!="7" && go!="1"&& go!="10")){
								cout<<"??Anha"<<endl; 
							}
						}else if(yes[6]=="2"){
							cout<<"A^F"<<endl;
						}
					}else if(yes[5]=="7")map();
					 else if(yes[5]=="8")archive();
					 else if(yes[5]=="9")read();
					 else if(yes[5]=="4")bag_thing();	
							
				system("pause");
				system("cls");
				}
		}else if(go=="5"){
			cout<<"AFX[?"<<endl;
			ban[7]=1;
			while(ban[7]!=0){
				cout<<"An(1.iJ?(u:???) 2.?X[? "<<endl;
				if(dragon_plot==1)cout<<"3.}f(Du??12[??OsO])" ;
				cout<<" 4.I] 5.A 6.? 7.a 8.s  9.? 10.})"<<endl;
				cin>>yes[5];
				if(yes[5]=="1"){ 
					cout<<"??AiF@?gc"<<endl; //?@gc 
					ban[2]=0 ;
					while(ban[2]!=11){	//}gc 
		 				cout<<"(1.Ve  2.V  3.Vk  4.V  5.A 6.I]  10.})"<<endl;//?? 
		 				cin>>yes[4];
		 					if(yes[4]=="1"){ 
					 			ban[2]=ban[2]+2;
					 			cout<<"AVeFXB"<<endl;
							 	miss(ban[2]);
							 	if(lose==1){
									read();
									break;
								}
		 					}else if(yes[4]=="5"){
								bag();
							}else if(yes[4]=="2"){
								ban[2]=ban[2]+1;
		 						cout<<"AVFXB"<<endl;
								miss(ban[2]);
								if(lose==1){
									read();
									break;
								}
							}else if(yes[4]=="3"){
								ban[2]=ban[2]-1;
					 			cout<<"AVkFXB"<<endl;
								miss(ban[2]);
								if(lose==1){
									read();
									break;
								}
							}else if(yes[4]=="4"){
								ban[2]=ban[2]-2;
					 			cout<<"AV?FXB"<<endl;
								miss(ban[2]);
								if(lose==1){
									read();
									break;
								}
							}else if(yes[4]=="6")bag_thing();
							 else if(yes[4]=="10"){
								cout<<"ATwn}(1.O 2._)"<<endl; 
								cin>>yes[6];
								if(yes[6]=="1"){
									cout<<"A}F"<<endl; 
									break;
								}else if(yes[6]=="2"){
									cout<<"A?F"<<endl;
								}
							}else{
								cout<<"?JT"<<endl; 
							} 
						system("pause");
						system("cls");
					}
					if(ban[2]==11){
					Sleep(500);
					cout<<"?q"<<endl;
					cout<<"HUOy"<<endl;
					tool[5]="";
					cout<<"??C? X1  @C X1"<<endl;
					thing[2]=1; 
					exp=exp+2000;
					money=money+1000;
					cout<<"A?"<<exp<<"g"<<endl; 
					cout<<"A?"<<money<<""<<endl;
					exp1();
					}
				}else if(yes[5]=="2"){
					cout<<"²?NO?gcA?I~?A"<<endl; 
				}else if(yes[5]=="3"&& dragon_plot==1){
					cout<<"A?aVU?}]"<<endl;
					Sleep(500);
					cout<<"ApFih"<<endl;
					Sleep(500);
					cout<<"?jVV"<<endl;
					Sleep(500);
					cout<<"L?A§A"<<endl;
					Sleep(500);
					talk="L§A";
					talk_attack="LVA";
					m_HP=2500;
					m_attack=70;
					m_agile=60;
					m_name="";		//]q?? 
					m_talen="0";
					lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
					if(lose==0){
						exp=exp+15000;
						money=money+1000;
						cout<<"A?"<<exp<<"g"<<endl; 
						cout<<"A?"<<money<<""<<endl; 
						exp1();
						dragon_plot=2;
						thing[6]=1;
					}else if(lose==1){
						read();
					}
					cout<<"AnFe?@?~]"<<endl;
					Sleep(500);
					cout<<"KA`??_?F"<<endl;
					Sleep(500);
					cout<<"AV?~"<<endl;
					Sleep(500);
					cout<<"iL:?rAQp"<<endl;
					Sleep(500);
					cout<<"iL:o?aA?o?gAA????N?Aa"<<endl;
					Sleep(500);
					cout<<"AFFP"<<endl;
					Sleep(500);
					cout<<"?qbBqALwnA?h@UL"<<endl;
					Sleep(500);
					cout<<"n"<<endl;
					Sleep(500);
					cout<<"§A?bA"<<endl;
					
				}
				else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="6"){
						hotel();	
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();
				 else if(yes[5]=="10"){
					cout<<"ATwn}(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						Sleep(300);
						cout<<"??nh(2.Zs 6.Xj 9.)"<<endl;
						while(cin>>go &&( go!="2" && go!="6" &&go!="9")){
							cout<<"??Anha"<<endl; 
						}
						break;
					}else if(yes[6]=="2"){
						cout<<"A^hF"<<endl;
					}
				}
				system("pause");
				system("cls");
			}
		}else if(go=="6"){
			cout<<"??aaAjC"<<endl;
			ban[7]=1;
			while(ban[7]!=0){
				cout<<"An(";
				if(shot_plot==1)cout<<"1.?nC??(Du@?6[g^])";
				cout<<" 2.nC? 4.I] 5.A 6.? 7.a 8.s  9.? 10.})"<<endl;
				cin>>yes[5];
				if(yes[5]=="1" && shot_plot==1){ 
					cout<<"nC?b?\t\Z\\\"<<endl;
					Sleep(500);
					cout<<"ALh??­?"<<endl;
					Sleep(500);
					cout<<"nC?\_\\c\:??W\\\\N\|?A";
					Sleep(300);
					cout<<"?jNOQL?C"<<endl;
					Sleep(300);
					cout<<"?LnU?@uO?\n(n?@ 1.n     l~??)"<<endl;
					cin>>yes[10]; 
					if(yes[10]!="1"){
						cout<<"_\\c\Y?t:??WnX"<<endl;
						Sleep(500); 
						cout<<"?L^a??a?b]?osW??"<<endl;
						Sleep(500);
						HP=hp;
						MP=mp;
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(400);
						cout<<"C"<<endl; 
						Sleep(600);
						cout<<"AFWwa"<<endl;
						Sleep(500);
						cout<<"\\b\n\\?"<<endl;
						Sleep(500);
						cout<<"(FNN)"<<endl;
						Sleep(300);
						cout<<"\MNF\u\\\"<<endl;
						Sleep(500); 
						cout<<"AtIsXnA?n_\\c\AC"<<endl;
						Sleep(600);
						cout<<"AMl?F_?F_?A?_\\c\\\\|A?­\\\\n"<<endl;
						system("pause");
						Sleep(500);
						cout<<"@??" <<endl;
						Sleep(300);
						cout<<"uB?gUA@s\~\¼vbFzW???A?Ot"<<endl;
						Sleep(1000);
						cout<<"?A¼vwpsAo?wiX?A?OHab@_AOHoSO?jC"<<endl;
						Sleep(1500);
						cout<<"LF@}A}BnAs?aW???HvA@???AYW??UAOXjHAt@Hob??AoO?klC\n"<<endl;
						Sleep(2000);
						system("pause");
						cout<<"p?QGuO\K\(­\\?)FAB\@\L\\\m\\\Cvukl¶?klww?A`oXLLTnAo}Bv[?A`Tn]V?VTAV?VKASpX~P@"<<endl;
						Sleep(2000);
						cout<<"nC??ttGuo\wmpaBAL?jnoGCv"<<endl;
						Sleep(1000);
						cout<<"W(]NOK)?A_?A_\\c\\?|eAsyh?O" <<endl;
						Sleep(1000);
						cout<<"@}?OATr?RK?Aja@??WC"<<endl; 
						Sleep(700);
						cout<<"W?DGuA?O?Ao?F?Hv\n"<<endl;
						Sleep(600);
						system("pause");
						cout<<"nC?@z|~C"<<endl;
						Sleep(700);
						cout<<"CHNWb?AMCICW@?A@?xC?Lb?nF`C"<<endl;
						Sleep(1500);
						cout<<"[r?o@"<<endl;
						Sleep(500);
						cout<<"?W?AAi}kA\îCos?AsS?}Auo?p?A?Y]ABA}?F??C"<<endl;
						Sleep(1800);
						cout<<"C??AoaAo?o?H"<<endl;
						Sleep(700);
						cout<<"WFn?DGuA?O?H?X?I?Q]o?Cv\n"<<endl;
						system("pause");
						Sleep(700);
						cout<<"oV_cnnAnLi}f?AoroAnFnAraQ_j?A@o?Hu?o_cNNDGuWAAiOo?s_@B?_c?Hv"<<endl;
						Sleep(1800);
						cout<<"W?AsDGunplAA?SIAO\\\\s\\\\\Hv_\\c\DGuAA]?SAno?Cv\W?FfAqMyC"<<endl;
						Sleep(1500);
						cout<<"Wan\S\Any?ARKAeFXhCo?@?GunAoObIV???e???CvsGu?FoIv"<<endl;
						Sleep(1400);
						cout<<"lHnWeA?oB??@nS\AnNpW~S\n@A\\?\n"<<endl;
						system("pause");
						Sleep(1000);
						cout<<"OH??MA?A?GUS\nS_AnwF\hCC?O@GuoH}Bn?Iv_csDGu????Cv"<<endl;
						Sleep(1500);
						cout<<"oK?pF`A@??kAG\ObdlWAw?ADL?d?Aut\?\AH\\\C"<<endl;
						Sleep(1600);
						cout<<"pMuxvF@nAubb??HveA??@?GpHvbWs"<<endl;
						Sleep(1000);
						cout<<"uOLo?CA?SpAOHeSoCo??AGpH?O?p?A?Ot"<<endl;
						Sleep(1100);
						cout<<"mUhnLW?CoPt?Zw?ASOUsDA???\\\\n\\A"<<endl;
						Sleep(1200);
						cout<<"?AwmFnj@q{C\n"<<endl;
						system("pause");
						Sleep(500);
						cout<<"pL@áGu?mUh?JW??AMOLKKop??DLrA??Hv"<<endl;
						Sleep(1300);
						cout<<"HY[?}BAP?sDGu?lA?]IvtFoAwIjsAoj?wb?C"<<endl;
						Sleep(1200);
						cout<<"t@nIAQ?IFLhC"<<endl;
						Sleep(700);
						cout<<"?w?ob\\A?iBAB?A@nA?wF_c@AV~@fAwFKAk?XAqC"<<endl;
						Sleep(1800);
						cout<<"kowfWF_\\c\\fC_cjADC"<<endl;
						Sleep(1000);   
						cout<<"?o@o?AL}AA~@w}FAAa?Al?Aku~ABOA@?b_c?fA\n"<<endl;
						system("pause");
						Sleep(1500);
						cout<<"P_\\c\\^\X\hA?XA@KKp?jVLWhCoXUsiA??OL??A?oNA??SC"<<endl;
						Sleep(1500);
						cout<<"o?tjsGuU?Iv?F@nAo?qSO@{Ctu?vHJA"<<endl;
						Sleep(1500);
						cout<<"?gXAi?AjbUA?XyPAVLWA"<<endl;
						Sleep(1200);
						cout<<"o@UJ?p{AKoPS?`C?gs@nAVK?C"<<endl;
						Sleep(1300);
						cout<<"L\@\\\m\\\\AmOb{AOo`PWUL?ANOM`MCIFLmA]O??RC"<<endl;
						Sleep(1500);
						cout<<"P??ALméPKAMe?}LbpAo?@?\n"<<endl;
						system("pause");
						Sleep(1200);
						cout<<"L?@?Apewbsy?LLALM\|\Z\\\A"<<endl;
						Sleep(1000);
						cout<<"u\a\\A\a\\\vAo?Z\F`?A??b@?M|Z\p?Ct@PNH?A~oLDAJ?J?b@?AiLQAoSXn"<<endl;
						Sleep(1800);
						cout<<"?K\?U@\\\ "<<endl;
						Sleep(600);
					}
						cout<<"Wu?A?O@"<<endl;
						Sleep(400);
						talk="L???oF?VFA";
						talk_attack="LAyF";
						m_HP=150;
						m_attack=25;
						m_agile=30;
						m_name="W";		//]q?? 
						m_talen="4";
						lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
						if(lose==0){
							exp=exp+2000;
							money=money+1000;
							cout<<"A?"<<exp<<"g"<<endl; 
							cout<<"A?"<<money<<""<<endl; 
							exp1();
							shot_plot=2;
							thing[4]=1;
							cout<<"A?_FaWEug?"<<endl;
						}else if(lose==1){
							read();
						}
						
						
					
				}else if(yes[5]=="2"){
					cout<<"j u\\\\v_\\c\AOHh AZ\\\\u]kv  AS\\\u\\\s\v_\@\\]Q\\\\\\\A\H\M\L\\\\\\^"<<endl;
					Sleep(400);
					cout<<"G u??vo  OWa??C ?u?šv"<<endl;
					Sleep(400);
					cout<<"T u\\\v\_\s\A\\p\\\S\ C Z\us@\kv"<<endl;
					Sleep(400);
					cout<<"| uns\lvn\\\AO\m\A\B\\A\\\\CI\q\\A\\A\@}\f\\X\\\\I\\D\zCZ\unsMkvBunsxkv"<<endl;
					Sleep(400);
					cout<<" u\\\vi\\\AO\\\\\\O\\A\\\k\BMkB\\\N\]N\O\L\^A\m\N\uK\\mv"<<endl;
					Sleep(400);
					cout<<" ux\\L\\v\\oA\p\c\B\H\CZ\uI\\j\kv"<<endl;
					Sleep(400);
					cout<<"Cf uV\k\C\v\p\\AO\\n\C\\?@@k?A\k\\_\s\\fBi\\\\dCZ\uVkCkv"<<endl;
				}else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="6"){
						hotel();	
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();
				 else if(yes[5]=="10"){
					cout<<"ATwn}(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						Sleep(300);
						cout<<"??nh(4. 5.X[? 7.? 8.Bq  )"<<endl;
						while(cin>>go &&( go!="5" && go!="4" && go!="7" &&go!="8")){
							cout<<"??Anha"<<endl; 
						}
						break;
					}else if(yes[6]=="2"){
						cout<<"A^hF"<<endl;
					}
				}
				system("pause");
				system("cls");
			}
		}else if(go=="7"){
			ban[5]=0;	
			while(ban[5]!=1){
				cout<<"U?An?(";
				if(shot_plot==2)cout<<"1 Z?(Du@?9[g^])";
				if(shot_plot==3)cout<<"1.eh|X(Du@?11[g^])" ;
				cout<<" 2.hKKQ  3.Z]  4.I]  5.A  6.? 7.a 8.s  9.? 10.X)" <<endl;
				cin>>yes[5] ;
					if(yes[5]=="1" && shot_plot==2){
						cout<<"A?FiZ??j?P"<<endl;
						Sleep(500);
						cout<<"ADD"<<endl;
						Sleep(700);
						cout<<"~t]b?AP"<<endl;
						Sleep(500);
						cout<<"AW?xWklo?"<<endl;
						talk="LPNFA";
						talk_attack="L??Fajk";
						m_HP=900;
						m_attack=45;
						m_agile=50;
						m_name="pO";		//]q?? 
						m_talen="0";
						lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
						if(lose==0){
							exp=exp+3500;
							money=money+1300;
							cout<<"A?"<<exp<<"g"<<endl; 
							cout<<"A?"<<money<<""<<endl; 
							exp1();
							shot_plot=3;
						}else if(lose==1){
							read();
						}
						cout<<"A?F?AîFL¸\c"<<endl;
						Sleep(500);
						cout<<"?klt????AA:"<<endl;
						Sleep(500);
						cout<<"lpkl@NAF"<<endl;
						Sleep(500);
						cout<<"A??}?b@_"<<endl;
						Sleep(500);
						cout<<"o?WX{F??A@WIQl?x"<<endl;
						Sleep(500);
						cout<<"HêL]¤X"<<endl;
						Sleep(500);
						cout<<"LM@?ZLqAeA?C?F"<<endl;
						Sleep(500);
						cout<<"tnl?QLv?B?u?B@F"<<endl;
						Sleep(500);
						cout<<"A?]?J"<<endl;
						Sleep(500);
						cout<<"o?F@?pP?a??n"<<endl;
						Sleep(500);
						cout<<"T:tA?bn?r"<<endl;
						Sleep(500);
						cout<<"t:T???nJ??S??C"<<endl;
						Sleep(500);
						cout<<"T:nnu?@"<<endl;
						Sleep(500);
						cout<<"o?a ???o?|M"<<endl;
						Sleep(500);
					}else if(yes[5]=="1" && shot_plot==3){
						cout<<"(A?J)"<<endl;
						Sleep(500);
						cout<<"o{FA"<<endl; 
						Sleep(500);
						cout<<"B@ @HTH"<<endl; 
						Sleep(500);
						cout<<"tMdWF"<<endl; 
						Sleep(500);
						cout<<"TP?WF"<<endl; 
						Sleep(500);
						cout<<"?u?tj:vBp"<<endl; 
						Sleep(500);
						cout<<"@?jP?HbB@?\\VFL"<<endl; 
						Sleep(500);
						cout<<"B@BOx?F^hAoo{xOr"<<endl; 
						Sleep(500);
						cout<<"[B@HU"<<endl; 
						Sleep(500);
						cout<<"A?X"<<endl; 
						Sleep(500);
						cout<<"??B@FWHo_"<<endl; 
						talk="L§A";
						talk_attack="L??FKvjL";
						m_HP=450;
						m_attack=47;
						m_agile=40;
						m_name="FWH";		//]q?? 
						m_talen="0";
						lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
						if(lose==1){
							read();
						}
						Sleep(500);
						cout<<"AN??"<<endl; 
						Sleep(500);
						cout<<"?Fq?o_"<<endl; 
						talk="L§A";
						talk_attack="L??FK?A";
						m_HP=650;
						m_attack=35;
						m_agile=50;
						m_name="Fq";		//]q?? 
						m_talen="0";
						lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
						if(lose==1){
							read();
						}
						Sleep(500);
						cout<<"AN?"<<endl; 
						Sleep(500);
						cout<<"?@H^so_"<<endl; 
						Sleep(500);
						talk="L§A";
						talk_attack="L??@gKPxA";
						m_HP=600;
						m_attack=42;
						m_agile=50;
						m_name="^s";		//]q?? 
						m_talen="0";
						lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
						if(lose==0){
							exp=exp+9900;
							money=money+2000;
							cout<<"A?"<<exp<<"g"<<endl; 
							cout<<"A?"<<money<<""<<endl; 
							exp1();
							shot_plot=4;
						}else if(lose==1){
							read();
						}
						cout<<"A?oF?Q"<<endl; 
						Sleep(500);
						cout<<"gLo?AMt?[`F"<<endl; 
					}
					else if(yes[5]=="2"){
						talk_smithy=2;
						smithy();
					}else if(yes[5]=="5"){
						bag();
					}else if(yes[5]=="3"){
						store();
						if(lose==1){
						read();
						ban[5]=1;	
						}
					}else if(yes[5]=="6"){
							hotel();	
					}else if(yes[5]=="10"){
						cout<<"ATwn}(t??5A)(1.O 2._)"<<endl; 
						cin>>yes[6];
						if(yes[6]=="1"){
							cout<<"A}F"<<endl; 
							ban[5]=1;
							day=0;
							plot_int=2;
							Sleep(300);
							cout<<"??nh( 4. 6.Xj )"<<endl;
							while(cin>>go &&( go!="4" && go!="6" )){
								cout<<"??Anha"<<endl; 
							}
						}else if(yes[6]=="2"){
							cout<<"A^F"<<endl;
						}
					}else if(yes[5]=="7")map();
					 else if(yes[5]=="8")archive();
					 else if(yes[5]=="9")read();
					 else if(yes[5]=="4")bag_thing();	
							
				system("pause");
				system("cls");
				}
		}else if(go=="8"){
			cout<<"H?"<<endl;
			ban[7]=0;
			while(ban[7]!=1){
				cout<<"An(";
				if(dragon_plot==2)cout<<"1.iL?q»(Du??14[??OsO]";
				cout<<"  4.I] 5.A 6.? 7.a 8.s  9.? 10.})"<<endl;
				cin>>yes[5];
				if(yes[5]=="1" && dragon_plot==2){
					cout<<"A?N?ZVn_"<<endl;
					Sleep(500);
					cout<<"A]h"<<endl;
					Sleep(500);
					cout<<"o{@??yM@?Hb"<<endl;
					Sleep(500);
					cout<<"A{XF?HO»"<<endl;
					Sleep(500);
					cout<<"Aeh"<<endl;
					Sleep(500);
					talk="A?F_";
					talk_attack="LA";
					m_HP=1500;
					m_attack=120;
					m_agile=150;
					m_name="CC";		//]q?? 
					m_talen="0";
					lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
					if(lose==0){
						exp=exp+12000;
						money=money+1500;
						cout<<"A?"<<exp<<"g"<<endl; 
						cout<<"A?"<<money<<""<<endl; 
						exp1();
						dragon_plot=3;
					}else if(lose==1){
						read();
					}
					cout<<"CCU?O?~k"<<endl;
					Sleep(500);
					cout<<"AM»?NAoXğkF"<<endl;
					Sleep(500);
					cout<<"»MA?o?"<<endl;
					Sleep(500);
					cout<<"»:u????"<<endl;
					Sleep(500);
					cout<<"Y?Ate?u??vdnDP??TQTN?D?b?H?MA\\\\\\\\AL\\\\O\_\{\\D\k\\N\\X\\A\\\\\\d\\A\\\\H\\\u\m\s\\v\\\C"<<endl;
					Sleep(500);
					cout<<"\]\P\\d\\b\\\\\\\\\\\\\A\k\\`\\l\\\u\ev\\S\\S\\\uCCvCCCX`aXny¡ANO]~?HP????AQBN???AH?ce??C"<<endl;
					Sleep(500);
					cout<<"LPd?AL\\\\\\J\F\\\K\D\A\\M\^\i\\`\\\\h\\\u\[\j\\\v\k\A\\\N\\\?\o\AH\\`\\N\\s\t\k\N\\\g\@\A\o\\\M\^\k\A\]\\M\\\\\\~\F\\F\D\q"<<endl;
					Sleep(500);
					cout<<"?H??A?DRuPvJC?dvfAms}X?AJC??rA?dro`Cms]P?C"<<endl;
					Sleep(500);
					cout<<"P¤?Le??UA?]Q?qlFA?oNWLv"<<endl;		
				}else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="6"){
						hotel();	
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();
				 else if(yes[5]=="10"){
					cout<<"ATwn}(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						Sleep(300);
						cout<<"??nh(6.Xj )"<<endl;
						while(cin>>go &&( go!="6")){
							cout<<"??Anha"<<endl; 
						}
						break;
					}else if(yes[6]=="2"){
						cout<<"A^hF"<<endl;
					}
				}
				system("pause");
				system("cls");
			}
		}else if(go=="9"){
			ban[7]=0;
			while(ban[7]!=1){
				cout<<"An(";
				if(dragon_plot==3)cout<<"1.??DiL(Du??20[??OsO]";
				cout<<"  4.I] 5.A 6.? 7.a 8.s  9.? 10.})"<<endl;
				cin>>yes[5];
				if(yes[5]=="1" && dragon_plot==3){
					cout<<"AWF"<<endl;
					Sleep(500);
					cout<<"iL:uDP§AA?A"<<endl;
					Sleep(500);
					cout<<"A?XAb?"<<endl;
					Sleep(500);
					cout<<"iL:n!unAo?|jk?NA"<<endl;
					Sleep(500);
					cout<<"?@?WOCl@"<<endl;
					Sleep(500);
					talk="?}l";
					talk_attack="Lk?wA";
					m_HP=1400;
					m_attack=80;
					m_agile=300;
					m_name="Cl@";		//]q?? 
					m_talen="7";
					lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
					if(lose==1){
						read();
					}
					cout<<"U@O?N?"<<endl;
					Sleep(500);
					talk="?}l";
					talk_attack="L?N?\\";
					m_HP=3500;
					m_attack=100;
					m_agile=100;
					m_name="?N?";		//]q?? 
					m_talen="0";
					lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
					if(lose==1){
						read();
					}
					cout<<"U@OmsL"<<endl;
					Sleep(500);
					talk="?}l";
					talk_attack="LCA";
					m_HP=1500;
					m_attack=120;
					m_agile=150;
					m_name="msL";		//]q?? 
					m_talen="0";
					lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
					if(lose==1){
						read();
					}
					cout<<"U@O»"<<endl;
					talk="?}l";
					talk_attack="LR_OsM";
					m_HP=2500;
					m_attack=140;
					m_agile=100;
					m_name="»";		//]q?? 
					m_talen="8";
					lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
					if(lose==0){
						exp=exp+25000;
						money=money+2500;
						cout<<"A?"<<exp<<"g"<<endl; 
						cout<<"A?"<<money<<""<<endl; 
						exp1();
						dragon_plot=4;
					}else if(lose==1){
						read();
					}
					Sleep(500);
					cout<<"??OsONAF"<<endl;
					thing[5]=1; 
				}else if(yes[5]=="5"){
					bag();
				}else if(yes[5]=="6"){
						hotel();	
				}else if(yes[5]=="7")map();
				 else if(yes[5]=="8")archive();
				 else if(yes[5]=="9")read();
				 else if(yes[5]=="4")bag_thing();
				 else if(yes[5]=="10"){
					cout<<"ATwn}(1.O 2._)"<<endl; 
					cin>>yes[6];
					if(yes[6]=="1"){
						cout<<"A}F"<<endl; 
						Sleep(300);
						cout<<"??nh(2.Zs 5.X[? )"<<endl;
						while(cin>>go &&( go!="2" &&go!="5")){
							cout<<"??Anha"<<endl; 
						}
						break;
					}else if(yes[6]=="2"){
						cout<<"A^hF"<<endl;
					}
				}
				system("pause");
				system("cls");
			}
		}else if(go=="10"){
			if(thing[3]==1&&thing[5]==1){
				cout<<"[~???~]"<<endl;
				Sleep(500); 
				cout<<"pF:A?Fr"<<endl;
				Sleep(500); 
				cout<<"pF:qL?oNFCHH"<<endl;
				Sleep(500); 
				cout<<"(L}l?)"<<endl;
				talk="?}l";
				talk_attack="LR_OsM";
				m_HP=15000;
				m_attack=100;
				m_agile=200;
				m_name="?K";		//]q?? 
				m_talen="9";
				lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);//? 
				if(lose==0){
					exp=exp+500000;
					money=money+90000;
					cout<<"A?"<<exp<<"g"<<endl; 
					cout<<"A?"<<money<<""<<endl; 
					exp1();
					Sleep(500); 
					cout<<"?A?F"<<endl;																						
					Sleep(500); 
					cout<<"A?Q^h"<<endl;
					Sleep(500); 
					cout<<"Q"<<endl;
					Sleep(500); 
					cout<<"U?AQ?HKAa"<<endl;
					go="4";
				}else if(lose==1){
					read();
				}
			}else {
				cout<<"A?So??"<<endl;
				go="4";
			}
		}
	} 
	
	return 0;
	
}
/* 
						?{ 						?{ 						?{ 
						?{ 						?{ 						?{ 
						?{ 						?{ 						?{ 
																						*/ 
	void vs_monster(int rat_HP,int rat_attack,string name,string m_name,string talk_attack){
		int n,m_hit; 
		n_m_agile=m_agile;
		cout<<""<<m_name<<"^XF"<<endl; 
		if(m_talen=="0"){
			m_hit=rat_attack;
			
		}else if(m_talen=="1"){
			srand ((unsigned)time(NULL));
			n=rand()%4+1;
			if(n==1){
				m_hit=0.7*talen_4(rat_attack);
			}else{
				m_hit=rat_attack;
			}
		}else if(m_talen=="2"){
			srand ((unsigned)time(NULL));
			n=rand()%5+1;
			if(n==1){
				m_hit=talen_4(rat_attack);
				m_hit=m_hit*0.8;
			}else if(n==2){
				m_agile=n_m_agile;
				m_hit=talen_5(rat_attack);
				m_agile=m_agile*1.5;
			}else{
				m_hit=rat_attack;
			}
		}else if(m_talen=="3"){
			srand ((unsigned)time(NULL));
			n=rand()%10+1;
			if(n==1){
				m_hit=talen_4(rat_attack);
					m_hit=m_hit*0.8;
			}else if(n==2){
				m_agile=n_m_agile;
				m_hit=talen_5(rat_attack);
				m_agile=m_agile*1.5;
			}else if(n==3){
				m_hit=talen_2(attack);
				srand ((unsigned)time(NULL));
				main_dizzy=rand()%2+0;
				if(main_dizzy>0)cout<<"?HQwF"; 
			}else if(n==4){
				m_hit=talen_1(attack);
			}else {
				m_hit=rat_attack;
			}
		}else if(m_talen=="4"){
			srand ((unsigned)time(NULL));
			n=rand()%4+1;
			if(n==1){
				m_hit=talen_7(rat_attack);
				m_hit=m_hit*0.8;
			}else{
				m_hit=rat_attack;
			}
		}else if(m_talen=="5"){
			srand ((unsigned)time(NULL));
			n=rand()%4+1;
			if(n==1){
				m_hit=talen_4(rat_attack);
			}else if(n==2){
				m_agile=n_m_agile;
				m_hit=talen_5(rat_attack);
				m_agile=m_agile*1.5;
			}else {
				m_hit=talen_6(attack);
				srand ((unsigned)time(NULL));
				main_dizzy=rand()%2+0;
				if(main_dizzy>0)cout<<"?HQwF"; 
			}
		}else if(m_talen=="6"){
			srand ((unsigned)time(NULL));
			n=rand()%3+1;
			if(n==1){
				cout<<"L??Fj"<<endl; 
				m_hit=talen_8(rat_attack);
			}else {
				m_hit=rat_attack;
			}
		}else if(m_talen=="7"){
			srand ((unsigned)time(NULL));
			n=rand()%4+1;
			if(n==1){
				cout<<"L??FHBx"<<endl; 
				m_hit=talen_9(rat_attack);
				main_dizzy=1; 
			}else {
				m_hit=rat_attack;
			}
		}else if(m_talen=="8"){
			srand ((unsigned)time(NULL));
			n=rand()%4+1;
			if(n==1){
				cout<<"L??FC?"<<endl; 
				rat_HP=rat_HP-400;
				m_hit=talen_10(rat_attack);
				Sleep(500);
				cout<<"\\D\\\\ ?l"<<"HP:"<<rat_HP<<endl;
			}else {
				m_hit=rat_attack;
			}
		}else if(m_talen=="9"){
			srand ((unsigned)time(NULL));
			n=rand()%10+1;
			if(n==1){
				m_hit=talen_4(rat_attack);
					m_hit=m_hit*0.8;
			}else if(n==2){
				m_agile=n_m_agile;
				m_hit=talen_5(rat_attack);
				m_agile=m_agile*1.5;
			}else if(n==3){
				m_hit=talen_2(attack);
				srand ((unsigned)time(NULL));
				main_dizzy=rand()%2+0;
				if(main_dizzy>0)cout<<"?HQwF"; 
			}else if(n==4){
				m_hit=talen_1(attack);
			}else if(n==5){
				cout<<"L??FHBx"<<endl; 
				m_hit=talen_9(rat_attack);
				main_dizzy=1; 
			}else if(n==6){
				cout<<"L??Fj"<<endl; 
				m_hit=talen_8(rat_attack);
			}else {
				m_hit=rat_attack;
			}
		} 
			m_hit=(1-protect*0.015)*m_hit;
			if(m_hit-0.8*protect>=0) m_hit=m_hit-0.8*protect;
			else m_hit=0;
			HP=HP-m_hit;
			Sleep(300);
			cout<<"C ";
			Sleep(350);
			cout<<"C ";
			Sleep(400);
			cout<<"C "<<endl;
			cout<<talk_attack<<"yF"<<m_hit<<"I?`"<<endl<<endl;
	}																					
	int vs_people(int rat_HP,int rat_attack,string name,string m_name,string talk_attack){
		string yes,fight;
		int hit=0,i;
		cout<<"A^XF!!\nAHP:"<<HP<<endl<<"O: "<<mp<<"/"<<MP<<"\n??An(1.? 2.\)"<<endl; 
		cin>>yes;
		for(i=1;i<=20;i++){
				vs_time[i]--;
			}
		if(yes=="1"){
			if(skill_0==1){
				cout<<"??zn???"<<endl;
				if(skill[1]==""){
					cout<<"1.?(-15O)"<<endl;
					if(vs_time[1]>0)cout<<"??"<<vs_time[1]<<"^X~?"<<endl; 
				} 
				if(skill[2]==""){
					cout<<"2.s(-40O)"<<endl;
					if(vs_time[2]>0)cout<<"??"<<vs_time[2]<<"^X~?"<<endl;
				}
				if(skill[3]==""){
					cout<<"3.?C-??C("<<mp*0.5<<"O)"<<endl; 
					if(vs_time[3]>0)cout<<"??"<<vs_time[3]<<"^X~?"<<endl;
				}
				if(skill[4]==""){
					cout<<"4.XCk(-30O)"<<endl;
					if(vs_time[4]>0)cout<<"??"<<vs_time[4]<<"^X~?"<<endl;
				} 
				if(skill[5]==""){
					cout<<"5.¶XC(-45O)"<<endl;
					if(vs_time[5]>0)cout<<"??"<<vs_time[5]<<"^X~?"<<endl;
				} 
				if(skill[6]==""){
					cout<<"6.QTC(-65O)"<<endl;
					if(vs_time[6]>0)cout<<"??"<<vs_time[6]<<"^X~?"<<endl;
				}
				if(skill[7]==""){
					cout<<"7.E?(-30O -"<<hp*0.1<<"HP"<<endl; 
					if(vs_time[7]>0)cout<<"??"<<vs_time[7]<<"^X~?"<<endl; 
				}
				if(skill[8]==""){
					cout<<"8.g(-30O)"<<endl; 
					if(vs_time[8]>0)cout<<"??"<<vs_time[8]<<"^X~?"<<endl; 
				}
				if(skill[9]==""){
					cout<<"9.sQKx (-130O)"<<endl; 
					if(vs_time[9]>0)cout<<"??"<<vs_time[9]<<"^X~?"<<endl; 
				}
				cin>>fight;
				if(fight=="1"){
					if(skill[1]==""){ 
						if(vs_time[1]<=0){
							if(MP>=16){
								MP=MP-16;
								cout<<"A??F?"<<endl; 
								hit=talen_1(attack);
								cout<<"Abb?HyFh?`"<<endl<<"`@yF"<<hit<<"I?`";
								vs_time[1]=2;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 
				}else if(fight=="2") {
					if(skill[2]==""){
						if(vs_time[2]<=0){
							if(MP>=40){
								MP=MP-40;
								cout<<"A??Fs"<<endl;
								hit=talen_2(attack);
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								srand ((unsigned)time(NULL));
								dizzy=rand()%3+0;
								if(dizzy>0)cout<<"?HQwF"; 
								vs_time[2]=4;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl;
						hit=0; 
					}	
				}else if(fight=="3"){
					if(skill[3]==""){
						if(vs_time[3]<=0){ 
							if(MP>=mp*0.5){
								MP=MP-mp*0.5;
								cout<<"A??F?C-??C"<<endl;
								hit=talen_3();
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								vs_time[3]=3;
							}else{
								cout<<"An?o{?vO"<<endl;
								hit=0;	
							}
						}else{
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 
				}else if(fight=="4"){
					if(skill[4]==""){
						if(vs_time[4]<=0){
							if(MP>=30){
								MP=MP-30;
								cout<<"A??FXCk"<<endl;
								hit=talen_4(attack);
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								vs_time[4]=3;
							}else{
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else{
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl;
						hit=0; 
					}
				}else if(fight=="5"){
					if(skill[5]==""){ 
						if(vs_time[5]<=0){
							if(MP>=45){
								MP=MP-45;
								cout<<"A??F¶XC"<<endl; 
								hit=talen_5(attack);
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								vs_time[5]=3;
								agile=agile*1.5;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 
				}else if(fight=="6"){
					if(skill[6]==""){ 
						if(vs_time[6]<=0){
							if(MP>=65){
								MP=MP-65;
								cout<<"A??FQTC"<<endl; 
								hit=talen_6(attack);
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								vs_time[6]=5;
								dizzy=1;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 
				}else if(fight=="7"){
					if(skill[7]==""){ 
						if(vs_time[7]<=0){
							if(MP>=30){
								MP=MP-30;
								HP=HP-hp*0.1;
								cout<<"A??FE?"<<endl; 
								hit=talen_7(attack);
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								vs_time[7]=4;
								dizzy=1;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 	
				}else if(fight=="8"){
					if(skill[8]==""){ 
						if(vs_time[8]<=0){
							if(MP>=30){
								MP=MP-30;
								HP=HP+attack*1.5+mp*0.05;
								cout<<"A??Fl?wbN "<<endl; 
								cout<<"A^_F"<<attack*1+mp*0.05<<"I"<<endl;
								vs_time[8]=4;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 	
				}else if(fight=="9"){
					if(skill[9]==""){ 
						if(vs_time[9]<=0){
							if(MP>=130){
								MP=MP-130;
								cout<<"A??FsQKx"<<endl; 
								hit=talen_11(attack);
								cout<<"A?Hy"<<hit<<"I?`"<<endl;
								vs_time[9]=5;
								dizzy=1;
							}else {
								cout<<"An?o{?vO"<<endl;
								hit=0;
							}
						}else {
							cout<<"??bNo"<<endl;
							hit=0;
						}
					}else{
						cout<<"AèS??"<<endl; 
						hit=0;
					} 
				}
				
					//HW? 
			}else{
				cout<<"A|o?"<<endl;	//S??
				hit=0;
			}
		}else if(yes=="2"){
			Sleep(200);
			cout<<"A?y" <<attack<<"I?`"<<endl;
			hit=attack;
		}
		rat_HP=rat_HP-hit;
		if(mp>MP){
			MP=MP+mp_reply;
			if(mp<MP){
				MP=mp;				
			}
		}	
		if(vs_time[5]==0 || rat_HP<=0){
			agile=n_agile;
		}
		HP=HP+(blood*hit);
		HP=HP+hp1;
		if(HP>hp)HP=hp; 
		Sleep(200);
		if(rat_HP>0)cout<<m_name<<"?l"<<"HP:"<<rat_HP<<endl<<endl;
		return rat_HP; 			
	}																					
int monster(int rat_HP,int rat_attack,string name,string m_name,string talk,string talk_attack){
	int a,end,hit,m_hit=rat_attack,i;//tt?t 
	double t;
	string yes,fight;
	n_agile=agile;
	cout<<talk<<endl; 
	system("pause");
	cout<<m_name<<"Ao_F\niJ?e\nC\nC\nC\nC"<<endl; 
	a=1;
	if(agile/m_agile>=2)cout<<"At?"<<endl; 
	if(m_agile/agile>=2)cout<<"?t?A"<<endl;
	if(agile/m_agile==1)cout<<"A?t?th"<<endl;
	cout<<m_name<<"HP:"<<rat_HP<<endl<<endl; 
	while(a==1 ){	
		if(agile/m_agile==1 && agile>=m_agile){  //t?th 
			if(main_dizzy<0)rat_HP=vs_people(rat_HP,rat_attack,name,m_name,talk_attack);
			else {
				cout<<"ABgA"<<endl;
				main_dizzy--;
			}
			if(rat_HP<=0){   // 
				cout<<"A?F"<<endl;
				a=2;
				return 0;
			}else if(HP<=0){
				cout<<"AF\nAN|^???sI\n";
				system("pause");
				system("cls");
				return 1;
				a=2;
			}
			if(dizzy<=0)vs_monster(rat_HP,rat_attack,name,m_name,talk_attack);
			else {
				cout<<"?HBgA"<<endl;
				dizzy--;
			}
			if(rat_HP<=0){   // 
				cout<<"A?F"<<endl;
				a=2;
				return 0;
			}else if(HP<=0){
				cout<<"AF\nAN|^???sI\n";
				system("pause");
				system("cls");
				return 1;
				a=2;
			}
		}else if(agile/m_agile>=2){			//?t?X\h 
			for(i=0;i<2;i++){
				if(main_dizzy<=0)rat_HP=vs_people(rat_HP,rat_attack,name,m_name,talk_attack);
				else {
				cout<<"ABgA"<<endl;
				main_dizzy--;
			    }
				if(rat_HP<=0){   // 
					a=2;
					return 0;
					cout<<"A?F"<<endl;
				}else if(HP<=0){
					cout<<"AF\nAN|^???sI\n";
					system("pause");
					system("cls");
					return 1;
					a=2;
				}
			} 
			if(dizzy<=0)vs_monster(rat_HP,rat_attack,name,m_name,talk_attack);
			else{
				cout<<"?HBgA"<<endl;
				dizzy--;
			}
			if(rat_HP<=0){   // 
					a=2;
					return 0;
					cout<<"A?F"<<endl;
				}else if(HP<=0){
					cout<<"AF\nAN|^???sI\n";
					system("pause");
					system("cls");
					return 1;
					a=2;
				}
		}else if(m_agile/agile>=2){ //?Ht X\h
			for(i=0;i<2;i++){
				if(dizzy<=0)vs_monster(rat_HP,rat_attack,name,m_name,talk_attack);
				else {
				cout<<"?HBgA"<<endl;
					dizzy--;
				}
				if(rat_HP<=0){   // 
					a=2;
					return 0;
					cout<<"A?F"<<endl;
				}else if(HP<=0){
					cout<<"AF\nAN|^???sI\n";
					system("pause");
					system("cls");
					return 1;
					a=2;
				}
			} 
			if(main_dizzy<=0)rat_HP=vs_people(rat_HP,rat_attack,name,m_name,talk_attack);
			else {
				cout<<"ABgA"<<endl;
				main_dizzy--;
			}
			if(rat_HP<=0){   // 
					a=2;
					return 0;
					cout<<"A?F"<<endl;
				}else if(HP<=0){
					cout<<"AF\nAN|^???sI\n";
					system("pause");
					system("cls");
					return 1;
					a=2;
				}
		}else{
				//HC	
				if(dizzy<=0)vs_monster(rat_HP,rat_attack,name,m_name,talk_attack);
				else {
					cout<<"?HBgA"<<endl;
					dizzy--;
				}
				if(rat_HP<=0){   // 
					a=2;
					return 0;
					cout<<"A?F"<<endl;
				}else if(HP<=0){
					cout<<"AF\nAN|^???sI\n";
					system("pause");
					system("cls");
					return 1;
					a=2;
				}
				if(main_dizzy<=0)rat_HP=vs_people(rat_HP,rat_attack,name,m_name,talk_attack);
			    else {
				cout<<"ABgA"<<endl;
				main_dizzy--;
			    } 
				if(rat_HP<=0){   // 
					a=2;
					return 0;
					cout<<"A?F"<<endl;
				}else if(HP<=0){
					cout<<"AF\nAN|^???sI\n";
					system("pause");
					system("cls");
					return 1;
					a=2;
				}
		}			
		Sleep(100);
		system("pause");
		system("cls");
	}
}
	

	void exp1(void){
		while(exp/n_exp>=1){		//? 
			level=level+1;
			exp=exp-n_exp;
			n_exp=n_exp*1.05+level*50;
			cout<<"A??F "<<endl<<"A{b:"<<level<<endl;
			attack=attack+level*0.3+2;
			HP=HP+level*3+15;
			hp=hp+level*3+15;
			MP=mp+level*1+5;
			mp=mp+level*1+5;
			agile=agile+level*0.3+3;
			HP=hp;
			MP=mp;
		}
	}
	
	void bag(){					//}I] 
	string yes,skill_number,make,yes_skill;
	int i;
		cout<<name<<":"<<endl;
		cout<<"A"<<level<<endl; 
		cout<<"AHP: "<<hp<<"//"<<HP<<endl
		<<"AO: "<<mp<<"//"<<MP<<endl
		<<"Aattack: "<<attack<<endl 
		<<"Am: "<<protect<<endl 
		<<"At: "<<agile<<endl 
		<<"Amoney: "<<money<<endl
		<<"Ag: "<<n_exp<<"//"<<exp<<endl
		<<"A?e?: "<<tool_yes<<endl
		<<"A?eZ: "<<tool___yes<<endl; 
		cout<<"An(1.?  2.Z 3.?)(n?LYi)"<<endl;
		cin>>yes;                             
		if(yes=="1"){
		cout<<"n?????s(pGS??N?)"<<endl;	
			hp=hp-tool_hp;
			hp1=hp1-tool_hp1;
			mp_reply= mp_reply-tool_mp_reply; 
			tool_yes="L";
			if(tool[10]==""){
			cout<<"10."<<tool[10]<<endl;
				}
			if(tool[11]==""){
			cout<<"11.?"<<tool[11]<<endl;
				}
			if(tool[12]==""){
			cout<<"12.K"<<tool[12]<<endl;
				}
			if(tool[13]==""){
			cout<<"13.å"<<tool[13]<<endl;
				}
			if(tool[14]==""){
			cout<<"14.å"<<tool[14]<<endl;
				}
			if(tool[15]==""){
			cout<<"15.n?"<<tool[15]<<endl;
				}				
			cin>>tool_number;
				if(tool_number=="10"){			
						if(tool[10]==""){ 
						tool_hp=5;
						protect=1;
						cout<<"H?? hp+5 +1m +2O^_"<<endl;
						hp=hp+tool_hp;
						tool_mp_reply=2;
						mp_reply=mp_reply+tool_mp_reply;
						tool_yes="H??";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(tool_number=="11"){			
						if(tool[11]==""){ 
						tool_hp=8;
						cout<<"H??? hp+8  +2m +4O^_"<<endl;
						hp=hp+tool_hp;
						protect=2;
						tool_mp_reply=4;
						mp_reply=mp_reply+tool_mp_reply;
						tool_yes="H???";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(tool_number=="12"){			
						if(tool[12]==""){ 
						tool_hp=15;
						cout<<"H?K hp+15  +5m +8O^_"<<endl;
						hp=hp+tool_hp;
						protect=5;
						tool_mp_reply=8;
						mp_reply=mp_reply+tool_mp_reply;
						tool_yes="H?K";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(tool_number=="13"){			
						if(tool[13]==""){ 
						tool_hp=10;
						cout<<"H?å hp+10 +12m +10O^_"<<endl;
						hp=hp+tool_hp;
						protect=12;
						tool_mp_reply=10;
						tool_yes="H?å";
						mp_reply=mp_reply+tool_mp_reply;
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(tool_number=="14"){			
						if(tool[14]==""){ 
						tool_hp=18;
						cout<<"H??å hp+18 +15m +10C^ +15O^_"<<endl;
						tool_hp1=10;
						hp=hp+tool_hp;
						tool_mp_reply=15;
						protect=15;
						mp_reply=mp_reply+tool_mp_reply;
						hp1=hp1+tool_hp1;
						tool_yes="H????å";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(tool_number=="15"){			
						if(tool[15]==""){ 
						tool_hp=66;
						cout<<"H??n? hp+66 +40m +40O^_"<<endl;
						hp=hp+tool_hp;
						tool_mp_reply=40;
						mp_reply=mp_reply+tool_mp_reply;
						protect=40; 
						tool_yes="H????n?";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else{
					cout<<"AF"<<endl; 
				}
		//C
		}else if(yes=="2"){
		cout<<"n???Zs(pGSZN?)"<<endl; 
			attack=attack-tool_attack;
			hp=hp-tool_HP;
			blood=0;
			tool___yes="L";
			if(tool[1]==""){
				cout<<"1.C"<<tool[1]<<endl;
				}
			if(tool[2]==""){
				cout<<"2.?C"<<tool[2]<<endl;
				}	
			if(tool[3]==""){
				cout<<"3.KC"<<tool[3]<<endl;
				}	
			if(tool[4]==""){
				cout<<"4.?C"<<tool[4]<<endl;
				}	
			if(tool[5]==""){
				cout<<"5.@C"<<tool[5]<<endl;
				}
			if(tool[6]==""){
				cout<<"6.glC"<<tool[6]<<endl;
				}
			if(tool[7]==""){
				cout<<"7.QkC"<<tool[7]<<endl;
				}
			if(tool[8]==""){
				cout<<"8.]C"<<tool[8]<<endl;
				}
			if(tool[9]==""){
				cout<<"9.j_C"<<tool[9]<<endl;
				}
			if(tool[16]==""){
				cout<<"16.??C"<<tool[16]<<endl;	
			}	
			cin>>toolnumber;
				if(toolnumber=="1"){			
						if(tool[1]==""){ 
						tool_attack=2;
						cout<<"H??C atk+2"<<endl;
						attack=attack+tool_attack;
						tool___yes="H??C";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="2"){			
						if(tool[2]==""){ 
						tool_attack=3;
						cout<<"H???C atk+3"<<endl;
						attack=attack+tool_attack;
						tool___yes="H???C";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="3"){			
						if(tool[3]==""){ 
						tool_attack=5;
						cout<<"H?KC atk+5"<<endl;
						attack=attack+tool_attack;
						tool___yes="H?KC";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="4"){			
						if(tool[4]==""){ 
						tool_attack=10;
						tool_HP=-25;
						cout<<"H???C atk+10 HP-25"<<endl;
						attack=attack+tool_attack;
						hp=hp+tool_HP;
						tool___yes="H???C";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="5"){			
						if(tool[5]==""){ 
						tool_attack=8;
						tool_HP=7;
						cout<<"H??@Catk+8 HP+7" <<endl;
						attack=attack+tool_attack;
						hp=hp+tool_HP;
						tool___yes="H??@C";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="6"){			
						if(tool[6]==""){ 
						tool_attack=25;
						cout<<"H??glC atk+25"<<endl;
						attack=attack+tool_attack;
						tool___yes="H??glC";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="7"){			
						if(tool[7]==""){ 
						tool_attack=25;
						cout<<"H??QkC atk+25"<<endl;
						attack=attack+tool_attack;
						tool___yes="H??QkC";
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="8"){			
						if(tool[8]==""){ 
						tool_attack=14;
						cout<<"H??]C atk+14  l+12"<<endl;
						attack=attack+tool_attack;
						tool___yes="H??]C";
						blood=0.12;
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="9"){			
						if(tool[9]==""){ 
						tool_attack=66;
						tool_HP=66;
						cout<<"H??j_C atk+66  l+5%"<<endl;
						attack=attack+tool_attack;
						hp=hp+tool_HP;
						tool___yes="H??j_C";
						blood=0.05;
						}else{
						cout<<"ASZ"<<endl;	
						} 
				}else if(toolnumber=="16"){
						if(tool[16]==""){ 
						tool_attack=100;
						cout<<"H????C atk+100 l+5%"<<endl;
						attack=attack+tool_attack;
						blood=0.05;
						tool___yes="H????C";
						}else{
						cout<<"ASZ"<<endl;	
						}
				}else {
				cout<<"AF?"<<endl;
				}
		}else  if(yes=="3"){
			cout<<"?\A\n\d\\\\\\\s\\ "<<endl;
			if(skill[1]==""){
				cout<<"1.?"<<endl;
			}
			if(skill[2]==""){
				cout<<"2.s"<<endl;
			}
			if(skill[3]==""){
				cout<<"3.?C-??C"<<endl;
			} 
			if(skill[4]==""){
				cout<<"4.XCk"<<endl;
			}
			if(skill[5]==""){
				cout<<"5.¶XC"<<endl; 
			} 
			if(skill[6]==""){
				cout<<"6.QTC"<<endl;
			} 
			if(skill[7]==""){
				cout<<"7.E?"<<endl; 
			} 
			if(skill[8]==""){
				cout<<"8.l?wbN"<<endl; 
			} 
			if(skill[9]==""){
				cout<<"9.sQKx"<<endl; 
			} 
			cin>>yes_skill;
			if(yes_skill=="1"){
				if(skill[1]==""){
					cout<<"?:H?attack*0.5?`3~5"<<endl
					<<"???15O"<<endl; 
				}
			}else if(yes_skill=="2"){
				if(skill[2]==""){
					cout<<"s:H?attack*2?`?HAv??Hwt^X"<<endl
						<<"???40O"<<endl; 
				}
			}else if(yes_skill=="3"){
				if(skill[3]==""){
					cout<<"?C-??C:??OMattackhA?Mw?H?`"<<endl
						<<"?????O?j?o50%"<<endl; 
				}
			}else if(yes_skill=="4"){
				if(skill[4]==""){
					cout<<"XCk:???t?MattackhA?Mw?H?`"<<endl
						<<"???30O"<<endl;
				}
			}else if(yes_skill=="5"){
				if(skill[5]==""){
					cout<<"¶XC:bw^X?t?Aù?H?`"<<endl
						<<"???45O"<<endl;
				}
			}else if(yes_skill=="6"){
				if(skill[6]==""){
				cout<<"QTC:?Hy13*0.5*attack?`A÷wt?H"<<endl
					<<"???65O"<<endl;
				}	
			}else if(yes_skill=="7"){
				if(skill[7]==""){
				cout<<"E?:H????RN?HA÷wt?H"<<endl
					<<"???30O 10%"<<endl;
				}	
			}else if(yes_skill=="8"){
				if(skill[8]==""){
					cout<<"l?wbN:^_?R "<<endl
					<<"???30O"<<endl; 
				}
			}else if(yes_skill=="9"){
				if(skill[9]==""){
					cout<<"sQKx:?Hy10*attack?`A÷wt?H"<<endl
					<<"???130O"<<endl; 
				}
			}
		}else if(yes=="0124m")cin>>money;
		else if(yes=="0124"){
			cin>>exp;
			exp1();
		}else if(yes=="shot_plot")cin>>shot_plot;
		else if(yes=="shot_plot")cin>>dragon_plot;
		else if(yes=="skill"){
			for(i=0;i<11;i++){
				skill[i]="";
			}
		}
	}
	
	void miss(int ban){		//gcJ?P? 
		int n;
		if(ban/20>=1){
			cout<<"A?F(???Vk?V)"<<endl;
		}else if(ban<=0){
			cout<<"A?F(???V?Ve)"<<endl; 
		} else if(ban==10||ban==12){
			cout<<"AXfF"<<endl; 
		}
	srand ((unsigned)time(NULL));
	n=rand()%4+1;
		if(n==2){
			talk="}l";
			talk_attack="LAyF";
			m_agile=30;
			m_name="H";		//]q?? 
			m_talen="3";
			m_HP=rand()%20+90;
			m_attack=rand()%3+14;
			talk="@H?bFD!!!";
			talk_attack="LVFA"; 
			lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);
			if(lose==0){
				exp=exp+level*(rand()%20+30);
				money=money+rand()%100+50;
				cout<<"A?"<<exp<<"g"<<endl; 
				cout<<"A?"<<money<<""<<endl; 
				exp1();
				cout<<"AqF"<<endl;
			} 	
		 }
		
	}
	void smithy(){
		string yes,buy;
		cout<<"AJFKKQ"<<endl<<name<<":(1.o?F?  ";
		if(talk_smithy==1)cout<<"2.KK)"<<endl;
		cin>>yes;
			if(yes=="1"){
				cout<<"\n           A"<<money<<""<<endl
					  <<"1. KC200(+5 attack)"<<endl
					  <<"2. ?C100(+3 attack)"<<endl 
					  <<"3. ?C399(+10 attack i-25HPj)"<<endl
					  <<"4. @C699(+8 attack +7HP)"<<endl
					  <<"5. glC1699(+25 attack)"<<endl
					  <<"6. QkC1699(+25 attack)"<<endl
					  <<"7. ]C2000(+14 attack +12%l)" <<endl
					  <<"8. j_C6666(+66 attack +66HP +5%l)" <<endl
					  <<"9. 80(+5HP +1m +2O^_)"<<endl
					  <<"10.?100(+8HP +2m +4O^_)"<<endl
					  <<"11.K200(+15HP +5m +8O^_)"<<endl
					  <<"12.å800(+10HP +12m +10O^_)"<<endl
					  <<"13.å2000(+18HP +15m +10C^ +15O^_)"<<endl
					  <<"14.n?6666(+66HP +40m +40O^_"<<endl;
				if(thing[2]==1)cout<<"15??C5000 (+100 attack +5%l)"<<endl;
					  cout<<"?JNX?R" <<endl;
				cin>>buy;
					if (buy=="1"){
						if((money-200)>=0){
							tool[3]="";
							money=money-200;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????" <<endl;
						}
					}
					if (buy=="2"){
						if((money-100)>=0){
							tool[2]="";
							money=money-100;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????" <<endl;
						}
					}
					if (buy=="3"){
						if((money-399)>=0){
							tool[4]="";
							money=money-399;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="4"){
							if((money-699)>=0){
							tool[5]="";
							money=money-699;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="5"){
							if((money-1699)>=0){
							tool[6]="";
							money=money-1699;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="6"){
							if((money-1699)>=0){
							tool[7]="";
							money=money-1699;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="7"){
							if((money-2000)>=0){
							tool[8]="";
							money=money-2000;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="8"){
							if((money-6666)>=0){
							tool[9]="";
							money=money-6666;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="9"){
							if((money-80)>=0){
							tool[10]="";
							money=money-80;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="10"){
							if((money-100)>=0){
							tool[11]="";
							money=money-100;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="11"){
							if((money-200)>=0){
							tool[12]="";
							money=money-200;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="12"){
							if((money-800)>=0){
							tool[13]="";
							money=money-800;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="13"){
							if((money-2000)>=0){
							tool[14]="";
							money=money-2000;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if (buy=="14"){
							if((money-6666)>=0){
							tool[15]="";
							money=money-6666;
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????"<<endl;
						}
					}
					if(buy=="15"){
						if(thing[2]==1){
							if((money-5000)>=0){
								tool[16]="";
								money=money-5000;
								cout<<"A?U:"<<money<<""<<endl; 
							}else{
								cout<<"S?QR????"<<endl;
							}
						}else{
							cout<<"?sJ"<<endl;
						}
					}
			}else if(yes=="2"&&talk_smithy==1){
				cout<<"?D?jcHbVoyla"<<endl<<"?Lz?O}a"<<endl; 
			}		 
		
	}
	
	void store(){
		int n=1;
	while(n!=0){
		cout<<"AJFZ](1.RZLD  2.?)"<<endl;
		string yes,yes1,buy;
		cin>>yes;
		if(yes=="2"){
			cout<<"??Ouju|HTwn?(PD???(1n 2.}))"<<endl;
			cin>>yes1;
				while(yes1=="1"){
			 		srand ((unsigned)time(NULL));
			 		m_attack=(rand()%3+2)+level*0.4+1.5*level;
			 		m_HP=level*1.2+level*5+(rand()%5+17);
			 		m_talen="0";
			 		m_agile=10;
			 		string m_name="Z]{";
			 		talk="Z]{?Ao?F";
			 		talk_attack="LA?XFy";
			 		lose=monster(m_HP,m_attack,name,m_name,talk,talk_attack);
			 		if(lose==0){
			 			exp=exp+level*(rand()%20+10)+30;
						money=money+rand()%70+20;
						cout<<"A?"<<exp<<"g"<<endl; 
						cout<<"A?"<<money<<""<<endl; 
						exp1();
						cout<<"A?F`(1.?nA 2.})"<<endl; 
			 			cin>>yes1;	 
						  if(yes1=="2"){
			  				cout<<"??nA?a"<<endl; 
			  				yes="7";
			  				n=0;
			 	 		} else{
			 	 			cout<<"?????"<<endl;
			 	 		}
					}else {
						n=0;
						yes1="7";
					}
				}		
			}else if(yes=="1"){
				cout<<"w{"<<endl;
				cout<<"??AnR?"<<endl
					<<""<<endl
					<<"1.?400"<<endl; 
				cin>>buy;
					if(buy=="1"){
						if(money>=400){
							money=money-400;
							bag_skill[1]="";
							cout<<"A?U:"<<money<<""<<endl; 
						}else{
							cout<<"S?QR????" <<endl;
						}
						
					}	
				n=0;
			}else{
				n=0;
			} 
		}	
	}
	void hotel(){
		int i=0;
		string yes;
		while(i==0){
		cout<<"w???A?Ln??(1.[n10] 2.})(???RO)"<<endl;
		cin>>yes;
			if(yes=="1"){
			cout<<"wJ"<<endl;
			HP=hp;
			MP=mp;
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"C"<<endl; 
			Sleep(400);
			cout<<"A??F@]"<<endl;
			i=1; 
			}else if(yes=="2"){
				cout<<"A}F"<<endl; 
				i=1;
			}
		
		}	
	}
	int talen_1(int att){
		int n,i,hit;
		system("pause");
		cout<<"_pApqAeAl"<<endl<<"A?HyFh?`"<<endl;
		srand ((unsigned)time(NULL));
		n=rand()%3+3;		//X 
			for(i=1;i<=n;i++){
				Sleep(800);
				cout<<"I!"<<endl; 
		}
		hit=att*n*0.5;
		system("pause");
		return hit; 
	}
void map(){
		cout<<"_____________________________________________________________________"<<endl
			<<"|                                                                    |"<<endl
			<<"|        5.X[? ----------------6.Xj------------8.Bq       |"<<endl
			<<"|            |                       |                               |"<<endl
			<<"|            |                       |                               |"<<endl
			<<"|            |                       |                               |"<<endl
	      	<<"|            |                       |------7.?                   |"<<endl
			<<"| 9.---|                       |                               |"<<endl
			<<"|            |                       |                               |"<<endl
			<<"|            |                       |                               |"<<endl
			<<"|            |----2.Zs           |                               |"<<endl
			<<"|                    |               |                               |"<<endl
			<<"|                    |               |                               |"<<endl
			<<"|                    |               |                               |"<<endl
			<<"|                    |               |                               |"<<endl
			<<"|            a----1.a-------4. --------10.??         |"<<endl
			<<"|                    |                                               |"<<endl
			<<"|                    |                                               |"<<endl
			<<"|                    |                                               |"<<endl
			<<"|                    |                                               |"<<endl
			<<"|                3.q                                            |"<<endl
			<<"______________________________________________________________________"<<endl;
	}
void archive(){
	int i;
	for(i=0;i<30;i++){
	s_tool[i]=tool[i];
	}
	s_toolnumber=toolnumber;
	s_name=name;
	s_tool_number=tool_number;
	for(i=0;i<20;i++){
		s_skill[i]=skill[i];
	}
	for(i=0;i<20;i++){
		s_bag_skill[i]=bag_skill[i];
	}
	s_tool_yes=tool_yes;
	for(i=0;i<30;i++){ 
	s_yes[i]=yes[i]; 
	} 
	s_tool___yes=tool___yes;
	s_go=go;
	s_level=level;
	s_exp=exp;
	s_HP=HP;
	s_hp=hp;
	s_attack=attack;
	s_tool_attack=tool_attack;
	s_tool_HP=tool_HP;
	s_money=money;
	s_MP=MP;
	s_mp=mp;
	s_tool_hp=tool_hp;
	s_tool_hp1=tool_hp1;
	s_hp1=hp1;
	s_mp_reply=mp_reply;
	s_tool_mp_reply=tool_mp_reply;
	s_evil=evil;
	s_skill_0=skill_0;
	s_game=game;
	for(i=0;i<20;i++){
		s_ban[i]=ban[i];
	}
	s_plot_int=plot_int;
	s_protect=protect;
	s_blood=blood;
	s_n_exp=n_exp;
	lose=0;
	s_day=day;
	s_agile=agile;
	for(i=0;i<30;i++){
		s_thing[i]=thing[i];
	}
	s_force=force;
	s_teacher=teacher;
	s_MP_level=MP_level;
	s_day_time=day_time;
	for(i=0;i<20;i++){
		s_vs_time[i]=vs_time[i];
	}
	s_shot_plot=shot_plot;
	s_dragon_plot=dragon_plot;
}
void read(){
	int i;
	for(i=0;i<30;i++){
	tool[i]=s_tool[i];
	}
	toolnumber=s_toolnumber;
	name=s_name;
	tool_number=s_tool_number;
	for(i=0;i<20;i++){
		skill[i]=s_skill[i];
	}
	for(i=0;i<20;i++){
		bag_skill[i]=s_bag_skill[i];
	}
	tool_yes=s_tool_yes;
	for(i=0;i<30;i++){ 
	yes[i]=s_yes[i]; 
	} 
	tool___yes=s_tool___yes;
	go=s_go;
	level=s_level;
	exp=s_exp;
	HP=s_HP;
	hp=s_hp;
	attack=s_attack;
	tool_attack=s_tool_attack;
	tool_HP=s_tool_HP;
	money=s_money;
	MP=s_MP;
	mp=s_mp;
	tool_hp=s_tool_hp;
	tool_hp1=s_tool_hp1;
	hp1=s_hp1;
	mp_reply=s_mp_reply;
	tool_mp_reply=s_tool_mp_reply;
	evil=s_evil;
	skill_0=s_skill_0;
	game=s_game;
	for(i=0;i<20;i++){
		ban[i]=s_ban[i];
	}
	plot_int=s_plot_int;
	protect=s_protect;
	blood=s_blood;
	n_exp=s_n_exp;
	day=s_day;
	lose=0;
	agile=s_agile;
	for(i=0;i<30;i++){
		thing[i]=s_thing[i];
	}
	force=s_force;
	teacher=s_teacher;
	MP_level=s_MP_level; 
	day_time=s_day_time;
	for(i=0;i<20;i++){
		vs_time[i]=s_vs_time[i];
	}
	shot_plot=s_shot_plot;
	dragon_plot=s_dragon_plot;
}
int talen_2(int att){
	int t,hit=0 ;
	hit=2*att;
	cout<<"K??gA?HbLNQYA?HYD?"<<endl;
	return hit;
}	
void bag_thing(){
	string skill_number,make,number;
	cout<<"??zn??~s(pGS~N?)"<<endl;	 
	if (bag_skill[1]=="")	cout<<"1.?"<<endl; 
	if(thing[1]==1)cout<<"2.s?n"<<endl; 
	if(thing[2]==1)cout<<"3.??C?"<<endl;
	if(thing[3]==1)cout<<"4.g^"<<endl;
	if(thing[4]==1)cout<<"5.Eug?(i?E?)"<<endl;
	if(thing[5]==1)cout<<"6.??OsO"<<endl;
	if(thing[6]==1)cout<<"7.g"<<endl;
	cin>>skill_number;	
	if(skill_number=="1"){
		if(bag_skill[1]==""){
		cout<<"zno?(1.½ 2.? )"<<endl;
		cin>>make;
			if(make=="2"){ 
				cout<<"A?|F?"<<endl;	
				skill[1]="";	
				skill_0=1;					
			}else if(make=="1"){
				cout<<"A}l½?o"<<endl;
				Sleep(2000);
				cout<<"?]?JN?oWCD???A_pApqAeAlA?@RCM" <<endl
					<<"@Y?ABkFAX??Cu}?A?pAsA?p{qvCnD@xBGOBT"<<endl
					<<"\\B|BB?BClBKC?uf[?dA{z?JAJj?W¶BvA"<<endl
					<<"B?sAWUHAJ?YA?h?CkDYA?JA?tA@h?A??OH"<<endl
					<<"?C"<<endl;
				Sleep(5000);
				cout<<"?N@|MCG"<<endl
					<<"@p?Bq?pOuA?H?rC"<<endl
					<<"G??AqL?BaWykmrlrC"<<endl
					<<"T?Am?P?C"<<endl
					<<"|X?AhHX??kAgMC"<<endl;		
				Sleep(5000);
				cout<<"²:12O u??H[3~5"<<endl;						
			}	
		}	
	}else if(skill_number=="2"){
		cout<<"1.? \n2.SA\n3.L?`\n(?})"<<endl;
		while(cin>>number&&(number=="1"||number=="2"||number=="3")){
			if(number=="1"){
				cout<<"??t??MwApGt?jT?AiHh@!!"<<endl; 
			}else if(number=="2"){
				cout<<"wt:wt?GUA^XN|LkC"<<endl; 
			}else if(number=="3"){
				cout<<"F?u?pAbS??O?A^X|OASC"<<endl; 
			}
		}
	}else if(skill_number=="3" && thing[2]==1){
		cout<<"1.u"<<endl;
		cin>>make;
		if(make=="1")cout<<"KK?L?|D"<<endl;
	}else if(skill_number=="4" && thing[3]==1){
		cout<<"??@"<<endl;
	}else if(skill_number=="5" && thing[4]==1){
		cout<<"zno?(1.½ 2.? )"<<endl;
		cin>>make;
		if(make=="2"){
			cout<<"A?|FE?"<<endl;
			skill_0=1;
			skill[7]="";
		}else if(make=="1"){
			cout<<"o?LZ\\wLo[?u?Xg??}?E?"<<endl;
		}
	}else if(skill_number=="7" && thing[6]==1){
		cout<<"zno?(1.½ 2.? )"<<endl;
		cin>>make;
		if(make=="2"){
			cout<<"A?|Fl?wbN"<<endl;
			skill_0=1;
			skill[8]="";
		}else if(make=="1"){
			cout<<"OFUk"<<endl;
		}
	}else if(skill_number=="6" && thing[5]==1){
		cout<<"??@"<<endl;
	} 
}	
int talen_3(){
	int hit;
	cout<<"A??uANO?yEg?XA?ouKp@`L?CV?HC"<<endl;
	Sleep(1000);
	hit=attack+attack*(mp*0.05);
	return hit;
}
int talen_4(int att){
	int hit;
	cout<<"CkXIAF?A?ñjluO"<<endl;
	Sleep(1000);
	hit=agile*5+1.5*att;
	return hit;
}	
void practice(){
	string yes;
	cout<<"A?eO?"<<MP_level<<""<<endl;
	cout<<"n}???nF"<<MP_level*5<<"åBO"<<MP_level*500<<"O_}(1.O 2._)"<<endl;
	cin>>yes;
	if(yes=="1"){	
		if(level<MP_level*5 && money<MP_level*500){
		cout<<"AM?" <<endl;
		}else if(level<MP_level*5){
		cout<<"A?" <<endl;
		}else if(money<MP_level*500){
		cout<<"A"<<endl;
		}else{
			cout<<"A}l}"<<endl;
			Sleep(300);
			cout<<"C"<<endl; 
			Sleep(300);
			cout<<"C"<<endl; 
			Sleep(300);
			cout<<"C"<<endl; 
			Sleep(300);
			cout<<"C"<<endl; 
			Sleep(300);
			cout<<"C"<<endl; 
			Sleep(500);
			MP_level++;
			mp=mp+(MP_level-1)*30+25;
		} 
	}	 
}	
	
int talen_5(int att){
	int hit;
	cout<<"???HpOGsCbAC?F@naAXA?wAC?{{L`AH?["<<endl; 
	Sleep(1000);
	cout<<"At??T^X"<<endl;
	Sleep(500);
	hit=att*1.5;	
	return hit;
}
int talen_6(int att){
	int hit;
	cout<<"Hp???A?HyQTBPR"<<endl;
	Sleep(100);
	cout<<"                                     "<<endl;
	Sleep(100);
	cout<<"                                     "<<endl;
	Sleep(100);
	cout<<"                                     "<<endl;
	Sleep(100);
	cout<<"                                     "<<endl;
	Sleep(100);
	cout<<"                                     "<<endl;
	Sleep(100);
	cout<<"                                     "<<endl;
	Sleep(100);
	cout<<"                                       "<<endl;
	Sleep(300); 
 	cout<<"?HQChF?O1^X"<<endl;
 	hit=att*13*0.5;
 	return hit;
}
int talen_7(int att){
	int hit;
 	cout<<"olAL}AR?ApGg"<<endl;
	 Sleep(500);
	 hit=att*3+hp*0.3; 
	 return hit;
}
int talen_8(int att){
	int hit;
	cout<<"???K]IiA?bAT?A???B?@AB}?OHHN"<<endl;
	Sleep(500);
	hit=att*5;
	return hit; 
}
int talen_9(int att){
	int hit;
	cout<<"xlpBAA?uo";
	Sleep(500);
	hit=att*2;
	return hit;
}
int talen_10(int att){
	int hit;
	cout<<"?HCAlvT"<<endl;
	Sleep(500);
	hit=att*5;
	return hit;
}
int talen_11(int att){
	int hit;
	cout<<"jZsB?UL"<<endl;
	Sleep(500);
	hit=att*10;
	return hit;
}
