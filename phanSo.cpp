//
// Created by linh on 12/06/2022.
//

#include "phanSo.h"
#include <iostream>
phanSo::phanSo(int tu, int mau) {
    this->m_tu = tu;
    this->m_mau = mau;
}

phanSo::~phanSo() {

}

void phanSo::printValue() {
        std::cout<<m_tu<<"/"<<m_mau;
}
