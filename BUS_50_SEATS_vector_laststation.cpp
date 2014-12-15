#include <iostream>
#include <vector>
#include <stdbool.h>
#include <stdlib.h>
using namespace std;
int main()
{
system("color f1");
              
      	vector <int> bus;
      	vector <int> test_bus;
	int stat,pokemons,i;
	int station[4];
			
			
      cout<<"Afethria!!!"<<endl;
			
      for (stat=0; stat<4; ++stat)
      {
		cout<<"Epibates : "<<bus.size()<<endl;
                
                int poke_sum=0; //a8roisma epi8atwn stasewn mexri ekeinh thn sthgmh
                
                for (i=0; i<stat; ++i)
                {
                    _Bool flagstat1=0;
				            while (!flagstat1)
                    {                      
                         if (bus.size()==0)
                         {
                                    cout<<"To lewforeio einai keno!"<<endl;
                                    flagstat1=1;
                         }else{
                                      
                                    cout<<"Apo stash "<<i+1<<" exoun meinei "<<station[i]<<" epibates."<<endl;
                                    cout<<"Posoi epibates 8a kateboun apo thn stash "<<i+1<<" ? ";
                                    cin>>pokemons;
                                    if ((pokemons>50) || (pokemons<0) || (pokemons>station[i]))
                                    {
                                                cout<<"@@@ LA8OS !!! DWSE PALI @@@"<<endl;
                                    }else{
						poke_sum+=station[i-1];
						bus.erase(bus.begin()+poke_sum,bus.begin()+poke_sum+pokemons);
                                                station[i]-=pokemons;                                          
                                                flagstat1=1;
                                    }
                          }
                     }          
                }

                _Bool flagstat2=0;    
                while (!flagstat2)
                {
                        cout<<"Posoi epibates 8a aneboun? ";
                        cin>>pokemons;

                        test_bus=bus;
                        for (i=0; i<pokemons; ++i)
                        {
                            test_bus.push_back(stat);
                        }
                        
                        if ((pokemons>50) || (pokemons<0))
                        {
                                cout<<"@@@ LA8OS !!! DWSE PALI @@@"<<endl;
                        }else if (test_bus.size()>50){
				cout<<"MEGISTOS ARI8MOS EPIBATWN 50. DWSE PALI"<<endl;
                        }else{
                         	station[stat]=pokemons;
                                flagstat2=1;
                        }
                }
                bus=test_bus;
                   
                cout<<"------------------------------------------"<<endl;
            }
            cout<<"Teleutaia stash katebhkan :"<<endl;
            for (stat=0; stat<4; stat++)
            {
                cout<<station[stat]<<" epibates apo thn stash "<<stat+1<<endl;
            }

			system("pause");
			system("cls");

system("pause");
}
