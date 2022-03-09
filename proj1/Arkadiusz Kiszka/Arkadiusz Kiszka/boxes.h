#pragma once
#include <vector>
class boxes
{
	
public:
	std::vector<std::vector<int>> tablica_dynamiczna;
	std::vector<int> temp;
	std::vector<std::vector<int>> tablica_dynamiczna1;
	std::vector<int> temp1;
	int bialy = 0;//0 jak jest bialy 1 jak jest czarny;
	int czarny = 1;//0 jak jest bialy 1 jak jest czarny;
	int xkolocekGlowny;
	
	int ykolocekGlowny;
	int tab[8][8];
	int licznik;
	int zwroc(int a, int b, int x, int y,int N,int M);
	void KolorowanieNaBialo(int N,int M);
	void KolorowanieNaBialox2(int N,int M);
	void KolorowanieNaczarno(int x, int y);
	void ZmianaNaKolejnePokolenie(int M,int N);
	void Schematy(int M,int N);
	void SchematyPistolet(int M,int N);
	int wybor = 0;

};

