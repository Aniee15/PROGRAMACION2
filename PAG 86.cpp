int main()
{
    std::fstream iofile{ " sample.dat", ios::in | ios::out };
    if (!iofile)
    {
        std::cerr<<"uh oh, sample.dat no se puede abrir!\n";
        return 1;
    }
    char chChar{}; // para leer caracteres por caracter 
    while (iofile.get(chChar)) // leer mientras se pueda
    {
        switch (chChar)
        {   // si encontramos una vocal
            case 'a':   case 'e':    case 'i':  case 'o':   case 'u':
            case 'A':   case 'E':    case 'I':  case 'O':   case 'U':

            iofile.seekg(-1, std::ios::cur);
            iofile<<'#';
            iofile.seekg(iofile.tellg(), std::ios::beg);

            break;
        }
    }

    return 0;
}