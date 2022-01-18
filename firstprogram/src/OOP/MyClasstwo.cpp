//
// Created by Nadina Amsler on 07.10.2021.
//

#include "MyClasstwo.h";

class MyClasstwo {
    public:
        int mcTwoMyN = 20;

        // Getter
    int getMcTwoMyN() const {
        return mcTwoMyN;
    }
        // Setter
    void setMcTwoMyN(int mcTwoMyN) {
        MyClasstwo::mcTwoMyN = mcTwoMyN;
    }
};