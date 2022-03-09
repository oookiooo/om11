#include "boxes.h"
#include <vector>
#include <iostream>

void boxes::KolorowanieNaBialo(int N,int M) {
    for (int i = 0; i < M+1; i++)
    {
        
        for (int j = 0; j < N+1; j++)
            temp.push_back(0);

        tablica_dynamiczna.push_back(temp);
    }
    for (int i = 0; i < M+1; i++)
    {
        
        for (int j = 0; j < N+1; j++)
            temp1.push_back(0);

        tablica_dynamiczna1.push_back(temp1); 
    }
}
void boxes::Schematy(int M, int N) {
    
        tablica_dynamiczna[3][2]=1;
        tablica_dynamiczna[4][3]=1;
        tablica_dynamiczna[4][4]=1;
        tablica_dynamiczna[3][4]=1;
        tablica_dynamiczna[2][4]=1;
   

}
void boxes::SchematyPistolet(int M, int N) {

    tablica_dynamiczna[4][11] = 1;
    tablica_dynamiczna[5][11] = 1;
    tablica_dynamiczna[4][12] = 1;
    tablica_dynamiczna[5][12] = 1;
    tablica_dynamiczna[16][9] = 1;
    tablica_dynamiczna[17][9] = 1;
    tablica_dynamiczna[17][15] = 1;
    tablica_dynamiczna[16][15] = 1;
    tablica_dynamiczna[15][10] = 1;
    tablica_dynamiczna[14][11] = 1;
    tablica_dynamiczna[14][12] = 1;
    tablica_dynamiczna[14][13] = 1;
    tablica_dynamiczna[15][14] = 1;
    tablica_dynamiczna[18][12] = 1;
    tablica_dynamiczna[19][10] = 1;
    tablica_dynamiczna[19][14] = 1;
    tablica_dynamiczna[20][11] = 1;
    tablica_dynamiczna[20][12] = 1;
    tablica_dynamiczna[20][13] = 1;
    tablica_dynamiczna[21][12] = 1;
    tablica_dynamiczna[24][9] = 1;
    tablica_dynamiczna[24][10] = 1;
    tablica_dynamiczna[24][11] = 1;
    tablica_dynamiczna[25][9] = 1;
    tablica_dynamiczna[25][10] = 1;
    tablica_dynamiczna[25][11] = 1;
    tablica_dynamiczna[26][8] = 1;
    tablica_dynamiczna[26][12] = 1;
    tablica_dynamiczna[28][7] = 1;
    tablica_dynamiczna[28][8] = 1;
    tablica_dynamiczna[28][12] = 1;
    tablica_dynamiczna[28][13] = 1;
    tablica_dynamiczna[38][9] = 1;
    tablica_dynamiczna[38][10] = 1;
    tablica_dynamiczna[39][9] = 1;
    tablica_dynamiczna[39][10] = 1;
   


}
void boxes::KolorowanieNaBialox2(int x, int y) {

    tablica_dynamiczna[x][y] = 0;
}
void boxes::KolorowanieNaczarno(int x ,int y)
{
	
    
        tablica_dynamiczna[x][y] = 1;
    
    
}

