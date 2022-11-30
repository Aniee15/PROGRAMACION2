inf.seekg (14, ios::cur); // avanzar 14 bytes
inf.seekg (-18, ios::cur); // retrocede 18 bytes
inf.seekg (22, ios::beg); // mover al byte 22 en el archivo
inf.seekg (24); // mover al byte 24 en el archivo
inf.seekg (-28, ios::end); // pasar al byte 28 antes del final del archivo
inf.seekg (0, ios::beg); // mover al principio del archivo
inf.seekg (0, ios::end); // mover al final del archivo