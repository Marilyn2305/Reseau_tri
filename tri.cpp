#include "tri.h"

tri::tri()
{
    void tri_insertion(int* t)
    {
        int i, j;
        int en_cours;

        for (i = 0; i < 4; i++)
        {
            en_cours = t[i];
            for (j = i; j > 0 && t[j - 1] > en_cours; j--)
            {
                t[j] = t[j - 1];
            }
            t[j] = en_cours;
        }
    }
}
