#include <iostream>
#include <cstdlib>
#include <string>

// david je mega gay
int main()
{
    std::string zkratky[] = {
        // 1. perioda
        "H", "He",
        // 2. perioda
        "Li", "Be", "B", "C", "N", "O", "F", "Ne",
        // 3. perioda
        "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar",
        // 4. perioda
        "K", "Ca",
        "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn",
        "Ga", "Ge", "As", "Se", "Br", "Kr",
        // 5. perioda
        "Rb", "Sr",
        "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd",
        "In", "Sn", "Sb", "Te", "I", "Xe",
        // 6. perioda
        "Cs", "Ba",
        "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg",
        "Tl", "Pb", "Bi", "Po", "At", "Rn",
        // 7. perioda
        "Fr", "Ra",
        "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn",
        "Nh", "Fl", "Mc", "Lv", "Ts", "Og"
    };

    std::string prvky[] = {
        // 1. perioda
        "Vodik", "Helium",
        // 2. perioda
        "Lithium", "Beryllium", "Bor", "Uhlik", "Dusik", "Kyslik", "Fluor", "Neon",
        // 3. perioda
        "Sodik", "Horčik", "Hlinik", "Kremik", "Fosfor", "Sirа", "Chlor", "Argon",
        // 4. perioda
        "Draslik", "Vapenik",
        "Skandium", "Titan", "Vanad", "Chrom", "Mangan", "Zelezo", "Kobalt", "Nikл", "Med", "Zinek",
        "Galium", "Germanium", "Arsen", "Selen", "Brom", "Krypton",
        // 5. perioda
        "Rubidium", "Stroncium",
        "Yttrium", "Zirconium", "Niob", "Molybden", "Technetium", "Ruthenium", "Rhodium", "Paladium", "Stribro", "Kadmium",
        "Indium", "Cin", "Antimon", "Tellur", "Jod", "Xenon",
        // 6. perioda
        "Cezium", "Baryum",
        "Hafnium", "Tantal", "Wolfram", "Rhenium", "Osmium", "Iridium", "Platina", "Zlato", "Rtut",
        "Thallium", "Olovo", "Bismut", "Polonium", "Astat", "Radon",
        // 7. perioda
        "Francium", "Radium",
        "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Kopernicium",
        "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tenness", "Oganesson"
    };
    int count;
    int size = sizeof(zkratky) / sizeof(zkratky[0]);
    std::string temp;
    int correct = 0;
    int wrong = 0;
    int accuracy;

    std::cout << "How many periodic elements you want to be tested with?"<< std::endl;
    std::cin >> count;
    
    srand(time(nullptr));

    for (int i = 0; i < count; i++)
    {
        int random = rand() % size;

        std::cout << prvky[random] << std::endl;
        std::cin >> temp;

        if (temp == zkratky[random])
        {
            correct++;
            std::cout << "Correct!" << std::endl;
        }

        if (temp != zkratky[random])
        {
            wrong++;
            std::cout << "Wrong correct answer was " << zkratky[random] << std::endl;
        }
    }

    accuracy = static_cast<double>(correct) / (correct + wrong) * 100;
    std::cout << "You got " << correct << " correct and " << wrong << " wrong. " << "That means you did it with " << accuracy << "% accuracy and " << count << " tryes!" << std::endl;
    system("pause");

    return 0;
}