#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct periodictable
{
    int atmnum;
    char sym[3], name[20];
    double weight;
    char block[2], class[30];
} pt[] ={
        1, "H", "Hydrogen", 1.00797, "s", "Reactive_Non_Metal",
        2, "He", "Helium", 4.0026, "s", "Noble_Gas",
        3, "Li", "Lithium", 6.941, "s", "Alkali_Metal",
        4, "Be", "Beryllium", 9.01218, "s", "Alkaline_Earth_Metal",
        5, "B", "Boron", 10.81, "p", "Metalloid",
        6, "C", "Carbon", 12.011, "p", "Reactive_Non_Metal",
        7, "N", "Nitrogen", 14.0067, "p", "Reactive_Non_Metal",
        8, "O", "Oxygen", 15.9994, "p", "Reactive_Non_Metal",
        9, "F", "Fluorine", 18.998403, "p", "Reactive_Non_Metal",
        10, "Ne", "Neon", 20.179, "p", "Noble_Gas",
        11, "Na", "Sodium", 22.98977, "s", "Alkali_Metal",
        12, "Mg", "Magnesium", 24.305, "s", "Alkaline_Earth_Metal",
        13, "Al", "Aluminium", 26.98154, "p", "Post_Transition_Metal",
        14, "Si", "Silicon", 28.0855, "p", "Metalloid",
        15, "P", "Phosphorus", 30.97376, "p", "Reactive_Non_Metal",
        16, "S", "Sulphur", 32.06, "p", "Reactive_Non_Metal",
        17, "Cl", "Chlorine", 35.453, "p", "Reactive_Non_Metal",
        18, "Ar", "Argon", 39.948, "p", "Noble_Gas",
        19, "K", "Potassium", 39.0983, "s", "Alkali_Metal",
        20, "Ca", "Calcium", 40.08, "s", "Alkaline_Earth_Metal",
        21, "Sc", "Scandium", 44.9559, "d", "Transition_Metal",
        22, "Ti", "Titanium", 47.9, "d", "Transition_Metal",
        23, "V", "Vanadium", 50.9415, "d", "Transition_Metal",
        24, "Cr", "Chromium", 51.996, "d", "Transition_Metal",
        25, "Mn", "Manganese", 54.938, "d", "Transition_Metal",
        26, "Fe", "Iron", 55.847, "d", "Transition_Metal",
        27, "Co", "Cobalt", 58.9332, "d", "Transition_Metal",
        28, "Ni", "Nickel", 58.7, "d", "Transition_Metal",
        29, "Cu", "Copper", 63.54, "d", "Transition_Metal",
        30, "Zn", "Zinc", 65.38, "d", "Post_Transition_Metal",
        31, "Ga", "Gallium", 69.72, "p", "Post_Transition_Metal",
        32, "Ge", "Germanium", 72.59, "p", "Metalloid",
        33, "As", "Arsenic", 74.9216, "p", "Metalloid",
        34, "Se", "Selenium", 78.96, "p", "Reactive_Non_Metal",
        35, "Br", "Bromine", 79.904, "p", "Reactive_Non_Metal",
        36, "Kr", "Krypton", 83.8, "p", "Noble_Gas",
        37, "Rb", "Rubidium", 85.4678, "s", "Alkali_Metal",
        38, "Sr", "Strontium", 87.62, "s", "Alkaline_Earth_Metal",
        39, "Y", "Yttrium", 88.9059, "d", "Transition_Metal",
        40, "Zr", "Zirconium", 91.22, "d", "Transition_Metal",
        41, "Nb", "Niobium", 92.9064, "d", "Transition_Metal",
        42, "Mo", "Molybdenum", 95.94, "d", "Transition_Metal",
        43, "Tc", "Technetium", 98, "d", "Transition_Metal",
        44, "Ru", "Ruthenium", 101.07, "d", "Transition_Metal",
        45, "Rh", "Rhodium", 102.9055, "d", "Transition_Metal",
        46, "Pd", "Palladium", 106.4, "d", "Transition_Metal",
        47, "Ag", "Silver", 107.868, "d", "Transition_Metal",
        48, "Cd", "Cadmium", 112.41, "d", "Post_Transition_Metal",
        49, "In", "Indium", 114.82, "p", "Post_Transition_Metal",
        50, "Sn", "Tin", 118.69, "p", "Post_Transition_Metal",
        51, "Sb", "Antimony", 121.75, "p", "Metalloid",
        52, "Te", "Tellurium", 127.6, "p", "Metalloid",
        53, "I", "Iodine", 126.9045, "p", "Reactive_Non_Metal",
        54, "Xe", "Xenon", 131.3, "p", "Noble_Gas",
        55, "Cs", "Caesium", 132.9054, "s", "Alkali_Metal",
        56, "Ba", "Barium", 137.33, "s", "Alkaline_Earth_Metal",
        57, "La", "Lanthanum", 138.9055, "f", "Lanthanide",
        58, "Ce", "Cerium", 140.12, "f", "Lanthanide",
        59, "Pr", "Praseodymium", 140.9077, "f", "Lanthanide",
        60, "Nd", "Neodymium", 144.25, "f", "Lanthanide",
        61, "Pm", "Promethium", 145, "f", "Lanthanide",
        62, "Sm", "Samarium", 150.4, "f", "Lanthanide",
        63, "Eu", "Europium", 151.96, "f", "Lanthanide",
        64, "Gd", "Gadolinium", 157.25, "f", "Lanthanide",
        65, "Tb", "Terbium", 158.9254, "f", "Lanthanide",
        66, "Dy", "Dysprosium", 162.5, "f", "Lanthanide",
        67, "Ho", "Holmium", 164.9304, "f", "Lanthanide",
        68, "Er", "Erbium", 167.26, "f", "Lanthanide",
        69, "Tm", "Thulium", 168.9342, "f", "Lanthanide",
        70, "Yb", "Ytterbium", 173.04, "f", "Lanthanide",
        71, "Lu", "Lutetium", 174.967, "d", "Lanthanide",
        72, "Hf", "Hafnium", 178.49, "d", "Transition_Metal",
        73, "Ta", "Tantalum", 180.9479, "d", "Transition_Metal",
        74, "W", "Tungsten", 183.85, "d", "Transition_Metal",
        75, "Re", "Rhenium", 186.207, "d", "Transition_Metal",
        76, "Os", "Osmium", 190.2, "d", "Transition_Metal",
        77, "Ir", "Iridium", 192.22, "d", "Transition_Metal",
        78, "Pt", "Platinum", 195.09, "d", "Transition_Metal",
        79, "Au", "Gold", 196.9665, "d", "Transition_Metal",
        80, "Hg", "Mercury", 200.59, "d", "Post_Transition_Metal",
        81, "Ti", "Thallium", 204.37, "p", "Post_Transition_Metal",
        82, "Pb", "Lead", 207.2, "p", "Post_Transition_Metal",
        83, "Bi", "Bismuth", 208.9804, "p", "Post_Transition_Metal",
        84, "Po", "Polonium", 209, "p", "Post_Transition_Metal",
        85, "At", "Astatine", 210, "p", "Metalloid",
        86, "Rn", "Radon", 222, "p", "Noble_Gas",
        87, "Fr", "Francium", 223, "s", "Alkali_Metal",
        88, "Ra", "Radium", 226.0254, "s", "Alkaline_Earth_Metal",
        89, "Ac", "Actinium", 227.0278, "f", "Actinide",
        90, "Th", "Thorium", 232.0381, "f", "Actinide",
        91, "Pa", "Protactinium", 231.0359, "f", "Actinide",
        92, "U", "Uranium", 238.029, "f", "Actinide",
        93, "Np", "Neptunium", 237.0482, "f", "Actinide",
        94, "Pu", "Plutonium", 242, "f", "Actinide",
        95, "Am", "Americium", 243, "f", "Actinide",
        96, "Cm", "Curium", 247, "f", "Actinide",
        97, "Bk", "Berkelium", 247, "f", "Actinide",
        98, "Cf", "Californium", 251, "f", "Actinide",
        99, "Es", "Einsteinium", 252, "f", "Actinide",
        100, "Fm", "Fermium", 257, "f", "Actinide",
        101, "Md", "Mendelevium", 258, "f", "Actinide",
        102, "No", "Nobelium", 250, "f", "Actinide",
        103, "Lr", "Lawrencium", 260, "d", "Actinide",
        104, "Rf", "Rutherfordium", 261, "d", "Transition_Metal",
        105, "Db", "Dubnium", 262, "d", "Transition_Metal",
        106, "Sg", "Seaborgium", 263, "d", "Transition_Metal",
        107, "Bh", "Bohrium", 262, "d", "Transition_Metal",
        108, "Hs", "Hassium", 255, "d", "Transition_Metal",
        109, "Mt", "Meitnerium", 256, "d", "Unknown_Properties",
        110, "Ds", "Darmstadium", 269, "d", "Unknown_Properties",
        111, "Rg", "Roentgenium", 272, "d", "Unknown_Properties",
        112, "Cn", "Copernicium", 277, "d", "Post_Transition_Metal",
        113, "Nh", "Nihonium", 286, "p", "Unknown_Properties",
        114, "Fl", "Flerovium", 289, "p", "Unknown_Properties",
        115, "Mc", "Moscovium", 290, "p", "Unknown_Properties",
        116, "Lv", "Livermorium", 293, "p", "Unknown_Properties",
        117, "Ts", "Tennessine", 294, "p", "Unknown_Properties",
        118, "Og", "Oganesson", 294, "p", "Unknown_Properties"};
