//
// Created by linh on 12/06/2022.
//

#include "phanSo.h"
#include <iostream>

using namespace std;

phanSo::phanSo(int tu, int mau) {
    this->m_tu = tu;
    this->m_mau = tu;
}

phanSo::~phanSo() {

}

void phanSo::print_value() {
    cout << m_tu << "/" << m_mau << endl;
}

