#include <cmath>
#include <iomanip>

class frtri
{
    public:
        int primearray[101][26] = {0};
        int facprimearray[101][26] = {0};

        frtri()
        {
            primearray[0][1] = 2;
            primearray[0][2] = 3;
            primearray[0][3] = 5;
            primearray[0][4] = 7;
            primearray[0][5] = 11;
            primearray[0][6] = 13;
            primearray[0][7] = 17;
            primearray[0][8] = 19;
            primearray[0][9] = 23;
            primearray[0][10] = 29;
            primearray[0][11] = 31;
            primearray[0][12] = 37;
            primearray[0][13] = 41;
            primearray[0][14] = 43;
            primearray[0][15] = 47;
            primearray[0][16] = 53;
            primearray[0][17] = 59;
            primearray[0][18] = 61;
            primearray[0][19] = 67;
            primearray[0][20] = 71;
            primearray[0][21] = 73;
            primearray[0][22] = 79;
            primearray[0][23] = 83;
            primearray[0][24] = 89;
            primearray[0][25] = 97;

            for (int i = 1; i<101; i++)
                primearray[i][0]=i;

            facprimearray[0][1] = 2;
            facprimearray[0][2] = 3;
            facprimearray[0][3] = 5;
            facprimearray[0][4] = 7;
            facprimearray[0][5] = 11;
            facprimearray[0][6] = 13;
            facprimearray[0][7] = 17;
            facprimearray[0][8] = 19;
            facprimearray[0][9] = 23;
            facprimearray[0][10] = 29;
            facprimearray[0][11] = 31;
            facprimearray[0][12] = 37;
            facprimearray[0][13] = 41;
            facprimearray[0][14] = 43;
            facprimearray[0][15] = 47;
            facprimearray[0][16] = 53;
            facprimearray[0][17] = 59;
            facprimearray[0][18] = 61;
            facprimearray[0][19] = 67;
            facprimearray[0][20] = 71;
            facprimearray[0][21] = 73;
            facprimearray[0][22] = 79;
            facprimearray[0][23] = 83;
            facprimearray[0][24] = 89;
            facprimearray[0][25] = 97;

            for (int i = 1; i<101; i++)
                facprimearray[i][0]=i;
        }

        int fill_prime_array()
        {
            int wp,i,j,d;
            for (i = 1; i<101; i++)
            {
                wp = i;

                for (j=1; j<26; j++) 
                { 
                    d = primearray[0][j];
                    std::cout << i << " " << j << " " << wp << " " << d << std::endl;
                    if (wp < d)
                        continue;
                    while (wp % primearray[0][j] == 0) 
                    { 
                        primearray[i][j] = primearray[i][j] +1;
                        wp = wp/primearray[0][j];
                    } 
                } 
            }
            return 0;
        }

        int fill_fac_prime_array()
        {
            int wp,i,j,d;
            for (i = 1; i<101; i++)
            {
                for (j=1; j<26; j++) 
                { 
                    if (i==1)
                        facprimearray[i][j] = primearray[i][j];
                    else
                        facprimearray[i][j] = primearray[i][j] + facprimearray[i-1][j];
                } 
            }
            return 0;
        }

        int print_prime_array()
        {
            for (int i = 0; i<101; i++)
            {
                for (int j = 0; j<26; j++)
                {
                    std::cout << std::setw(4) << primearray[i][j];
                }
                std::cout << std::endl;
            } 
            return 0;
        }

        int print_fac_prime_array()
        {
            for (int i = 0; i<101; i++)
            {
                for (int j = 0; j<26; j++)
                {
                    std::cout << std::setw(4) << facprimearray[i][j];
                }
                std::cout << std::endl;
            } 
            return 0;
        }

        int triangleno(int wt)
        {
            return wt*(wt+1)/2;
        }

        int factorial(int wf)
        {
            if (wf==1)
            {
                return 1;
            }
            else 
            {
                return wf*factorial(wf-1);
            }
        }

        int prime_factors(int wp)
        {
            while (wp % 2 == 0) 
                { 
                    std::cout << 2 << " "; 
                    wp = wp/2; 
                } 

            for (int i = 3; i <= sqrt(wp); i = i + 2) 
                { 
        
                while (wp % i == 0) 
                    { 
                    std::cout << i << " "; wp = wp/i; 
                    } 
                } 
            if (wp > 2) 
                    std::cout << wp << " "; 
            return 0;
        }
        
};