void boxes::ZmianaNaKolejnePokolenie(int M,int N)
{
   
    
    /*
    Martwa komórka, która ma dok³adnie 3 ¿ywych s¹siadów, staje siê ¿ywa w nastêpnej jednostce czasu (rodzi siê)[1][2][3];
¯ywa komórka z 2 albo 3 ¿ywymi s¹siadami pozostaje nadal ¿ywa; przy innej liczbie s¹siadów umiera (z „samotnoœci” albo „zat³oczenia”)[


    for (int i = 2; i < N-2; i++)
    {
       
        for (int j = 2; j < M - 2; j++)
        {
            if (tablica_dynamiczna[i][j] == 0)
            {
                
                if (tablica_dynamiczna[i - 1][j - 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i][j - 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i + 1][j - 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i + 1][j] == 1)
                    licznik++;
                if (tablica_dynamiczna[i + 1][j + 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i][j + 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i - 1][j + 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i - 1][j] == 1)
                    licznik++;
               // std::cout << licznik << std::endl;
                
                if (licznik == 3)
                    {
                    tablica_dynamiczna1[i][j] = 1;
                    licznik = 0;
                    
                    }
                else
                {
                    tablica_dynamiczna1[i][j] = 0;
                }
                licznik = 0;
                
                
            }
            
            if (tablica_dynamiczna[i][j] == 1)
            {
                
                if (tablica_dynamiczna[i - 1][j - 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i][j - 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i + 1][j - 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i + 1][j] == 1)
                    licznik++;
                if (tablica_dynamiczna[i + 1][j + 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i][j + 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i - 1][j + 1] == 1)
                    licznik++;
                if (tablica_dynamiczna[i - 1][j] == 1)
                    licznik++;
               // std::cout << licznik;
                if (licznik == 3 || licznik == 2)
                {
                    tablica_dynamiczna1[i][j] = 1;
                    licznik = 0;
                   
                }
                else
                {
                    tablica_dynamiczna1[i][j] = 0;
                    licznik = 0;
                }
                licznik = 0;
                

            }
            
        }
        

        
    }
*/
    for (int i = 0; i < N ; i++)
    {

        for (int j =0; j < M ; j++)
        {
            if (tablica_dynamiczna[i][j] == 0)
            {
               
                    //std::cout << zwroc(N, M, -1, -1,) << std::endl;
                   //// std::cout << zwroc(N, M, -1, 0) << std::endl;
                   // std::cout << zwroc(N, M, -1, 1) << std::endl;
                   // std::cout << zwroc(N, M, 0, -1) << std::endl;
                   // std::cout << zwroc(N, M, 0, 1) << std::endl;
                   // std::cout << zwroc(N, M, 1, -1) << std::endl;
                   // std::cout << zwroc(N, M, 1, 0) << std::endl;
                   // std::cout << zwroc(N, M, 1, 1) << std::endl;
                    
                            if (zwroc(i, j, -1, -1,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, -1, 0,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, -1, 1,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, 0, -1,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, 0, 1,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, 1, -1,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, 1, 0,N,M) == 1)
                                licznik++;
                            if (zwroc(i, j, 1, 1,N,M) == 1)
                                licznik++;
                            
                            if (licznik == 3)
                            {
                                tablica_dynamiczna1[i][j] = 1;
                                licznik = 0;

                            }
                            else
                            {
                                tablica_dynamiczna1[i][j] = 0;
                            }
                            licznik = 0;
                           
                
            }
            if (tablica_dynamiczna[i][j] == 1)
            {
                
                        if (zwroc(i, j, -1, -1,N,M) == 1)
                            licznik++;
                        if (zwroc(i, j, -1, 0,N,M) == 1)
                            licznik++;
                        if (zwroc(i, j, -1, 1,N,M) == 1)
                            licznik++;
                        if (zwroc(i, j, 0, -1,N,M) == 1)
                            licznik++;
                        if (zwroc(i,j, 0, 1,N,M) == 1)
                            licznik++;
                        if (zwroc(i,j, 1, -1,N,M) == 1)
                            licznik++;
                        if (zwroc(i, j, 1, 0,N,M) == 1)
                            licznik++;
                        if (zwroc(i, j, 1, 1,N,M) == 1)
                            licznik++;
                        if (licznik == 3 || licznik == 2)
                        {
                            tablica_dynamiczna1[i][j] = 1;
                            licznik = 0;
                            

                        }
                        else
                        {
                            tablica_dynamiczna1[i][j] = 0;
                            licznik = 0;
                        }
                        licznik = 0;

                 
            }

        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            tablica_dynamiczna[i][j] = tablica_dynamiczna1[i][j];

        }

    }
    
	
}
int boxes::zwroc(int a, int b, int x, int y,int N,int M)
{
    
    a += x; b += y;
   
   
    if (a == -1) a = N-1;
    if (b == -1) b = M-1;
    if (a >= N) a = 0;
    if (b >= M) b = 0;

    return tablica_dynamiczna[a][b];
}