void showall()
{
    printf("Here's list of all elements of the periodic table:\n\n");
    int i;
    printf("\nNo.   Symbol      Name              Mass       Block    Metallic_Classification");
    printf("\n================================================================================");
    for (i = 0; i < 118; i++)
    {
        printf("\n\n%d", pt[i].atmnum);
        printf("\t%-3s", pt[i].sym);
        printf("\t%-10s", pt[i].name);
        printf("\t%8.3lf", pt[i].weight);
        printf("\t%-7s", pt[i].block);
        printf("\t%s", pt[i].class);
    }
}
void searchbynum()
{
    printf("Search By Atomic Number:\n\n");
    int i, num;
    printf("Enter atomic number to search:");
    scanf("%d", &num);
    for (i = 0; i < 118; i++)
    {
        if (num == pt[i].atmnum)
        {
            printf("\n\nAtomic number : %d", pt[i].atmnum);
            printf("\nSymbol : %s", pt[i].sym);
            printf("\nName of the Element : %s", pt[i].name);
            printf("\nAtomic Weight : %lf amu", pt[i].weight);
            printf("\nBlock : %s", pt[i].block);
            printf("\nMetallic Classification : %s", pt[i].class);
        }
    }
}
void searchbyname()
{
    printf("Search By Element's Name:\n\n");
    int i;
    char n[20];
    printf("Enter the Name of the Element (First letter capital) to search:");
    scanf("%s", n);
    for (i = 0; i < 118; i++)
    {
        if (strcmp(n, pt[i].name) == 0)
        {
            printf("\n\nAtomic number : %d", pt[i].atmnum);
            printf("\nSymbol : %s", pt[i].sym);
            printf("\nName of the Element : %s", pt[i].name);
            printf("\nAtomic Weight : %lf amu", pt[i].weight);
            printf("\nBlock : %s", pt[i].block);
            printf("\nMetallic Classification : %s", pt[i].class);
        }
    }
}
void searchbysym()
{
    printf("Search By Element's Symbol:\n\n");
    int i;
    char s[3];
    printf("Enter the Symbol of the Element:");
    scanf("%s", s);
    for (i = 0; i < 118; i++)
    {
        if (strcmp(s, pt[i].sym) == 0)
        {
            printf("\n\nAtomic number : %d", pt[i].atmnum);
            printf("\nSymbol : %s", pt[i].sym);
            printf("\nName of the Element : %s", pt[i].name);
            printf("\nAtomic Weight : %lf amu", pt[i].weight);
            printf("\nBlock : %s", pt[i].block);
            printf("\nMetallic Classification : %s", pt[i].class);
        }
    }
}
void searchbyblk()
{
    printf("Search By Block(s,p,d,f):\n\n");
    int i;
    char blk[2];
    printf("Enter the Block:");
    scanf("%s", blk);
    printf("\nNo.   Symbol      Name              Mass       Block    Metallic_Classification");
    printf("\n================================================================================");
    for (i = 0; i < 118; i++)
    {
        if (strcmp(blk, pt[i].block) == 0)
        {
            printf("\n\n%d", pt[i].atmnum);
            printf("\t%-3s", pt[i].sym);
            printf("\t%-10s", pt[i].name);
            printf("\t%8.3lf", pt[i].weight);
            printf("\t%-7s", pt[i].block);
            printf("\t%s", pt[i].class);
        }
    }
}
searchbyclass()
{
    printf("Classify on the basis of properties of elements:\n\n");
    int n1;
    do
    {
        printf("\n1. Alkali Metals.\n2. Alkaline Earth Metals.\n3. Transition Metals.\n4. Post Transition Metals. \n5. Metalloids. \n6. Reactive Non-Metals. \n7. Noble Gases. \n8. Lanthanide. \n9. Actinide.");
        printf("\n\nSelect any one to classify:");
        scanf("%d", &n1);
        system("cls");
        if (n1 > 0 && n1 < 10)
        {
            int i;
            printf("\nNo.   Symbol      Name              Mass       Block    Metallic_Classification");
            printf("\n================================================================================");
            switch (n1)
            {
            case 1:
                n1 = 1;
                char cl1[30] = {"Alkali_Metal"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl1, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 2:
                n1 = 2;
                char cl2[30] = {"Alkaline_Earth_Metal"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl2, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 3:
                n1 = 3;
                char cl3[30] = {"Transition_Metal"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl3, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 4:
                n1 = 4;
                char cl4[30] = {"Post_Transition_Metal"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl4, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 5:
                n1 = 5;
                char cl5[30] = {"Metalloid"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl5, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 6:
                n1 = 6;
                char cl6[30] = {"Reactive_Non_Metal"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl6, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 7:
                n1 = 7;
                char cl7[30] = {"Noble_Gas"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl7, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 8:
                n1 = 8;
                char cl8[30] = {"Lanthanide"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl8, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            case 9:
                n1 = 9;
                char cl9[30] = {"Actinide"};
                for (i = 0; i < 118; i++)
                {
                    if (strcmp(cl9, pt[i].class) == 0)
                    {
                        printf("\n\n%d", pt[i].atmnum);
                        printf("\t%-3s", pt[i].sym);
                        printf("\t%-10s", pt[i].name);
                        printf("\t%8.3lf", pt[i].weight);
                        printf("\t%-7s", pt[i].block);
                        printf("\t%s", pt[i].class);
                    }
                }
                break;
            }
            break;
        }
        else
        {
            n1 = 1;
            system("cls");
            printf("Not Valid...Enter valid Entry!!\n\n");
            continue;
        }
    } while (1);
}
void main()
{
    int x;
    do
    {
        printf("\n       Modern Periodic Table");
        printf("\n+---------------------------------+");
        printf("\n| 1. Show All                     |");
        printf("\n|---------------------------------|");
        printf("\n| 2. Search By Atomic Number      |");
        printf("\n|---------------------------------|");
        printf("\n| 3. Search By Element's Name     |");
        printf("\n|---------------------------------|");
        printf("\n| 4. Search By Element's Symbol   |");
        printf("\n|---------------------------------|");
        printf("\n| 5. Classify By Block            |");
        printf("\n|---------------------------------|");
        printf("\n| 6. Classify By Type Of Elements |");
        printf("\n|---------------------------------|");
        printf("\n| 7. Exit                         |");
        printf("\n+---------------------------------+");
        printf("\n\nEnter Your Choice:");
        scanf("%d", &x);

        if (x > 0 && x < 7)
        {
            switch (x)
            {
            case 1:
                x = 1;
                system("cls");
                showall();
                break;
            case 2:
                x = 2;
                system("cls");
                searchbynum();
                break;
            case 3:
                x = 3;
                system("cls");
                searchbyname();
                break;
            case 4:
                x = 4;
                system("cls");
                searchbysym();
                break;
            case 5:
                x = 5;
                system("cls");
                searchbyblk();
                break;
            case 6:
                x = 6;
                system("cls");
                searchbyclass();
                break;
            }
            int a;
            printf("\n\nPress 1 to go back to home.");
            printf("\nPress 2 to Exit.\n");
            do
            {
                scanf("%d", &a);
                if (a == 1)
                {
                    a = 1;
                    break;
                }
                else if (a == 2)
                {
                    x = 7;
                    system("cls");
                    printf("Thank you!!");
                    printf("\n");
                    break;
                }
                else
                {
                    printf("Enter a valid number!!\n");
                }
            } while (1);
            if (a == 1)
            {
                a = 1;
                system("cls");
                continue;
            }
            break;
        }
        else if (x == 7)
        {
            x = 7;
            system("cls");
            printf("Thank you!!");
            printf("\n");
            break;
        }
        else
        {
            x = 1;
            system("cls");
            printf("Enter a Valid Number!!\n\n");
            continue;
        }
    } while (1);
}
