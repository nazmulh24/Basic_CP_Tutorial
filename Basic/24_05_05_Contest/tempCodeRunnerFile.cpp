else
            for (int j = 1; j < 31; j++)
            {
                if (j == H)
                    cout << "H";
                else if (j == T)
                    cout << "T";

                else if (j > T && j < H)
                    cout << "-";
                else
                    cout << ".";
            }