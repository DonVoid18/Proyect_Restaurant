#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>//es para que funcione la funcion strcmp();
void gotoxy(int x, int y) //implementación de la función gotoxy
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
using namespace std;
int main(){
		//sirve para poder usar el acento ortografico
		setlocale(LC_CTYPE,"Spanish");
		//variables 
		int numero, edad, conti, ciudad, rest, final;
		char nombre[30]; 
		char apellidos[30];
		char c[4];
		char confi[2];
	
		//primera parte
		do{
		gotoxy(34,3);
		cout<<"*********************************************"<<endl;
		gotoxy(34,4);
		cout<<"-------------COOL CITY RESTAURANTS-----------"<<endl;
		gotoxy(34,5);
		cout<<"*********************************************"<<endl;
		
		gotoxy(28,8);cout<<"DATOS PERSONALES";
		gotoxy(30,10);cout<<"NOMBRES: ";cin.getline(nombre,30,'\n');
		gotoxy(30,12);cout<<"APELLIDOS: ";cin.getline(apellidos,30,'\n');
	
		gotoxy(30,14);cout<<"EDAD: ";cin>>edad;
		system("cls");
		
		if(edad<5 || edad>110 ){
			cout<<"ERROR..."<<endl<<"SOLO PUEDE INGRESAR"<<endl<<"NÚMEROS MAYORES A 5(EDAD) "<<endl<<"Y MENOR QUE 110(EDAD)";
			fflush(stdin);
		}
		cin.clear();
		
		}while(edad>110 || edad<5 );
		
		system("cls");
		otra_ciudad:
		do{
			cout<<"¡ BIENVENIDO "<<strupr(nombre)<<" "<<strupr(apellidos)<<" ! "<<endl;
			cout<<"ELIGIR CIUDAD"<<endl;
			cout<<"1.HUÁNUCO"<<endl;
			cout<<"2.AMBO"<<endl;
			cout<<"N° OPCIÓN: ",cin>>ciudad;
			system("cls");
			
			if(ciudad==1){
				//huanuco
				volver:
				cout<<"RESTAURANTES DE HUÁNUCO"<<endl;
				cout<<"\t1.RESTAURANTE SAN FELIPE"<<endl;
				cout<<"\t2.RESTAURANTE EL LEÑADOR"<<endl;
				cout<<"\t3.CEVICHERÍA DON LIMÓN HUÁNUCO"<<endl;
				cout<<"\t4.RESTAURANTE JONA'S HOUSE"<<endl;
				cout<<"\t5.POLLERÍA Y PARRILLAS PILYS"<<endl;
				cout<<"INGRESE NÚMERO DE RESTAURANTE QUE DESEA TENER INFORMACIÓN : ";cin>>rest;
				system("cls");
				switch(rest){
					case 1:{
							
					  		gotoxy(38,1);cout<<"==========================================";
   							gotoxy(38,2);cout<<"|| INFORMACIÓN DE RESTAURANT SAN FELIPE ||";
							gotoxy(38,3);cout<<"==========================================";
							gotoxy(65,6);cout<<"»HORARIO DE ATENCIÓN";
					 		gotoxy(67,7);cout<<"Abierto todo los días las 24 horas";
					 		gotoxy(65,11);cout<<"»TIPO DE COMIDA";
					 		gotoxy(67,12);cout<<"Pollos a la brasa, Parrillas, Chifa.";
					 		gotoxy(65,16);cout<<"»RANGO DE PRECIOS";
					 		gotoxy(67,17);cout<<"S/ 10 - S/ 60";
					 		gotoxy(18,6);cout<<"»TELÉFONO";
					 		gotoxy(20,7);cout<<"922 518 637";
							gotoxy(18,11);cout<<"»UBICACIÓN";
							gotoxy(20,12);cout<<"Jirón 2 de Mayo 420, Huánuco 10001";
					 		gotoxy(18,16);cout<<"»CARACTERISTICAS DEL LUGAR";
					 		gotoxy(20,17);cout<<"-Primer piso";
					 		gotoxy(20,18);cout<<"-Sillitas altas disponibles";
					 		gotoxy(20,19);cout<<"-Servicio de mesa ";
					 		gotoxy(20,20);cout<<"-Delivery";
						break;
					}
					case 2:{
						    gotoxy(38,1);cout<<"==========================================";
   							gotoxy(38,2);cout<<"|| INFORMACIÓN DE RESTAURANT EL LEÑADOR ||";
							gotoxy(38,3);cout<<"==========================================";
							gotoxy(65,6);cout<<"»HORARIO DE ATENCIÓN";
					 		gotoxy(67,7);cout<<"Abierto todo los días(11:45 am---10:45 pm)";
					 		gotoxy(65,11);cout<<"»TIPO DE COMIDA";
					 		gotoxy(67,12);cout<<"Parrillas de carne, pollo, chuletas, etc.";
					 		gotoxy(65,16);cout<<"»RANGO DE PRECIOS";
					 		gotoxy(67,17);cout<<"S/ 15 - S/ 50";
					 		gotoxy(18,6);cout<<"»TELÉFONO";
					 		gotoxy(20,7);cout<<" (062) 514254";
							gotoxy(18,11);cout<<"»UBICACIÓN";
							gotoxy(20,12);cout<<"Jirón Bolivar 349, Huánuco 10001";
					 		gotoxy(18,16);cout<<"»CARACTERISTICAS DEL LUGAR";
					 		gotoxy(20,17);cout<<"-Primer piso";
					 		gotoxy(20,18);cout<<"-Sillitas altas disponibles";
					 		gotoxy(20,19);cout<<"-Servicio de mesa ";
					 		gotoxy(20,20);cout<<"-Delivery";
					 		gotoxy(20,21);cout<<"-Reservas";
						break;
					}
					case 3:{
						    gotoxy(38,1);cout<<"=================================================";
   							gotoxy(38,2);cout<<"|| INFORMACIÓN DE CEVICHERÍA DON LIMÓN HUÁNUCO ||";
							gotoxy(38,3);cout<<"=================================================";
							gotoxy(65,6);cout<<"»HORARIO DE ATENCIÓN";
					 		gotoxy(67,7);cout<<"Abierto todo los días(9:00 am---2:00 pm)";
					 		gotoxy(65,11);cout<<"»TIPO DE COMIDA";
					 		gotoxy(67,12);cout<<"Ceviches, Leche de tigre, Chilcano, etc.";
					 		gotoxy(65,16);cout<<"»RANGO DE PRECIOS";
					 		gotoxy(67,17);cout<<"S/ 15 - S/ 45";
					 		gotoxy(18,6);cout<<"»TELÉFONO";
					 		gotoxy(20,7);cout<<"(062) 518787";
							gotoxy(18,11);cout<<"»UBICACIÓN";
							gotoxy(20,12);cout<<"Jirón 2 de Mayo 1478, Huánuco 10001";
					 		gotoxy(18,16);cout<<"»CARACTERISTICAS DEL LUGAR";
					 		gotoxy(20,17);cout<<"-Primer piso";
					 		gotoxy(20,18);cout<<"-Lugar amplio para la familia";
					 		gotoxy(20,19);cout<<"-Servicio de mesa ";
					 		gotoxy(20,20);cout<<"-Sirve alcohol";
					 		gotoxy(20,21);cout<<"-Delivery";
						break;
					}
					case 4:{
					    	gotoxy(38,1);cout<<"=============================================";
   							gotoxy(38,2);cout<<"|| INFORMACIÓN DE RESTAURANTE JONA'S HOUSE ||";
							gotoxy(38,3);cout<<"=============================================";
							gotoxy(65,6);cout<<"»HORARIO DE ATENCIÓN";
					 		gotoxy(67,7);cout<<"Martes a Lunes(12:00 am---7:00 pm)";
					 		gotoxy(65,11);cout<<"»TIPO DE COMIDA";
					 		gotoxy(67,12);cout<<"Alitas broaster, salchipapas,";
					 		gotoxy(67,13);cout<<"arroz chaufa, etc.";
					 		gotoxy(65,16);cout<<"»RANGO DE PRECIOS";
					 		gotoxy(67,17);cout<<"S/ 10 - S/ 35";
					 		gotoxy(18,6);cout<<"»TELÉFONO";
					 		gotoxy(20,7);cout<<"914 051 934";
							gotoxy(18,11);cout<<"»UBICACIÓN";
							gotoxy(20,12);cout<<"Via Colectora, Amarilis 10002";
					 		gotoxy(18,16);cout<<"»CARACTERISTICAS DEL LUGAR";
					 		gotoxy(20,17);cout<<"-Primer piso";
					 		gotoxy(20,18);cout<<"-Lugar muy limpio";
					 		gotoxy(20,19);cout<<"-Servicio de mesa ";
					 		gotoxy(20,20);cout<<"-Atención rápida";
					 		gotoxy(20,21);cout<<"-Delivery";
						break;
					}
					case 5:{
							gotoxy(38,1);cout<<"===============================================";
   							gotoxy(38,2);cout<<"|| INFORMACIÓN DE POLLERÍA Y PARRILLAS PILYS ||";
							gotoxy(38,3);cout<<"===============================================";
							gotoxy(65,6);cout<<"»HORARIO DE ATENCIÓN";
					 		gotoxy(67,7);cout<<"Martes a Lunes(12:00 am---7:00 pm)";
					 		gotoxy(65,11);cout<<"»TIPO DE COMIDA";
					 		gotoxy(67,12);cout<<"Alitas broaster, salchipapas,";
					 		gotoxy(67,13);cout<<"arroz chaufa, etc.";
					 		gotoxy(65,16);cout<<"»RANGO DE PRECIOS";
					 		gotoxy(67,17);cout<<"S/ 10 - S/ 35";
					 		gotoxy(18,6);cout<<"»TELÉFONO";
					 		gotoxy(20,7);cout<<"914 051 934";
							gotoxy(18,11);cout<<"»UBICACIÓN";
							gotoxy(20,12);cout<<"Sinchi Roca 102, Amarilis 10003";
					 		gotoxy(18,16);cout<<"»CARACTERISTICAS DEL LUGAR";
					 		gotoxy(20,17);cout<<"-Primer piso";
					 		gotoxy(20,18);cout<<"-Lugar muy limpio";
					 		gotoxy(20,19);cout<<"-Servicio de mesa ";
					 		gotoxy(20,20);cout<<"-Atención rápida";
					 		gotoxy(20,21);cout<<"-Delivery";
						break;
					}
					
					default:{
						cout<<"«ERROR» INGRESE NÚMERO CORRECTO..."<<endl;

						cin.clear();
						fflush(stdin);
						goto volver;
						break;
					}
				}
				//cuadro
						for(int i=5;i<=22;i++){
						//verticales
				       	gotoxy(10,i);cout<<"||";
						gotoxy(110,i);cout<<"||";
						for(int j=10;j<=111;j++){
				     	//horizontales
						gotoxy(j,4);cout<<"=";
				    	gotoxy(j,23);cout<<"=";}
						}
				
				//comida del restaurante
				afirmacion:
				cout<<"\n";
				cout<<"¿QUIERE VER LA COMIDA DEL RESTAURANTE? (SI/NO) : ";cin>>confi;
				system("cls");
				if((strcmp(confi,"si")==0) || (strcmp(confi,"SI")==0) || (strcmp(confi,"Si")==0) || (strcmp(confi,"sI")==0)){
							
					switch(rest){
						
						case 1:{
							  gotoxy(48,1);cout<<"============================";
				  			  gotoxy(48,2);cout<<"|| RESTAURANTE SAN FELIPE ||";
							  gotoxy(48,3);cout<<"============================";
							  gotoxy(15,5);cout<<"»PLATILLOS";
						      gotoxy(16,6);cout<<"-Pollo entero a la brasa........................S/ 31.00";
					          gotoxy(16,7);cout<<"-¼ pollo con papas & ensalada...................S/ 12.00"; 
					          gotoxy(16,8);cout<<"-½ pollo con papas & ensalada...................S/ 18.00";
					   	      gotoxy(16,9);cout<<"-Arepuerto......................................S/ 12.00";
					   	      gotoxy(15,11);cout<<"»ENTRADAS";
					   	      gotoxy(16,12);cout<<"-Ensala rusa con mayonesa";
					   	      gotoxy(16,13);cout<<"-Ensalda normal con lechuga americana";
					   	      gotoxy(16,14);cout<<"-Causa rellena";
					   	      gotoxy(16,15);cout<<"-Gelatina";
							  gotoxy(15,17);cout<<"»BEBIDAS";
							  gotoxy(16,18);cout<<"-Coca cola 1 Litros.............................S/ 3.50";
							  gotoxy(16,19);cout<<"-Inka cola 1.5 Litros...........................S/ 3.50";
							  gotoxy(16,20);cout<<"-Jarra de chicha morada.........................S/ 6.00";
							  gotoxy(16,21);cout<<"-Jarra de chicha de maraculla...................S/ 6.50";
							break;
								}
						case 2:{
							
							break;
						}
							
					}
							for(int i=5;i<=22;i++){
							gotoxy(10,i);cout<<"||";
							gotoxy(110,i);cout<<"||";
							for(int j=10;j<=111;j++){
							gotoxy(j,4);cout<<"=";
							gotoxy(j,23);cout<<"=";
							}	
							}
				}
		
	
				if(strcmp(confi,"no")!=0 && strcmp(confi,"NO")!=0 && strcmp(confi,"si")!=0 && strcmp(confi,"SI")!=0 ){
				system("cls");
				cout<<"\nRESPUESTA INCORRECTA"<<endl;
				goto afirmacion;}
			
			}
			
			if(ciudad==2){
				//ambo
				volver2:
				gotoxy(32,4);
				cout<<"**************************************************************"<<endl;
				gotoxy(32,5);
				cout<<"----------------TODOS LOS RESTAURANTES DE AMBO----------------"<<endl;
			    gotoxy(32,6);
				cout<<"**************************************************************"<<endl;
				cout<<"\n\n";
				cout<<"\t1.CHIFA WATAY"<<endl;
				cout<<"\t2.POLLERÍA PEDRITO"<<endl;
				cout<<"\t3.POLLERÍA EMYLIS"<<endl;
				cout<<"\t4.POLLERÍA DORADO "<<endl;
				cout<<"\t5.POLLERÍA EL PECHUGÓN"<<endl;
				cout<<"\n\n";
				cout<<"INGRESE NÚMERO DE RESTAURANTE QUE DESEA TENER INFORMACIÓN : ";cin>>rest;
				system("cls");
				switch(rest){
					case 1:{
						cout<<"caracterirticas de ambo..";
						break;
					}
					default:{
						cout<<"«ERROR» INGRESE NÚMERO CORRECTO..."<<endl;
						cin.clear();
						fflush(stdin);
						goto volver2;
						break;
					}
				}
			cout<<"\n";
			afirmacion1:
			cout<<"¿QUIERE VER LA COMIDA DEL RESTAURANTE? (SI/NO) : ";cin>>confi;
			system("cls");
			
			if(strcmp(confi,"si")==0 || strcmp(confi,"SI")==0 || strcmp(confi,"Si")==0 || strcmp(confi,"sI")==0){
					switch(rest){
						
						case 1:{
							cout<<"vende pollo a la brasa ..";
							break;
						}
							
					}
				}
			if(strcmp(confi,"no")!=0 && strcmp(confi,"si")!=0){
				cout<<"RESPUESTA INCORRECTA"<<endl;
				goto afirmacion1;
			}
				
			}
			
			if(ciudad<=0 || ciudad>2){
				cout<<"«ERROR» VUELVA A INGRESAR NUMERO DE CIUDAD"<<endl;
				fflush(stdin);	
			}
			cin.clear();
			
		}while(ciudad<=0 || ciudad>2 );
		
		do{
			cout<<"\nMENÚ"<<endl,
			cout<<"1. ELEGIR OTRO RESTAURANTE"<<endl;
			cout<<"2. ELEGIR OTRA CIUDAD"<<endl;
			cout<<"3. SALIR"<<endl;
			cout<<"RESPUESTA: ";cin>>final;
			system("cls");
			if(final==1 && ciudad==1){
				system("cls");
				goto volver;
			}
			if(final==1 && ciudad==2){
				system("cls");
				goto volver2;
			}
			if(final==2){
				system("cls");
				goto otra_ciudad;
			}
			if(final==3){
				cout<<"gracias por tu visita..."<<nombre;
				return 0;
			}
			if(final<=0 || final>3){
				cout<<"ERROR INGRESE NUMERO CORRECTO"<<endl;
				fflush(stdin);
			}
			cin.clear();
			
		}while(final<=0 || final>3 );
		
		getch ();
		return 0; 
	}