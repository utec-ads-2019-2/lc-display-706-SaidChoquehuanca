#include <iostream>
#include <string.h>

const char tabla_numbers[10][7] = {
        '-','|','|',' ','|','|','-',
        ' ','|',' ',' ','|',' ',' ',
        '-','|',' ','-',' ','|','-',
        '-','|',' ','-','|',' ','-',
        ' ','|','|','-','|',' ',' ',
        '-',' ','|','-','|',' ','-',
        '-',' ','|','-','|','|','-',
        '-','|',' ',' ','|',' ',' ',
        '-','|','|','-','|','|','-',
        '-','|','|','-','|',' ','-',
};

int main (){
    int tamano_char;
    char input[9];
    while(scanf("%d %s", &tamano_char, &input) != EOF) {
        if (!tamano_char) {
            return 0;
        }
        int numero;
        for (int i = 0; i < 2*tamano_char+3; i++) {
            for (int j = 0; j < strlen(input); j ++) {
                numero = input[j] - '0';
                if ((i % (tamano_char + 1)) == 0) {
                    std::cout<<" ";
                    for (int k = 0; k < tamano_char; k++) {
                        std::cout<<tabla_numbers[numero][(i/(tamano_char + 1))*3];
                    }
                    std::cout<<" ";
                }
                if (i > 0 and i < (tamano_char + 1)) {
                    std::cout<<tabla_numbers[numero][2];
                    for (int k = 0; k < tamano_char; k++) {
                        std::cout<<" ";
                    }
                    std::cout<<tabla_numbers[numero][1];
                }

                if (i > (tamano_char + 1) and i < (2*tamano_char + 2)) {
                    std::cout<<tabla_numbers[numero][5];
                    for (int k = 0; k < tamano_char; k++) {
                        std::cout<<" ";
                    }
                    std::cout<<tabla_numbers[numero][4];
                }
                if (j != strlen(input)-1)
                    std::cout<<" ";
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }
    return 0;
}