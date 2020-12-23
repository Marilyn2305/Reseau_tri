#include "../../shared/qstd.h"
using namespace qstd;
#include "fils.h"
#include "comparateur.h"
#include "tri.h"
#include <QList>
#include<math.h>

int main()
{
    cout<<"Projet Reseau de Tri :"<<endl;

    cout<<"Allocation : "<<endl;
    Fils fils(4);

    // initialisation
    cout<<"Initialisation : "<<endl;
    fils.ajouteConnecteur(0, 2, 0);
    fils.ajouteConnecteur(1, 3, 1);
    fils.ajouteConnecteur(0, 1, 2);
    fils.ajouteConnecteur(2, 3, 2);
    fils.ajouteConnecteur(1, 2, 3);

    cout<<"Affichage : "<<endl;
    cout<<fils.toString()<<endl;
    // test d'injection unitaire
    int iFilVers=fils.croisement(0);
    cout<<"Fil final de "<< 3<<" : "<<iFilVers<<endl;

    // test d'injection d'une liste
    QList<int> entree;
    entree << 3<< 2<< 4<< 1;
    QList<int> sortie=fils.injecte(entree);
    foreach (int v, sortie)
    {
    cout<<v<<endl;
    }
}


QList <inv> valeurs
nb = 4;

for (i=0, i< pow(2, nb) ; i++)
{
    QList<inv> v_input
    v = i;
    v = v/2;

        for (j= 0 ; j < nb ; j++)
        {
             v_input.prepend (v%2)
        }
}
