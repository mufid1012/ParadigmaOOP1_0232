#ifndef ANAK_H
#define ANAK_H

class anak {
public:
    string nama;
    anak(string pNama) :nama(pNama) {
        cout << "Anak \"" << nama << "\" ada\n";
    }
    ~anak() {
        cout << "Anakk \"" << nama << "\" tidak ada\n";
    }
};
#endif