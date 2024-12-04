#ifndef BASAMAK_HPP
#define BASAMAK_HPP

class Basamak {
public:
    int deger;
    Basamak* sonraki;
    Basamak(int deger, Basamak* sonraki = nullptr);

};

#endif